from pathlib import Path
import struct,json
class DialogReader:
 def __init__(self,b):self.b=b;self.p=0
 def take(self,fmt):
  size=struct.calcsize('<'+fmt);v=struct.unpack_from('<'+fmt,self.b,self.p);self.p+=size;return v[0] if len(v)==1 else v
 def field(self):
  n=self.take('H')
  if n==0:return ''
  if n==65535:return self.take('H')
  chars=[n]
  while True:
   n=self.take('H')
   if n==0:break
   chars.append(n)
  return struct.pack('<'+'H'*len(chars),*chars).decode('utf-16le')
 def dialog(self):
  ex=self.b[:4]==b'\x01\x00\xff\xff'
  if ex:
   self.take('HH');helpid,exstyle,style,count,x,y,cx,cy=self.take('IIIHhhhh')
  else:
   style,exstyle,count,x,y,cx,cy=self.take('IIHhhhh');helpid=0
  result={'help':helpid,'exstyle':exstyle,'style':style,'rect':[x,y,cx,cy],'menu':self.field(),'class':self.field(),'caption':self.field(),'font':None,'controls':[]}
  if style&64:
   points=self.take('H');weight,italic,charset=self.take('HBB') if ex else (400,0,1);face=self.field();result['font']=[points,face,weight,italic,charset]
  for _ in range(count):
   self.p=(self.p+3)&~3
   if ex:hi,es,st,a,b,c,d,ident=self.take('IIIhhhhI')
   else:st,es,a,b,c,d,ident=self.take('IIhhhhH');hi=0
   klass=self.field();caption=self.field();extra=self.take('H')
   if extra:raise ValueError('Control creation data needs explicit reconstruction')
   klass={128:'Button',129:'Edit',130:'Static',131:'ListBox',132:'ScrollBar',133:'ComboBox'}.get(klass,klass)
   ident=-1 if ident in [65535,4294967295] else ident
   result['controls'].append({'help':hi,'exstyle':es,'style':st,'rect':[a,b,c,d],'id':ident,'class':klass,'caption':caption})
  if any(self.b[self.p:]):raise ValueError('Unexpected dialog trailing data')
  return result

def quote(v):
 if isinstance(v,int):return str(v)
 return '"'+v.replace('\\','\\\\').replace('"','\\"').replace('\r','\\r').replace('\n','\\n').replace('\t','\\t')+'"'
def render(ident,r):
 rect=', '.join(map(str,r['rect']));lines=[f'{ident} DIALOGEX {rect}, {r["help"]}',f'STYLE 0x{r["style"]:08x}',f'EXSTYLE 0x{r["exstyle"]:08x}',f'CAPTION {quote(r["caption"])}']
 if r['menu']!='':lines.append('MENU '+quote(r['menu']))
 if r['class']!='':lines.append('CLASS '+quote(r['class']))
 if r['font']:
  p,face,weight,italic,charset=r['font'];lines.append(f'FONT {p}, {quote(face)}, {weight}, {italic}, {charset}')
 lines.append('BEGIN')
 for c in r['controls']:
  xy=', '.join(map(str,c['rect']));lines.append(f'    CONTROL {quote(c["caption"])}, {c["id"]}, {quote(c["class"])}, 0x{c["style"]:08x}, {xy}, 0x{c["exstyle"]:08x}, {c["help"]}')
 lines.append('END');return '\n'.join(lines)
