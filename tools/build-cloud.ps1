param([ValidateSet('Debug','Release')][string]$Configuration = 'Release')
$ErrorActionPreference = 'Stop'
if ($env:GITHUB_ACTIONS -ne 'true') { throw 'Compilation is restricted to GitHub Actions.' }
$PSNativeCommandUseErrorActionPreference = $false
$buildPath = "build/$Configuration"
New-Item -ItemType Directory -Force -Path artifacts | Out-Null
$clock = [Diagnostics.Stopwatch]::StartNew()
$stages = [System.Collections.Generic.List[object]]::new()
function Invoke-BotzinStage([string]$Name,[string]$Executable,[string[]]$ArgumentList) {
    $started = [DateTime]::UtcNow
    $timer = [Diagnostics.Stopwatch]::StartNew()
    & $Executable @ArgumentList 2>&1 | Tee-Object "artifacts/$Name.log"
    $code = $LASTEXITCODE
    $stages.Add([pscustomobject]@{stage=$Name;start_utc=$started.ToString('o');seconds=$timer.Elapsed.TotalSeconds;exit_code=$code;executable=$Executable;arguments=$ArgumentList})
    if ($code -ne 0) { throw "Stage '$Name' failed with exit code $code. See artifacts/$Name.log." }
}
try {
    . "$PSScriptRoot/Import-Msvc.ps1"
    $compiler = Get-Command cl.exe
    $environment = [ordered]@{schema_version=1;commit=$env:GITHUB_SHA;run_id=$env:GITHUB_RUN_ID;configuration=$Configuration;target='Windows x86';os=[Environment]::OSVersion.VersionString;compiler=$compiler.Source;compiler_file_version=(Get-Item $compiler.Source).VersionInfo.FileVersion;sdk=$env:WindowsSDKVersion;cache_executable=$env:SCCACHE_PATH;optimization=($(if($Configuration -eq 'Release') {'/O2 /fp:precise /OPT:REF /OPT:ICF'} else {'/Od /fp:precise'}));symbols='/Z7 /DEBUG:FULL'}
    $environment | ConvertTo-Json | Set-Content artifacts/environment.json -Encoding utf8
    if (!$env:SCCACHE_PATH) { throw 'Compiler cache executable unavailable.' }
    Invoke-BotzinStage 'configure' 'cmake' @('-S','.', '-B',$buildPath,'-G','Ninja',"-DCMAKE_BUILD_TYPE=$Configuration","-DCMAKE_C_COMPILER_LAUNCHER=$env:SCCACHE_PATH")
    Invoke-BotzinStage 'compile' 'cmake' @('--build',$buildPath,'--parallel','2')
    Invoke-BotzinStage 'test' 'ctest' @('--test-dir',$buildPath,'--output-on-failure','--no-tests=error')
    Invoke-BotzinStage 'install' 'cmake' @('--install',$buildPath,'--prefix',"artifacts/$Configuration")
    Invoke-BotzinStage 'validate-pe' 'python' @('tools/validate-pe.py',"artifacts/$Configuration/bin")
    Invoke-BotzinStage 'artifact-identity' 'python' @('tools/artifact_identity.py',"artifacts/$Configuration","artifacts/artifact-manifest.json")
} finally {
    $metrics = [ordered]@{schema_version=1;configuration=$Configuration;total_seconds=$clock.Elapsed.TotalSeconds;commit=$env:GITHUB_SHA;stages=$stages.ToArray()}
    $metrics | ConvertTo-Json -Depth 8 | Set-Content "artifacts/timings-$Configuration.json" -Encoding utf8
    $metrics | ConvertTo-Json -Depth 8 | Out-File $env:GITHUB_STEP_SUMMARY -Append -Encoding utf8
    if ($env:SCCACHE_PATH) { & $env:SCCACHE_PATH --show-stats 2>&1 | Tee-Object "artifacts/cache-$Configuration.txt" }
    python tools/diagnostics.py
    if (Test-Path artifacts/diagnostics.md) { Get-Content artifacts/diagnostics.md | Out-File $env:GITHUB_STEP_SUMMARY -Append -Encoding utf8 }
}
