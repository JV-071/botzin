import json,pathlib,subprocess,sys,os,tempfile
with tempfile.TemporaryDirectory() as folder:
    env=os.environ.copy();env['BOTZIN_LOG_DIR']=folder;env['BOTZIN_DIAGNOSTICS']='1'
    result=subprocess.run([sys.argv[1]],capture_output=True,text=True,encoding='utf8',env=env)
    print(result.stdout,end='');print(result.stderr,end='',file=sys.stderr)
    if result.returncode:raise SystemExit(result.returncode)
    path=pathlib.Path(next(line[9:] for line in result.stdout.splitlines() if line.startswith('LOG_PATH=')))
    if not path.resolve().is_relative_to(pathlib.Path(folder).resolve()):raise SystemExit('Unexpected log path')
    records=[json.loads(line) for line in path.read_text(encoding='utf8').splitlines()]
    assert len(records)==102,len(records)
    assert [r['sequence'] for r in records]==list(range(1,103))
    assert records[0]['win32_code']==2 and records[0]['win32_message']
    assert records[0]['detail']=='quotes: "value"; slash: \\; newline:\n'
    assert len({r['tid'] for r in records})==3
    assert all(r['component']=='host' and r['pid']>0 for r in records)
    print('Runtime logger: JSON, concurrent writes, ordering and error preservation verified')
