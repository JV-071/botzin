# Reconstruction status

The core DLL contains 3,578 recognized internal functions exported as pseudocode. Auxiliary native components contribute 416 additional functions. Exported output includes unresolved types, overlapping globals, calls inferred from register state and control-flow warnings.

Reconstructed modules:

- Sparse-profile codec: header `A0 FE FF FF`, zero skips and literals of 1, 2 or 4 bytes, bounded parsing and an encoder.
- Initialization host: DLL entry, worker thread, dialog dispatch, skin-library loading and the x86 core initialization bridge. Resources contain 24 dialogs and a manifest.

Pending modules:

- Core logic: command interpreter, targeting, navigation, healing, interface and associated data.
- Launcher: Delphi runtime and process discovery.
- Navigation server: global layout, configuration strings, thread and socket state.

The host still requires `botzin.dll` and `USkin.dll` at runtime. Full runtime tests have not been performed. The codec library, host DLL and unit-test executables are component artifacts, not a complete bot distribution.
