# Cloud builds

The supported target is Windows x86. CMake uses Ninja and the preinstalled Microsoft compiler on `windows-2022`. Release uses `/O2` and `/fp:precise`; Debug is retained for validation. Fast floating-point transformations and link-time optimization are not enabled.

Compilation objects are cached with sccache and GitHub Actions cache storage. Source content, compiler and options are part of the compiler cache key. Build directories and test results are not restored from cache. Tests execute on every run. Debug information is embedded with `/Z7` for cache compatibility.

Ninja performs incremental builds inside a run. No dependency manager is needed for the reconstructed components. Build steps use two parallel compiler processes and publish timings and cache statistics. Obsolete runs on the same branch are canceled.

Artifacts contain only reconstructed component outputs, tests and diagnostics. A separate pending-source check remains failing while the complete sources do not pass compilation; errors are not masked by the component build result.
