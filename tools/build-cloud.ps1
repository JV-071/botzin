param([ValidateSet('Debug','Release')][string]$Configuration = 'Release')
$ErrorActionPreference = 'Stop'
. "$PSScriptRoot/Import-Msvc.ps1"
$buildPath = "build/$Configuration"
New-Item -ItemType Directory -Force -Path artifacts | Out-Null
$clock = [Diagnostics.Stopwatch]::StartNew()
$configurationSeconds = 0; $buildSeconds = 0; $testSeconds = 0
try {
    if (!$env:SCCACHE_PATH) { throw 'Compiler cache executable unavailable.' }
    cmake -S . -B $buildPath -G Ninja "-DCMAKE_BUILD_TYPE=$Configuration" "-DCMAKE_C_COMPILER_LAUNCHER=$env:SCCACHE_PATH"
    if ($LASTEXITCODE -ne 0) { throw 'CMake configuration failed.' }
    $configurationSeconds = $clock.Elapsed.TotalSeconds
    cmake --build $buildPath --parallel 2
    if ($LASTEXITCODE -ne 0) { throw 'Component compilation failed.' }
    $buildSeconds = $clock.Elapsed.TotalSeconds - $configurationSeconds
    ctest --test-dir $buildPath --output-on-failure --no-tests=error
    if ($LASTEXITCODE -ne 0) { throw 'Component tests failed.' }
    $testSeconds = $clock.Elapsed.TotalSeconds - $configurationSeconds - $buildSeconds
    cmake --install $buildPath --prefix "artifacts/$Configuration"
    if ($LASTEXITCODE -ne 0) { throw 'Artifact installation failed.' }
    python tools/validate-pe.py "artifacts/$Configuration/bin"
    if ($LASTEXITCODE -ne 0) { throw 'PE validation failed.' }
} finally {
    $metrics = [ordered]@{configuration=$Configuration;configure_seconds=$configurationSeconds;build_seconds=$buildSeconds;test_seconds=$testSeconds;total_seconds=$clock.Elapsed.TotalSeconds;commit=$env:GITHUB_SHA}
    $metrics | ConvertTo-Json | Set-Content "artifacts/timings-$Configuration.json" -Encoding utf8
    $metrics | ConvertTo-Json | Out-File $env:GITHUB_STEP_SUMMARY -Append -Encoding utf8
    if ($env:SCCACHE_PATH) {
        & $env:SCCACHE_PATH --show-stats 2>&1 | Tee-Object "artifacts/cache-$Configuration.txt"
    }
}
