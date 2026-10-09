#include "botzin_host.h"


undefined4 DAT_10003070;
undefined FUN_10001041;
HANDLE DAT_10003074;
undefined DAT_10003078;
undefined DAT_1000307c;
HINSTANCE DAT_10003070;
HWND DAT_10003085;
undefined *DAT_10003089;
undefined DAT_1000302a;
undefined DAT_10003080;
HMODULE DAT_10003191;
FARPROC DAT_10003089;
HMODULE DAT_10003081;
undefined4 DAT_10003085;
string s_TBOTDLG00_10003020;
string s_USkin_dll_1000302b;
string s_USkinInit_10003038;
string s_USkinExit_10003044;
string s_botzin_dll_10003050;
string s_EcInit_1000305c;
undefined DAT_1000308d;
undefined FUN_10001060;

undefined8 __fastcall entry(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  DAT_10003070 = param_3;
  if (param_4 == 1) {
    DAT_10003074 = GetCurrentProcess();
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_10001041,&DAT_10003078,0,(LPDWORD)&DAT_1000307c);
  }
  return CONCAT44(param_2,1);
}



void FUN_10001041(void)

{
  FUN_10001198(DAT_10003070);
                    /* WARNING: Subroutine does not return */
  ExitThread(1);
}



LRESULT FUN_10001060(HWND param_1,UINT param_2,WPARAM param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  WNDCLASSEXA local_468 [23];
  
  if (param_2 == 0x110) {
    DAT_10003085 = param_1;
  }
  else if (param_2 == 0x111) {
    if (param_3 == 0x539) {
      local_468[0].cbSize = 0x30;
      local_468[0].style = 3;
      local_468[0].cbClsExtra = 0;
      local_468[0].cbWndExtra = 0x1e;
      local_468[0].hInstance = DAT_10003070;
      local_468[0].hbrBackground = (HBRUSH)0x10;
      local_468[0].lpszMenuName = &DAT_1000302a;
      local_468[0].hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      local_468[0].hIconSm = local_468[0].hIcon;
      local_468[0].hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
      local_468[0].lpszClassName = (LPCSTR)*param_4;
      local_468[0].lpfnWndProc = (WNDPROC)param_4[1];
      RegisterClassExA(local_468);
    }
    else if (param_3 == 0x53a) {
      CreateDialogParamA(DAT_10003070,(LPCSTR)*param_4,(HWND)param_4[1],(DLGPROC)param_4[2],0);
    }
    else if (param_3 == 0x53b) {
      (*DAT_10003089)(&DAT_10003080,&DAT_10003080,param_4);
    }
  }
  else {
    if (param_2 != 2) {
      LVar1 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
      return LVar1;
    }
    PostQuitMessage(0);
  }
  return 0;
}



WPARAM FUN_10001198(HINSTANCE param_1)

{
  DWORD DVar1;
  char *pcVar2;
  LPSTR lpString1;
  FARPROC pFVar3;
  BOOL BVar4;
  SIZE_T local_60;
  undefined1 local_5a;
  int local_59;
  tagMSG local_50;
  WNDCLASSEXA local_34;
  
  InitCommonControls();
  local_34.cbSize = 0x30;
  local_34.style = 3;
  local_34.lpfnWndProc = FUN_10001060;
  local_34.cbClsExtra = 0;
  local_34.cbWndExtra = 0x1e;
  local_34.hInstance = param_1;
  local_34.hbrBackground = (HBRUSH)0x10;
  local_34.lpszMenuName = &DAT_1000302a;
  local_34.lpszClassName = s_TBOTDLG00_10003020;
  local_34.hIcon = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_34.hIconSm = local_34.hIcon;
  local_34.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  RegisterClassExA(&local_34);
  CreateDialogParamA(DAT_10003070,(LPCSTR)0x7cf,(HWND)0x0,FUN_10001060,0);
  DVar1 = GetModuleFileNameA(DAT_10003070,&DAT_1000308d,0x104);
  for (pcVar2 = &DAT_1000308d + DVar1; (*pcVar2 != '\\' && (&DAT_1000308d < pcVar2));
      pcVar2 = pcVar2 + -1) {
  }
  pcVar2[1] = '\0';
  lpString1 = pcVar2 + 1;
  lstrcatA(lpString1,s_USkin_dll_1000302b);
  DAT_10003191 = LoadLibraryA(&DAT_1000308d);
  DAT_10003089 = GetProcAddress(DAT_10003191,s_USkinInit_10003038);
  pFVar3 = GetProcAddress(DAT_10003191,s_USkinExit_10003044);
  local_5a = 0xe9;
  local_59 = 0x1000131f - (int)pFVar3;
  WriteProcessMemory(DAT_10003074,pFVar3,&local_5a,5,&local_60);
  lstrcpyA(lpString1,s_botzin_dll_10003050);
  DAT_10003081 = LoadLibraryA(&DAT_1000308d);
  if (DAT_10003081 != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(DAT_10003081,s_EcInit_1000305c);
    if (pFVar3 != (FARPROC)0x0) {
      (*pFVar3)(DAT_10003085);
    }
  }
  while( true ) {
    BVar4 = GetMessageA(&local_50,(HWND)0x0,0,0);
    if (BVar4 == 0) break;
    TranslateMessage(&local_50);
    DispatchMessageA(&local_50);
  }
  return local_50.wParam;
}



HWND CreateDialogParamA(HINSTANCE hInstance,LPCSTR lpTemplateName,HWND hWndParent,
                       DLGPROC lpDialogFunc,LPARAM dwInitParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000132c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateDialogParamA(hInstance,lpTemplateName,hWndParent,lpDialogFunc,dwInitParam);
  return pHVar1;
}



LRESULT DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}



LRESULT DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}



BOOL GetMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000133e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetMessageA(lpMsg,hWnd,wMsgFilterMin,wMsgFilterMax);
  return BVar1;
}



HCURSOR LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadCursorA(hInstance,lpCursorName);
  return pHVar1;
}



HICON LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName)

{
  HICON pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000134a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadIconA(hInstance,lpIconName);
  return pHVar1;
}



void PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x10001350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}



ATOM RegisterClassExA(WNDCLASSEXA *param_1)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassExA(param_1);
  return AVar1;
}



BOOL TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000135c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}



HANDLE CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,
                   LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,
                   LPDWORD lpThreadId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateThread(lpThreadAttributes,dwStackSize,lpStartAddress,lpParameter,dwCreationFlags,
                        lpThreadId);
  return pvVar1;
}



void ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x10001368. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}



void ExitThread(DWORD dwExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x1000136e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitThread(dwExitCode);
  return;
}



HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}



DWORD GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000137a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}



FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



HMODULE LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}



BOOL WriteProcessMemory(HANDLE hProcess,LPVOID lpBaseAddress,LPCVOID lpBuffer,SIZE_T nSize,
                       SIZE_T *lpNumberOfBytesWritten)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1000138c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesWritten);
  return BVar1;
}



LPSTR lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}



LPSTR lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x10001398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}



void InitCommonControls(void)

{
                    /* WARNING: Could not recover jumptable at 0x1000139e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitCommonControls();
  return;
}


