from pathlib import Path
import struct,sys,json
from dialog_layout import DialogReader

def resource_dialogs(data,pe):
    optional=pe+24
    resource_rva=struct.unpack_from('<I',data,optional+112)[0]
    count=struct.unpack_from('<H',data,pe+6)[0]
    section_start=optional+struct.unpack_from('<H',data,pe+20)[0]
    sections=[]
    for index in range(count):
        start=section_start+index*40
        virtual_size,rva,raw_size,raw=struct.unpack_from('<IIII',data,start+8)
        sections.append((rva,max(virtual_size,raw_size),raw))
    def offset(rva):
        for va,size,raw in sections:
            if va<=rva<va+size:return raw+rva-va
        raise ValueError('Unmapped resource RVA')
    base=offset(resource_rva)
    def entries(relative):
        start=base+relative
        names,ids=struct.unpack_from('<HH',data,start+12)
        result={}
        for index in range(names+ids):
            name,value=struct.unpack_from('<II',data,start+16+index*8)
            if not name&0x80000000:result[name]=value
        return result
    top=entries(0)
    if 5 not in top:raise ValueError('Dialog resources missing')
    dialogs={}
    for ident,node in entries(top[5]&0x7fffffff).items():
        languages=entries(node&0x7fffffff)
        entry=languages.get(1033,next(iter(languages.values())))
        rva,size=struct.unpack_from('<II',data,base+(entry&0x7fffffff))
        dialogs[str(ident)]=DialogReader(data[offset(rva):offset(rva)+size]).dialog()
    return dialogs

files=list(Path(sys.argv[1]).glob('*.dll'))+list(Path(sys.argv[1]).glob('*.exe'))
if not files:raise SystemExit('No Windows artifacts found')
for path in files:
    data=path.read_bytes()
    if data[:2]!=b'MZ':raise SystemExit(f'Invalid DOS header: {path.name}')
    offset=struct.unpack_from('<I',data,0x3c)[0]
    if data[offset:offset+4]!=b'PE\0\0':raise SystemExit(f'Invalid PE header: {path.name}')
    if struct.unpack_from('<H',data,offset+4)[0]!=0x14c:raise SystemExit(f'Artifact is not x86: {path.name}')
    if struct.unpack_from('<H',data,offset+24)[0]!=0x10b:raise SystemExit(f'Artifact is not PE32: {path.name}')
    if path.name=='botzin_host.dll':
        expected=json.loads(Path('resources/dialogs.json').read_text(encoding='utf8'))
        actual=resource_dialogs(data,offset)
        if actual!=expected:
            for key in sorted(set(actual)|set(expected)):
                if actual.get(key)!=expected.get(key):
                    print('Resource mismatch:',key)
                    print('expected:',json.dumps(expected.get(key),ensure_ascii=False))
                    print('actual:',json.dumps(actual.get(key),ensure_ascii=False))
                    break
            raise SystemExit('Dialog resource semantics changed')
        print(f'{path.name}: {len(actual)} dialogs and 506 controls verified')
    print(f'{path.name}: PE32 x86 verified')
