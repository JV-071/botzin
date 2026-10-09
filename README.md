# Botzin

Windows x86 bot reconstruction and development project.

**Status: the complete bot is not yet recompilable or validated.** The profile codec and the initialization host have reconstructed C implementations. `recovered/` contains native-code exports whose types, globals and calling conventions still need correction.

Builds and tests run in GitHub Actions. The workflow compiles Debug and Release, tests the codec against recovered fixtures and checks the x86 initialization ABI. A separate job reports compilation errors in pending components. A green component build does not mean the full bot is working.

- `src/` and `include/`: reconstructed modules.
- `recovered/`: pending native-code sources and declarations.
- `analysis/`: assembly, function index and memory correlations.
- `resources/`: host dialog resources.
- `tests/`: format and ABI validation.
- `data/`: partially interpreted profile records.
- `tools/`: profile decoder and cloud build scripts.
- `reference/`: compatibility layout references; see `NOTICE.md`.

See [build configuration](docs/builds.md) and [reconstruction status](docs/status.md). The build scripts require a GitHub Actions environment to prevent accidental local compilation.
