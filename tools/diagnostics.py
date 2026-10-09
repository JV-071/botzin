"""Normalize compiler evidence and rank probable causes without hiding raw logs."""
from pathlib import Path
import argparse,collections,json,re,os,datetime,bisect
ANSI=re.compile(r'\x1b\[[0-9;]*[A-Za-z]')
LOCATED=re.compile(r'^(.*?)\((\d+)(?:,(\d+))?\)\s*:\s*(fatal error|error|warning|note)\s*(?:(C\d+|RC\d+|LNK\d+|CVT\d+)\s*:)?\s*(.*)$',re.I)
UNLOCATED=re.compile(r'^(.*?)\s*:\s*(fatal error|error|warning)\s+(C\d+|RC\d+|LNK\d+|CVT\d+)\s*:\s*(.*)$',re.I)
FUNCTION=re.compile(r'^\s*[A-Za-z_]\w*(?:[ \t*]+[A-Za-z_]\w*)*[ \t*]+([A-Za-z_]\w*)\s*\(',re.M)
HINTS={
'incomplete_type':'Recuperar o tamanho e os campos do tipo; não substituir por um struct fictício.',
'function_symbol_conflict':'Uma função foi exportada também como variável. Conferir o símbolo e a ABI no endereço nativo.',
'conflicting_declarations':'Há tipos incompatíveis ou sobreposição de dados. Conferir tamanho, alinhamento e acessos no assembly.',
'unresolved_stack_layout':'A variável representa um endereço de pilha não recuperado. Reconstruir o frame e os argumentos.',
'unresolved_register_state':'Conferir os registradores de entrada/saída e a convenção de chamada.',
'missing_symbol':'Verificar declaração, includes e falhas anteriores de parsing antes de criar o símbolo.',
'invalid_type_syntax':'Conferir identificadores de tipos exportados, templates e incompatibilidade entre C e C++.',
'calling_convention':'Conferir largura dos ponteiros, registradores, parâmetros e limpeza da pilha.',
'missing_input':'Verificar caminho, checkout, includes e dependências na etapa que falhou.',
'duplicate_resource':'Há duas definições do mesmo recurso; conferir manifestos e recursos do linker.',
'link_failure':'Conferir o primeiro erro do linker e as bibliotecas/objetos envolvidos.',
'uninitialized_state':'Conferir se o valor foi inicializado ou se corresponde a um registrador perdido na recuperação.',
'other':'Conferir o log completo, contexto de código e a primeira falha anterior na mesma unidade.'}

def category(code,message):
    if 'stack0x' in message:return 'unresolved_stack_layout'
    if re.search(r'\b(?:in_|unaff_|extraout_)\w+',message):return 'unresolved_register_state'
    if code=='C2365' and 'FUN_' in message:return 'function_symbol_conflict'
    if code in {'C2016','C2027','C2079','C2504'}:return 'incomplete_type'
    if code in {'C2040','C2371','C2365','C2086'}:return 'conflicting_declarations'
    if code in {'C3856','C2143','C2061','C2059','C2628'}:return 'invalid_type_syntax'
    if code in {'C4113','C4133','C4191','C4047'}:return 'calling_convention'
    if code=='C2065':return 'missing_symbol'
    if code in {'C1083','RC2135'}:return 'missing_input'
    if code=='CVT1100':return 'duplicate_resource'
    if code.startswith('LNK'):return 'link_failure'
    if code in {'C4700','C4701'}:return 'uninitialized_state'
    return 'other'

def relative_file(text,root):
    root=root.resolve()
    path=Path(text.replace('\\','/'))
    try:
        resolved=(path if path.is_absolute() else root/path).resolve()
        return resolved.relative_to(root).as_posix()
    except (ValueError,OSError):return text.replace('\\','/')

def parse_log(text,component,root):
    rows=[]
    for raw in text.splitlines():
        line=ANSI.sub('',raw).strip('\ufeff')
        match=LOCATED.match(line)
        if match:
            file,ln,col,severity,code,message=match.groups()
            item={'component':component,'file':relative_file(file,root),'line':int(ln),'column':int(col) if col else None,'severity':severity.lower(),'code':code or '', 'message':message,'related_notes':[]}
        else:
            match=UNLOCATED.match(line)
            if not match:continue
            file,severity,code,message=match.groups()
            item={'component':component,'file':file.strip(),'line':None,'column':None,'severity':severity.lower(),'code':code,'message':message,'related_notes':[]}
        if item['severity']=='note':
            if rows:rows[-1]['related_notes'].append(item)
            continue
        item['category']=category(item['code'],item['message'])
        item['hint']=HINTS[item['category']]
        symbols=re.findall(r'\b(?:FUN_|_?DAT_|stack0x|in_|unaff_|extraout_)[A-Za-z0-9_]+',item['message'])
        item['symbols']=symbols
        addresses=re.findall(r'\b(?:FUN_|_?DAT_)([0-9a-fA-F]{8})\b',item['message'])
        item['native_addresses']=['0x'+a.lower() for a in dict.fromkeys(addresses)]
        rows.append(item)
    return rows

def enrich(rows,root):
    root=root.resolve()
    cache={}
    for item in rows:
        path=(root/item['file']).resolve()
        if not path.is_relative_to(root) or not path.is_file() or path.suffix not in {'.c','.h','.rc'}:continue
        if path not in cache:
            source=path.read_text(encoding='utf8',errors='replace');lines=source.splitlines();breaks=[m.start() for m in re.finditer('\n',source)];functions=[]
            if path.suffix=='.c':
                for m in FUNCTION.finditer(source):
                    brace=source.find('{',m.end());semicolon=source.find(';',m.end())
                    if brace>=0 and (semicolon<0 or brace<semicolon):functions.append((bisect.bisect_right(breaks,m.start())+1,m.group(1)))
            cache[path]=(lines,functions,[x[0] for x in functions])
        lines,functions,starts=cache[path];line=item['line']
        if not line:continue
        item['context']=[{'line':i+1,'text':lines[i]} for i in range(max(0,line-3),min(len(lines),line+2))]
        position=bisect.bisect_right(starts,line)-1
        if position>=0:
            item['function']=functions[position][1]
            if item['function'].startswith('FUN_'):item['function_address']='0x'+item['function'][4:]

def summarize(rows):
    candidates=[];seen=set();parse_files=set()
    for index,item in enumerate(rows):
        key=(item['component'],item['file'],item['category'])
        cascade=item['category']=='missing_symbol' and (item['component'],item['file']) in parse_files
        item['possible_cascade']=cascade
        if item['category'] in {'incomplete_type','invalid_type_syntax'}:parse_files.add((item['component'],item['file']))
        if item['severity'] in {'error','fatal error'} and key not in seen and not cascade:
            seen.add(key);candidates.append({'diagnostic_index':index,'component':item['component'],'file':item['file'],'line':item['line'],'code':item['code'],'category':item['category'],'hint':item['hint'],'confidence':'probable','evidence':item['message']})
    return candidates

def report(root,logs):
    root=root.resolve();rows=[]
    for path in sorted(logs.glob('*')):
        if path.is_file() and (path.name.endswith('-compiler.txt') or path.suffix=='.log'):
            rows.extend(parse_log(path.read_text(encoding='utf-8-sig',errors='replace'),path.stem.replace('-compiler',''),root))
    enrich(rows,root);candidates=summarize(rows)
    return {'schema_version':1,'created_utc':datetime.datetime.now(datetime.timezone.utc).isoformat(),'commit':os.getenv('GITHUB_SHA'),'run_url':f"https://github.com/{os.getenv('GITHUB_REPOSITORY','JV-071/botzin')}/actions/runs/{os.getenv('GITHUB_RUN_ID','')}",'counts':dict(collections.Counter(x['severity'] for x in rows)),'categories':dict(collections.Counter(x['category'] for x in rows)),'root_cause_candidates':candidates,'diagnostics':rows}

def markdown(data):
    lines=['# Diagnósticos Botzin','',f"Commit: `{data['commit']}`",'',f"Ocorrências: {data['counts']}",'','As causas abaixo são hipóteses apoiadas nos erros observados. Os logs completos permanecem nos artefatos.','','| Componente | Código | Local | Causa provável |','|---|---|---|---|']
    for item in data['root_cause_candidates'][:30]:
        place=item['file']+(f":{item['line']}" if item['line'] else '')
        lines.append(f"| {item['component']} | {item['code']} | {place.replace('|','/')} | {item['hint'].replace('|','/')} |")
    if not data['diagnostics']:lines+=['','Nenhum diagnóstico de compilador foi extraído. Isso não substitui o resultado das etapas e dos testes.']
    return '\n'.join(lines)+'\n'

if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--root',type=Path,default=Path('.'));p.add_argument('--logs',type=Path,default=Path('artifacts'));p.add_argument('--output',type=Path,default=Path('artifacts/diagnostics.json'));p.add_argument('--summary',type=Path,default=Path('artifacts/diagnostics.md'));a=p.parse_args();data=report(a.root,a.logs);a.output.parent.mkdir(parents=True,exist_ok=True);a.output.write_text(json.dumps(data,ensure_ascii=False,indent=2),encoding='utf8');a.summary.write_text(markdown(data),encoding='utf8');print(json.dumps({'counts':data['counts'],'candidates':len(data['root_cause_candidates'])}))
