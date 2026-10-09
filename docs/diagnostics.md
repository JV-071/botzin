# Diagnostics

## Cloud build failures

Each artifact contains `environment.json`, per-stage logs, timings, the tested commit and cache statistics. `diagnostics.json` lists compiler occurrences with file, line, code, source context and related declaration notes. Native addresses are reference addresses from recovered symbols, not automatically the runtime addresses of rebuilt DLLs.

`diagnostics.md` ranks probable causes and marks likely secondary parsing errors. These are hypotheses; the original compiler logs remain available and failing stages remain failing. Start with the first meaningful error in the affected translation unit rather than fixing every later message separately.

Typical categories include incomplete exported types, conflicting globals, function/data symbol conflicts, lost stack/register state, calling conventions, missing inputs and duplicate resources.

## Runtime initialization

The host writes structured JSONL records for initialization stages and failures. The records include UTC microseconds, uptime, sequence, process, thread, stage, Win32 code/message and module paths/bases. Normal frames and game/chat content are not logged. `GetLastError` is preserved around logging.

The default file is `%TEMP%/botzin-host-<PID>.jsonl`. Set `BOTZIN_LOG_DIR` to an existing writable directory to select another location. `BOTZIN_DIAGNOSTICS=0` disables the logger. OutputDebugString remains a fallback when file logging is unavailable; records expose the file sink state.

A `host.core.init.begin` without its corresponding end narrows the failure to initialization but does not prove the responsible function. Win32 error 126 can mean a missing DLL or dependency; the preceding file check helps distinguish them. Error 193 requires checking image format/architecture, while error 127 indicates an export lookup problem.

No global unhandled-exception filter is replaced. For a crash, collect a small dump externally and match the binary and PDB to `artifact-manifest.json` (SHA256, PE identity and PDB GUID/age). ProcDump's default mini dump and an unhandled-exception trigger are a starting point; full dumps should be reserved for cases requiring additional memory.

Primary references: [Microsoft PDB and /DEBUG](https://learn.microsoft.com/en-us/cpp/build/reference/debug-generate-debug-info), [ProcDump](https://learn.microsoft.com/en-us/sysinternals/downloads/procdump).

## Regression checks

Debug and Release both run fixture comparisons, x86 ABI checks, dialog/control equivalence checks and diagnostic-parser tests. Runtime logger tests check valid JSON, escaping, concurrent ordering and preservation of the thread-local error state. Symbols are published for both configurations; Release retains /O2, /fp:precise, /OPT:REF and /OPT:ICF.
