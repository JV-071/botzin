$ErrorActionPreference = 'Stop'
$PSNativeCommandUseErrorActionPreference = $false
if ($env:GITHUB_ACTIONS -ne 'true') { throw 'Compilation is restricted to GitHub Actions.' }
$locator = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio/Installer/vswhere.exe'
$installation = & $locator -latest -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
if (!$installation) { throw 'Microsoft x86 toolchain unavailable.' }
$initializer = Join-Path $installation 'VC/Auxiliary/Build/vcvarsall.bat'
$lines = & cmd.exe /d /s /c "`"$initializer`" x86 >nul && set"
if ($LASTEXITCODE -ne 0) { throw 'Toolchain initialization failed.' }
foreach ($line in $lines) {
    if ($line -match '^([^=]+)=(.*)$') {
        $name = $Matches[1]; $value = $Matches[2]
        if ($name -in @('Path','INCLUDE','LIB','LIBPATH') -or $name -match '^(VC|VS|WindowsSDK|UniversalCRT|UCRT|VSCMD|VisualStudio)') {
            [Environment]::SetEnvironmentVariable($name,$value,'Process')
        }
    }
}
