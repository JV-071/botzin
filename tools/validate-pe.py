from pathlib import Path
import struct,sys
files=list(Path(sys.argv[1]).glob('*.dll'))+list(Path(sys.argv[1]).glob('*.exe'))
if not files:raise SystemExit('No Windows artifacts found')
for path in files:
    data=path.read_bytes()
    if data[:2]!=b'MZ':raise SystemExit(f'Invalid DOS header: {path.name}')
    offset=struct.unpack_from('<I',data,0x3c)[0]
    if data[offset:offset+4]!=b'PE\0\0':raise SystemExit(f'Invalid PE header: {path.name}')
    if struct.unpack_from('<H',data,offset+4)[0]!=0x14c:raise SystemExit(f'Artifact is not x86: {path.name}')
    if struct.unpack_from('<H',data,offset+24)[0]!=0x10b:raise SystemExit(f'Artifact is not PE32: {path.name}')
    print(f'{path.name}: PE32 x86 verified')
