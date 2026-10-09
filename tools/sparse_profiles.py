"""Decoder reconstruido da rotina x86 em VA 0x10012771.
Formato: magic A0 FE FF FF, skips de zeros e literais de 1/2/4 bytes.
Nao executa o bot. Limites e verificacoes adicionados por seguranca de parsing.
"""
import pathlib,struct,json,re,argparse
MAGIC=b'\xa0\xfe\xff\xff'
def decode(data,expected_size):
 if not data.startswith(MAGIC):
  if len(data)!=expected_size: raise ValueError('Formato bruto com tamanho inesperado')
  return data
 out=bytearray(expected_size);src=4;dst=0
 while src<len(data):
  token=data[src];src+=1;kind=token>>6;skip=token&63
  if kind==3:
   if src>=len(data):raise ValueError('Skip truncado')
   skip=(skip<<8)|data[src];src+=1
   if dst+skip>expected_size:raise ValueError('Skip fora do buffer')
   dst+=skip;continue
  count=(1,2,4)[kind]
  if src+count>len(data):raise ValueError('Literal truncado')
  dst+=skip
  if dst>expected_size:raise ValueError('Skip fora do buffer')
  if kind==0 and data[src]==0:
   if src+1!=len(data):raise ValueError('Bytes apos terminador')
   return bytes(out)
  if dst+count>expected_size:raise ValueError('Literal fora do buffer')
  out[dst:dst+count]=data[src:src+count];dst+=count;src+=count
 return bytes(out) # O bot le em heap zerado; EOF fornece terminador zero implicito.
def encode(raw):
 out=bytearray(MAGIC);pos=0
 while pos<len(raw):
  start=pos
  while pos<len(raw) and raw[pos]==0:pos+=1
  skip=pos-start
  while skip>=64:
   n=min(skip,16383);out.extend([192|(n>>8),n&255]);skip-=n
  if pos==len(raw):out.extend([skip,0]);return bytes(out)
  out.extend([skip,raw[pos]]);pos+=1
 out.extend([0,0]);return bytes(out)
def verify():
 for raw in [b'',b'A',bytes(100),b'ABC'+bytes(17000)+b'XYZ',bytes(range(256))]:assert decode(encode(raw),len(raw))==raw
 assert decode(MAGIC+b'\x80ABCD\x40EF\x00G\x00\x00',7)==b'ABCDEFG'
 for bad in [MAGIC+b'\x80A',MAGIC+b'\xff\xff',MAGIC+b'\x08A']:
  try:decode(bad,8)
  except ValueError:pass
  else:raise AssertionError('Entrada invalida aceita')
if __name__=='__main__':
 parser=argparse.ArgumentParser();parser.add_argument('input',nargs='?');parser.add_argument('output',nargs='?');parser.add_argument('--size',type=lambda s:int(s,0));args=parser.parse_args();verify()
 if args.input:
  if args.size is None or not args.output:parser.error('Informe output e --size')
  p=pathlib.Path(args.input);raw=decode(p.read_bytes(),args.size);pathlib.Path(args.output).write_bytes(raw)
  assert decode(encode(raw),len(raw))==raw
  print(f'{p.name}: {p.stat().st_size} -> {len(raw)} bytes; round-trip OK')
 else:print('Testes do decoder OK')

