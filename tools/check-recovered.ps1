$ErrorActionPreference = 'Stop'
. "$PSScriptRoot/Import-Msvc.ps1"
New-Item -ItemType Directory -Force -Path artifacts | Out-Null
$failures = 0
$results = @()
foreach ($component in @('botzin','botzin_launcher','botzin_navserver')) {
    $clock = [Diagnostics.Stopwatch]::StartNew()
    $log = "artifacts/$component-compiler.txt"
    & cl.exe /nologo /TC /Zs /diagnostics:column /I recovered "/FIcompiler_support.h" "recovered/$component.c" > $log 2>&1
    $code = $LASTEXITCODE
    $results += [pscustomobject]@{component=$component;exit_code=$code;seconds=$clock.Elapsed.TotalSeconds}
    Get-Content $log -TotalCount 16
    if ($code -ne 0) { $failures++ }
}
$results | ConvertTo-Json | Set-Content artifacts/recovered-results.json -Encoding utf8
$results | Format-Table | Out-String | Out-File $env:GITHUB_STEP_SUMMARY -Append -Encoding utf8
if ($failures) { throw "$failures pending components do not pass compilation." }
