from pathlib import Path
import hashlib,json,struct,uuid,sys,os

def pe_identity(data):
    pe=struct.unpack_from('<I',data,0x3c)[0];op=pe+24;count=struct.unpack_from('<H',data,pe+6)[0];section_start=op+struct.unpack_from('<H',data,pe+20)[0]
    sections=[]
    for i in range(count):
        vs,va,rs,rp=struct.unpack_from('<IIII',data,section_start+i*40+8);sections.append((va,max(vs,rs),rp))
    def offset(rva):
        for va,size,raw in sections:
            if va<=rva<va+size:return raw+rva-va
        raise ValueError('Unmapped PE address')
    result={'machine':hex(struct.unpack_from('<H',data,pe+4)[0]),'timestamp':struct.unpack_from('<I',data,pe+8)[0],'image_base':hex(struct.unpack_from('<I',data,op+28)[0])}
    rva,size=struct.unpack_from('<II',data,op+96+6*8)
    if rva:
        for pos in range(offset(rva),offset(rva)+size,28):
            typ,length,_,raw=struct.unpack_from('<IIII',data,pos+12)
            cv=data[raw:raw+length]
            if typ==2 and cv[:4]==b'RSDS':result['pdb']={'guid':str(uuid.UUID(bytes_le=cv[4:20])),'age':struct.unpack_from('<I',cv,20)[0],'name':cv[24:].split(b'\0')[0].decode('utf8',errors='replace')}
    return result
root=Path(sys.argv[1]);records=[]
for path in sorted(root.rglob('*')):
    if path.is_file() and path.suffix in {'.dll','.exe','.lib','.pdb'}:
        data=path.read_bytes();item={'file':path.relative_to(root).as_posix(),'size':len(data),'sha256':hashlib.sha256(data).hexdigest()}
        if data[:2]==b'MZ':item['pe']=pe_identity(data)
        records.append(item)
out=Path(sys.argv[2]);out.write_text(json.dumps({'schema_version':1,'commit':os.getenv('GITHUB_SHA'),'run_id':os.getenv('GITHUB_RUN_ID'),'artifacts':records},indent=2),encoding='utf8')
print(f'{len(records)} artifact identities recorded')
