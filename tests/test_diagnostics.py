import importlib.util,pathlib,tempfile,unittest
ROOT=pathlib.Path(__file__).resolve().parents[1]
spec=importlib.util.spec_from_file_location('diagnostics',ROOT/'tools/diagnostics.py');d=importlib.util.module_from_spec(spec);spec.loader.exec_module(d)
class DiagnosticsTests(unittest.TestCase):
    def test_compiler_notes_and_address(self):
        text="recovered/botzin.c(57,11): error C2365: 'FUN_10003146': redefinition; previous definition was function\nrecovered/botzin.h(99,6): note: see declaration of 'FUN_10003146'"
        rows=d.parse_log(text,'botzin',ROOT)
        self.assertEqual(len(rows),1);self.assertEqual(rows[0]['native_addresses'],['0x10003146']);self.assertEqual(rows[0]['category'],'function_symbol_conflict');self.assertEqual(len(rows[0]['related_notes']),1)
    def test_cascade_and_stack(self):
        text="recovered/botzin.h(3): error C2016: struct must have a member\nrecovered/botzin.h(4): error C2065: 'x': undeclared identifier\nrecovered/botzin.c(10): error C2065: 'stack0xfffffffc': undeclared identifier"
        rows=d.parse_log(text,'botzin',ROOT);candidates=d.summarize(rows)
        self.assertTrue(rows[1]['possible_cascade']);self.assertEqual(rows[2]['category'],'unresolved_stack_layout');self.assertEqual(len(candidates),2)
    def test_linker_and_ansi(self):
        rows=d.parse_log("\x1b[31mCVTRES : fatal error CVT1100: duplicate resource\x1b[0m",'host',ROOT)
        self.assertEqual(rows[0]['category'],'duplicate_resource');self.assertEqual(rows[0]['severity'],'fatal error')
    def test_context_and_function(self):
        with tempfile.TemporaryDirectory() as folder:
            root=pathlib.Path(folder);p=root/'botzin.c';p.write_text('void FUN_10001234(void)\n{\n missing();\n}\n')
            rows=d.parse_log('botzin.c(3): error C2065: missing symbol','botzin',root);d.enrich(rows,root)
            self.assertEqual(rows[0]['function_address'],'0x10001234');self.assertEqual(rows[0]['context'][2]['line'],3)
if __name__=='__main__':unittest.main()
