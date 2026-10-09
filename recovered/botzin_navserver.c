#include "botzin_navserver.h"


uint DAT_0040401c;
undefined DAT_00404434;
undefined DAT_00404430;
uint DAT_0040442c;
undefined FUN_004019f1;
uint DAT_00404438;
undefined DAT_00404020;
undefined DAT_00404041;
string s_password_00404081;
undefined DAT_0040408c;
string s_Server_password_set_to__00404090;
string s_leaderpassword_004040ac;
undefined DAT_004040bc;
string s_Leader_password_set_to__004040c0;
undefined DAT_004040dc;
undefined DAT_004040e4;
string s_Server_port_set_to__004040e8;
string s_sendenemies_00404100;
undefined DAT_0040410c;
string s_Sending_enemies_set_to__00404110;
undefined DAT_0040412c;
string s_false_00404134;
string s_sendonlyleaderpositions_0040413c;
undefined DAT_00404154;
string s_Sending_only_leader_positions_se_00404158;
undefined DAT_00404180;
string s_false_00404188;
string s_onlyleaderscannavsay_00404190;
undefined DAT_004041a8;
string s_Only_leaders_can_use_navsay_set_t_004041ac;
undefined DAT_004041d4;
string s_false_004041dc;
string s_updateinterval_004041e4;
undefined DAT_004041f4;
string s_Update_interval_set_to__004041f8;
undefined DAT_00404214;
undefined DAT_00404218;
string s_Server_is_now_running____0040421c;
string s_Press__Enter__to_shut_down_serve_00404238;
string s_Shutting_down____00404260;
undefined DAT_00404428;
undefined DAT_00404440;
undefined DAT_00404640;
undefined DAT_00404840;
undefined DAT_004250b8;
string s_navserv_ini_00404274;
string s_navserv_00404280;
undefined DAT_0040443c;
undefined DAT_00404844;
SOCKET DAT_0040484c;
undefined4 DAT_0040401c;
string s_WSAStartup_failed__00404288;
string s_Cannot_bind_to_specified_listen_p_004042a0;
undefined FUN_00401bbd;
string s_Cannot_listen_on_listening_socke_004042c8;
undefined FUN_00401e63;
undefined DAT_00404850;
undefined4 DAT_00425074;
undefined4 DAT_00404874;
undefined1 DAT_0041fc74;
SOCKET DAT_00425074;
undefined1 DAT_00404434;
char DAT_00404430;
int DAT_0040442c;
string s_Logging_off_004042ec;
string s_aka_004042fc;
string s_Ip__00404304;
undefined DAT_0040430c;
string s_Playername_is_too_long__00404310;
string s_Real_Playername_is_too_long__0040432c;
string s_Logging_on__0040434c;
string s_aka_0040435c;
undefined DAT_00404364;
string s_Password_is_too_long__00404368;
string s_Ip__00404380;
undefined DAT_00404388;
string s_Wrong_password____0040438c;
string s_Error_during_packet_transmission_004043a0;
string s_Internal_Error_for_player_004043c8;
undefined DAT_004043e4;
undefined DAT_004043e8;
string s__failed__player_cannot_use_navsa_004043ec;
int DAT_00425074;

void FUN_00401000(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  char *pcVar2;
  HANDLE pvVar3;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  DVar1 = GetModuleFileNameA((HMODULE)0x0,&DAT_00404640,0x200);
  for (pcVar2 = &DAT_00404640 + DVar1; (*pcVar2 != '\\' && (&DAT_00404640 < pcVar2));
      pcVar2 = pcVar2 + -1) {
  }
  pcVar2[1] = '\0';
  FUN_0040199f(s_password_00404081);
  lstrcpyA(&DAT_00404020,&DAT_00404440);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_0040408c);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_0040408c,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Server_password_set_to__00404090);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Server_password_set_to__00404090,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,0xf);
  DVar1 = lstrlenA(&DAT_00404020);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_00404020,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  FUN_0040199f(s_leaderpassword_004040ac);
  lstrcpyA(&DAT_00404041,&DAT_00404440);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_004040bc);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_004040bc,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Leader_password_set_to__004040c0);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Leader_password_set_to__004040c0,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,0xf);
  DVar1 = lstrlenA(&DAT_00404041);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_00404041,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  FUN_0040199f(&DAT_004040dc);
  DAT_0040401c = FUN_00402d50(&DAT_00404440);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_004040e4);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_004040e4,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Server_port_set_to__004040e8);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Server_port_set_to__004040e8,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,0xf);
  DVar1 = lstrlenA(&DAT_00404440);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_00404440,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  FUN_0040199f(s_sendenemies_00404100);
  _DAT_00404434 = FUN_00402d50(&DAT_00404440);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_0040410c);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_0040410c,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Sending_enemies_set_to__00404110);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Sending_enemies_set_to__00404110,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  if (_DAT_00404434 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xf);
    DVar1 = lstrlenA(s_false_00404134);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,s_false_00404134,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xf);
    DVar1 = lstrlenA(&DAT_0040412c);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,&DAT_0040412c,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  FUN_0040199f(s_sendonlyleaderpositions_0040413c);
  _DAT_00404430 = FUN_00402d50(&DAT_00404440);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_00404154);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_00404154,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Sending_only_leader_positions_se_00404158);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Sending_only_leader_positions_se_00404158,DVar1,(LPDWORD)&DAT_00404840,
                (LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  if (_DAT_00404430 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xf);
    DVar1 = lstrlenA(s_false_00404188);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,s_false_00404188,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xf);
    DVar1 = lstrlenA(&DAT_00404180);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,&DAT_00404180,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  FUN_0040199f(s_onlyleaderscannavsay_00404190);
  DAT_0040442c = FUN_00402d50(&DAT_00404440);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_004041a8);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_004041a8,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Only_leaders_can_use_navsay_set_t_004041ac);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Only_leaders_can_use_navsay_set_t_004041ac,DVar1,(LPDWORD)&DAT_00404840,
                (LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  if (DAT_0040442c == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xf);
    DVar1 = lstrlenA(s_false_004041dc);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,s_false_004041dc,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xf);
    DVar1 = lstrlenA(&DAT_004041d4);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,&DAT_004041d4,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  FUN_0040199f(s_updateinterval_004041e4);
  DAT_00404438 = FUN_00402d50(&DAT_00404440);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_004041f4);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_004041f4,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Update_interval_set_to__004041f8);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Update_interval_set_to__004041f8,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,0xf);
  DVar1 = lstrlenA(&DAT_00404440);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_00404440,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_00404214);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_00404214,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(&DAT_00404218);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,&DAT_00404218,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Server_is_now_running____0040421c);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Server_is_now_running____0040421c,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0)
  ;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Press__Enter__to_shut_down_serve_00404238);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Press__Enter__to_shut_down_serve_00404238,DVar1,(LPDWORD)&DAT_00404840,
                (LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004019f1,(LPVOID)0x0,0,(LPDWORD)&DAT_00404428);
  GetStdHandle(0xfffffff5);
  pvVar3 = GetStdHandle(0xfffffff6);
  ReadFile(pvVar3,(LPVOID)0x0,0,(LPDWORD)0x0,(LPOVERLAPPED)0x0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  pvVar3 = GetStdHandle(0xfffffff5);
  SetConsoleTextAttribute(pvVar3,7);
  DVar1 = lstrlenA(s_Shutting_down____00404260);
  pvVar3 = GetStdHandle(0xfffffff5);
  WriteConsoleA(pvVar3,s_Shutting_down____00404260,DVar1,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  Sleep(2000);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}



void FUN_0040199f(LPCSTR param_1)

{
  CHAR local_108 [260];
  
  lstrcpyA(local_108,&DAT_00404640);
  lstrcatA(local_108,s_navserv_ini_00404274);
  GetPrivateProfileStringA(s_navserv_00404280,param_1,&DAT_0040443c,&DAT_00404440,0x200,local_108);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004019f1(void)

{
  u_short uVar1;
  int iVar2;
  HANDLE pvVar3;
  DWORD DVar4;
  LPVOID lpParameter;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar6 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  iVar2 = WSAStartup(0x202,(LPWSADATA)&stack0xfffffe6e);
  if (iVar2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xc);
    DVar4 = lstrlenA(s_WSAStartup_failed__00404288);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,s_WSAStartup_failed__00404288,DVar4,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
    puVar5 = puVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  _DAT_00404844 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401bbd,(LPVOID)0x0,0,(LPDWORD)&DAT_00404850);
  DAT_0040484c = socket(2,1,6);
  uVar1 = htons((u_short)DAT_0040401c);
  *(undefined2 *)(puVar5 + -0x1a0) = 2;
  puVar5[-0x198] = 0;
  *(u_short *)(puVar5 + -0x19e) = uVar1;
  *(undefined4 *)(puVar5 + -0x19c) = 0;
  iVar2 = bind(DAT_0040484c,(sockaddr *)(puVar5 + -0x1a0),0x10);
  if (iVar2 == -1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xc);
    DVar4 = lstrlenA(s_Cannot_bind_to_specified_listen_p_004042a0);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,s_Cannot_bind_to_specified_listen_p_004042a0,DVar4,(LPDWORD)&DAT_00404840,
                  (LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  iVar2 = listen(DAT_0040484c,5);
  if (iVar2 == -1) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
    pvVar3 = GetStdHandle(0xfffffff5);
    SetConsoleTextAttribute(pvVar3,0xc);
    DVar4 = lstrlenA(s_Cannot_listen_on_listening_socke_004042c8);
    pvVar3 = GetStdHandle(0xfffffff5);
    WriteConsoleA(pvVar3,s_Cannot_listen_on_listening_socke_004042c8,DVar4,(LPDWORD)&DAT_00404840,
                  (LPVOID)0x0);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
  }
  do {
    do {
      *(undefined4 *)(puVar5 + -0x1b4) = 0x10;
      lpParameter = (LPVOID)accept(DAT_0040484c,(sockaddr *)(puVar5 + -0x1b0),
                                   (int *)(puVar5 + -0x1b4));
    } while (lpParameter == (LPVOID)0xffffffff);
    pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x8000,FUN_00401e63,lpParameter,0,
                          (LPDWORD)(puVar5 + -0x1b8));
    CloseHandle(pvVar3);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401bbd(void)

{
  bool bVar1;
  DWORD DVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  SOCKET *pSVar7;
  int *piVar8;
  char *pcVar9;
  DWORD local_1014;
  DWORD local_1010;
  char local_1004 [10];
  char local_ffa [4086];
  
  local_1014 = GetTickCount();
  bVar1 = true;
  local_1010 = local_1014;
  do {
    pcVar3 = local_1004;
    cVar4 = '\0';
    for (piVar5 = &DAT_00404874; piVar5 < &DAT_0041fc74; piVar5 = piVar5 + 0x6d) {
      if (*piVar5 != 0) {
        if (piVar5[0x6a] == 0) {
          piVar5[0x6a] = 1;
          *pcVar3 = '\x02';
          pcVar3[1] = cVar4;
          *(int *)(pcVar3 + 2) = piVar5[0x62];
          *(int *)(pcVar3 + 6) = piVar5[0x68];
          pcVar3 = pcVar3 + 10;
          for (piVar8 = piVar5 + 2; (char)*piVar8 != '\0'; piVar8 = (int *)((int)piVar8 + 1)) {
            *pcVar3 = (char)*piVar8;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = '\0';
          piVar8 = piVar5 + 0x12;
          while( true ) {
            pcVar6 = pcVar3 + 1;
            if ((char)*piVar8 == '\0') break;
            *pcVar6 = (char)*piVar8;
            piVar8 = (int *)((int)piVar8 + 1);
            pcVar3 = pcVar6;
          }
          *pcVar6 = '\0';
          pcVar3 = pcVar3 + 2;
        }
        if ((((uint)(DAT_00425074 - piVar5[0x69]) < 0x1e) && (piVar5[0x6b] != 0)) &&
           (piVar5[0x6b] = 0, (char)piVar5[2] != '\0')) {
          *pcVar3 = '\x03';
          pcVar3[1] = cVar4;
          *(short *)(pcVar3 + 2) = (short)piVar5[100];
          *(short *)(pcVar3 + 4) = (short)piVar5[0x65];
          pcVar3[6] = (char)piVar5[0x66];
          pcVar3[7] = (char)piVar5[99];
          *(short *)(pcVar3 + 8) = (short)piVar5[0x67];
          *(undefined2 *)(pcVar3 + 10) = *(undefined2 *)((int)piVar5 + 0x19e);
          pcVar3 = pcVar3 + 0xc;
        }
      }
      cVar4 = cVar4 + '\x01';
    }
    if ((_DAT_00404434 != 0) && (bVar1)) {
      cVar4 = '\0';
      for (pcVar6 = &DAT_0041fc74; pcVar6 < &DAT_00425074; pcVar6 = pcVar6 + 0x54) {
        if (*pcVar6 != '\0') {
          if (*(int *)(pcVar6 + 0x50) == 0) {
            pcVar6[0x50] = '\x01';
            pcVar6[0x51] = '\0';
            pcVar6[0x52] = '\0';
            pcVar6[0x53] = '\0';
            *pcVar3 = '\x01';
            pcVar3[1] = cVar4;
            pcVar3 = pcVar3 + 2;
            for (pcVar9 = pcVar6; *pcVar9 != '\0'; pcVar9 = pcVar9 + 1) {
              *pcVar3 = *pcVar9;
              pcVar3 = pcVar3 + 1;
            }
            *pcVar3 = '\0';
            pcVar3 = pcVar3 + 1;
          }
          if (((uint)(DAT_00425074 - *(int *)(pcVar6 + 0x4c)) < 2) && (*pcVar6 != '\0')) {
            *pcVar3 = '\x04';
            pcVar3[1] = cVar4;
            *(short *)(pcVar3 + 2) = (short)*(undefined4 *)(pcVar6 + 0x40);
            *(short *)(pcVar3 + 4) = (short)*(undefined4 *)(pcVar6 + 0x44);
            pcVar3[6] = (char)*(undefined4 *)(pcVar6 + 0x48);
            pcVar3[7] = '\0';
            pcVar3 = pcVar3 + 8;
          }
        }
        cVar4 = cVar4 + '\x01';
      }
      bVar1 = false;
    }
    if ((int)pcVar3 - (int)local_1004 != 0) {
      for (pSVar7 = &DAT_00404874; pSVar7 < &DAT_0041fc74; pSVar7 = pSVar7 + 0x6d) {
        if (*pSVar7 != 0) {
          send(*pSVar7,local_1004,(int)pcVar3 - (int)local_1004,0);
        }
      }
    }
    while( true ) {
      DVar2 = GetTickCount();
      if (999 < DVar2 - local_1014) {
        local_1014 = local_1014 + 1000;
        DAT_00425074 = DAT_00425074 + 1;
        bVar1 = true;
      }
      if (DAT_00404438 <= DVar2 - local_1010) break;
      Sleep(5);
    }
    local_1010 = local_1010 + DAT_00404438;
  } while( true );
}



undefined4 FUN_00401e1f(LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = lstrcmpiA(param_1,&DAT_00404020);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = lstrcmpiA(param_1,&DAT_00404041);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00401e63(SOCKET param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  HANDLE pvVar8;
  DWORD DVar9;
  char *pcVar10;
  char *pcVar11;
  SOCKET *pSVar12;
  LPSTR pCVar13;
  uint uVar14;
  SOCKET extraout_ECX;
  uint uVar15;
  ushort *puVar16;
  uint unaff_ESI;
  char *local_1530;
  uint local_152c;
  char local_1528;
  undefined1 local_1527;
  char local_1526 [1022];
  int local_1128;
  undefined1 local_1124 [16];
  SOCKET local_1114;
  SOCKET local_1110;
  CHAR local_110c [64];
  CHAR local_10cc [64];
  CHAR local_108c [64];
  CHAR local_104c [64];
  char *local_100c;
  SOCKET *local_1008;
  char local_1004 [4096];
  
  local_1008 = (SOCKET *)0x0;
  local_152c = 0;
  local_108c[0] = '\0';
  local_10cc[0] = '\0';
LAB_00401e98:
  do {
    local_1530 = (char *)0x0;
    iVar7 = recv(param_1,local_1004,0x1000,0);
    if ((iVar7 == 0) || (iVar7 == -1)) {
      if (local_108c[0] != '\0') {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,7);
        DVar9 = lstrlenA(s_Logging_off_004042ec);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,s_Logging_off_004042ec,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,0xf);
        DVar9 = lstrlenA(local_108c);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,local_108c,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,7);
        DVar9 = lstrlenA(s_aka_004042fc);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,s_aka_004042fc,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,0xf);
        DVar9 = lstrlenA(local_10cc);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,local_10cc,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,7);
        DVar9 = lstrlenA(s_Ip__00404304);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,s_Ip__00404304,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        local_1128 = 0x10;
        iVar7 = getpeername(param_1,(sockaddr *)local_1124,&local_1128);
        if ((iVar7 == 0) && (pcVar10 = inet_ntoa((in_addr)local_1124._4_4_), pcVar10 != (char *)0x0)
           ) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
          pvVar8 = GetStdHandle(0xfffffff5);
          SetConsoleTextAttribute(pvVar8,0xf);
          DVar9 = lstrlenA(pcVar10);
          pvVar8 = GetStdHandle(0xfffffff5);
          WriteConsoleA(pvVar8,pcVar10,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,7);
        DVar9 = lstrlenA(&DAT_0040430c);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,&DAT_0040430c,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      }
      shutdown(param_1,2);
      closesocket(param_1);
      FUN_00402c47(param_1);
                    /* WARNING: Subroutine does not return */
      ExitThread(0);
    }
    local_100c = local_1004 + iVar7;
    pcVar10 = local_1004;
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                if ((pcVar10 == local_1530) || (local_100c <= pcVar10)) goto LAB_00401e98;
                cVar1 = *pcVar10;
                local_1530 = pcVar10;
                if (cVar1 != '\x01') break;
                if (local_1008 == (SOCKET *)0x0) {
                  local_1110 = *(SOCKET *)(pcVar10 + 1);
                  local_1114 = *(SOCKET *)(pcVar10 + 5);
                  uVar14 = 0;
                  pcVar10 = pcVar10 + 9;
                  do {
                    if (0x1e < uVar14) {
                      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                      pvVar8 = GetStdHandle(0xfffffff5);
                      SetConsoleTextAttribute(pvVar8,7);
                      DVar9 = lstrlenA(s_Playername_is_too_long__00404310);
                      pvVar8 = GetStdHandle(0xfffffff5);
                      WriteConsoleA(pvVar8,s_Playername_is_too_long__00404310,DVar9,
                                    (LPDWORD)&DAT_00404840,(LPVOID)0x0);
                      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                      shutdown(param_1,2);
                      closesocket(param_1);
                    /* WARNING: Subroutine does not return */
                      ExitThread(0);
                    }
                    cVar1 = *pcVar10;
                    local_108c[uVar14] = cVar1;
                    uVar14 = uVar14 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  uVar14 = 0;
                  do {
                    if (0x1e < uVar14) {
                      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                      pvVar8 = GetStdHandle(0xfffffff5);
                      SetConsoleTextAttribute(pvVar8,7);
                      DVar9 = lstrlenA(s_Real_Playername_is_too_long__0040432c);
                      pvVar8 = GetStdHandle(0xfffffff5);
                      WriteConsoleA(pvVar8,s_Real_Playername_is_too_long__0040432c,DVar9,
                                    (LPDWORD)&DAT_00404840,(LPVOID)0x0);
                      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                      shutdown(param_1,2);
                      closesocket(param_1);
                    /* WARNING: Subroutine does not return */
                      ExitThread(0);
                    }
                    cVar1 = *pcVar10;
                    local_10cc[uVar14] = cVar1;
                    uVar14 = uVar14 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,7);
                  DVar9 = lstrlenA(s_Logging_on__0040434c);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,s_Logging_on__0040434c,DVar9,(LPDWORD)&DAT_00404840,
                                (LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,0xf);
                  DVar9 = lstrlenA(local_108c);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,local_108c,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,7);
                  DVar9 = lstrlenA(s_aka_0040435c);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,s_aka_0040435c,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,0xf);
                  DVar9 = lstrlenA(local_10cc);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,local_10cc,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,7);
                  DVar9 = lstrlenA(&DAT_00404364);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,&DAT_00404364,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  uVar14 = 0;
                  do {
                    if (0x3f < uVar14) {
                      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                      pvVar8 = GetStdHandle(0xfffffff5);
                      SetConsoleTextAttribute(pvVar8,7);
                      DVar9 = lstrlenA(s_Password_is_too_long__00404368);
                      pvVar8 = GetStdHandle(0xfffffff5);
                      WriteConsoleA(pvVar8,s_Password_is_too_long__00404368,DVar9,
                                    (LPDWORD)&DAT_00404840,(LPVOID)0x0);
                      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                      shutdown(param_1,2);
                      closesocket(param_1);
                    /* WARNING: Subroutine does not return */
                      ExitThread(0);
                    }
                    cVar1 = *pcVar10;
                    local_110c[uVar14] = cVar1;
                    uVar14 = uVar14 + 1;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar1 != '\0');
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,0xf);
                  DVar9 = lstrlenA(local_110c);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,local_110c,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,7);
                  DVar9 = lstrlenA(s_Ip__00404380);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,s_Ip__00404380,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  local_1128 = 0x10;
                  iVar7 = getpeername(param_1,(sockaddr *)local_1124,&local_1128);
                  if ((iVar7 == 0) &&
                     (pcVar11 = inet_ntoa((in_addr)local_1124._4_4_), pcVar11 != (char *)0x0)) {
                    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                    pvVar8 = GetStdHandle(0xfffffff5);
                    SetConsoleTextAttribute(pvVar8,0xf);
                    DVar9 = lstrlenA(pcVar11);
                    pvVar8 = GetStdHandle(0xfffffff5);
                    WriteConsoleA(pvVar8,pcVar11,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  }
                  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  SetConsoleTextAttribute(pvVar8,7);
                  DVar9 = lstrlenA(&DAT_00404388);
                  pvVar8 = GetStdHandle(0xfffffff5);
                  WriteConsoleA(pvVar8,&DAT_00404388,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                  iVar7 = FUN_00401e1f(local_110c);
                  if (iVar7 == 0) {
                    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                    pvVar8 = GetStdHandle(0xfffffff5);
                    SetConsoleTextAttribute(pvVar8,7);
                    DVar9 = lstrlenA(s_Wrong_password____0040438c);
                    pvVar8 = GetStdHandle(0xfffffff5);
                    WriteConsoleA(pvVar8,s_Wrong_password____0040438c,DVar9,(LPDWORD)&DAT_00404840,
                                  (LPVOID)0x0);
                    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                    shutdown(param_1,2);
                    closesocket(param_1);
                    /* WARNING: Subroutine does not return */
                    ExitThread(0);
                  }
                  pSVar12 = (SOCKET *)FUN_00402c18(param_1);
                  if (pSVar12 != (SOCKET *)0x0) {
                    *pSVar12 = param_1;
                    pSVar12[0x6c] = extraout_ECX;
                    pSVar12[0x69] = DAT_00425074;
                    pSVar12[0x62] = local_1110;
                    pSVar12[0x68] = local_1114;
                    pSVar12[0x6a] = 0;
                    *(undefined2 *)(pSVar12 + 0x67) = 0;
                    *(undefined2 *)((int)pSVar12 + 0x19e) = 0;
                    local_1008 = pSVar12;
                    lstrcpyA((LPSTR)(pSVar12 + 2),local_108c);
                    lstrcpyA((LPSTR)(pSVar12 + 0x12),local_10cc);
                    local_1528 = '\b';
                    local_1527 = DAT_00404434;
                    local_1526[0] = DAT_00404430;
                    local_1526[1] = (char)pSVar12[0x6c];
                    send(*pSVar12,&local_1528,4,0);
                    FUN_00402c72(local_1008);
                    local_152c = unaff_ESI;
                  }
                }
              }
              if (local_1008 == (SOCKET *)0x0) {
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                pvVar8 = GetStdHandle(0xfffffff5);
                SetConsoleTextAttribute(pvVar8,7);
                DVar9 = lstrlenA(s_Error_during_packet_transmission_004043a0);
                pvVar8 = GetStdHandle(0xfffffff5);
                WriteConsoleA(pvVar8,s_Error_during_packet_transmission_004043a0,DVar9,
                              (LPDWORD)&DAT_00404840,(LPVOID)0x0);
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                shutdown(param_1,2);
                closesocket(param_1);
                    /* WARNING: Subroutine does not return */
                ExitThread(0);
              }
              if (cVar1 != '\x02') break;
              uVar4 = *(ushort *)(pcVar10 + 3);
              bVar2 = pcVar10[5];
              bVar3 = pcVar10[6];
              local_1008[100] = (uint)*(ushort *)(pcVar10 + 1);
              local_1008[0x65] = (uint)uVar4;
              local_1008[0x66] = (uint)bVar2;
              local_1008[99] = (uint)bVar3;
              unaff_ESI = (uint)*(ushort *)(pcVar10 + 7);
              uVar5 = *(undefined2 *)(pcVar10 + 9);
              *(ushort *)(local_1008 + 0x67) = *(ushort *)(pcVar10 + 7);
              *(undefined2 *)((int)local_1008 + 0x19e) = uVar5;
              local_1008[0x69] = DAT_00425074;
              local_1008[0x6b] = 1;
              pcVar10 = pcVar10 + 0xb;
            }
            if (cVar1 != '\x03') break;
            uVar14 = 0;
            puVar16 = (ushort *)(pcVar10 + 1);
            do {
              if (0x3f < uVar14) {
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                pvVar8 = GetStdHandle(0xfffffff5);
                SetConsoleTextAttribute(pvVar8,7);
                DVar9 = lstrlenA(s_Internal_Error_for_player_004043c8);
                pvVar8 = GetStdHandle(0xfffffff5);
                WriteConsoleA(pvVar8,s_Internal_Error_for_player_004043c8,DVar9,
                              (LPDWORD)&DAT_00404840,(LPVOID)0x0);
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                pvVar8 = GetStdHandle(0xfffffff5);
                SetConsoleTextAttribute(pvVar8,0xf);
                DVar9 = lstrlenA(local_108c);
                pvVar8 = GetStdHandle(0xfffffff5);
                WriteConsoleA(pvVar8,local_108c,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
                LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
                FUN_00402c47(param_1);
                shutdown(param_1,2);
                closesocket(param_1);
                    /* WARNING: Subroutine does not return */
                ExitThread(0);
              }
              uVar4 = *puVar16;
              local_104c[uVar14] = (char)uVar4;
              uVar14 = uVar14 + 1;
              puVar16 = (ushort *)((int)puVar16 + 1);
            } while ((char)uVar4 != '\0');
            pCVar13 = FUN_00402b32(local_104c);
            if (pCVar13 == (LPSTR)0x0) {
              pcVar10 = (char *)((int)puVar16 + 5);
            }
            else {
              unaff_ESI = (uint)*puVar16;
              uVar4 = puVar16[1];
              uVar6 = puVar16[2];
              *(uint *)(pCVar13 + 0x40) = unaff_ESI;
              *(uint *)(pCVar13 + 0x44) = (uint)uVar4;
              *(uint *)(pCVar13 + 0x48) = (uint)(byte)uVar6;
              *(SOCKET *)(pCVar13 + 0x4c) = DAT_00425074;
              pcVar10 = (char *)((int)puVar16 + 5);
            }
          }
          if (cVar1 != '\x04') break;
          pcVar10 = pcVar10 + 1;
        }
        if (cVar1 != '\x06') break;
        local_1008[0x68] = *(SOCKET *)(pcVar10 + 1);
        local_1008[0x6a] = 0;
        pcVar10 = pcVar10 + 5;
      }
      if (cVar1 != '\a') break;
      local_1528 = '\a';
      local_1527 = (undefined1)local_152c;
      pcVar11 = pcVar10 + 1;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      pvVar8 = GetStdHandle(0xfffffff5);
      SetConsoleTextAttribute(pvVar8,0xf);
      DVar9 = lstrlenA(local_10cc);
      pvVar8 = GetStdHandle(0xfffffff5);
      WriteConsoleA(pvVar8,local_10cc,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      pvVar8 = GetStdHandle(0xfffffff5);
      SetConsoleTextAttribute(pvVar8,7);
      DVar9 = lstrlenA(&DAT_004043e4);
      pvVar8 = GetStdHandle(0xfffffff5);
      WriteConsoleA(pvVar8,&DAT_004043e4,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      pcVar10 = pcVar11;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      pvVar8 = GetStdHandle(0xfffffff5);
      SetConsoleTextAttribute(pvVar8,0xf);
      DVar9 = lstrlenA(pcVar11);
      pvVar8 = GetStdHandle(0xfffffff5);
      WriteConsoleA(pvVar8,pcVar11,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      uVar14 = 0;
      do {
        uVar15 = uVar14;
        if (0xff < uVar15) goto LAB_00401e98;
        cVar1 = *pcVar10;
        local_1526[uVar15] = cVar1;
        pcVar10 = pcVar10 + 1;
        uVar14 = uVar15 + 1;
      } while (cVar1 != '\0');
      if ((local_1008[0x6c] == 0) && (DAT_0040442c != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,7);
        DVar9 = lstrlenA(s__failed__player_cannot_use_navsa_004043ec);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,s__failed__player_cannot_use_navsa_004043ec,DVar9,
                      (LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      }
      else {
        FUN_00402be6(&local_1528,uVar15 + 3);
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
        pvVar8 = GetStdHandle(0xfffffff5);
        SetConsoleTextAttribute(pvVar8,7);
        DVar9 = lstrlenA(&DAT_004043e8);
        pvVar8 = GetStdHandle(0xfffffff5);
        WriteConsoleA(pvVar8,&DAT_004043e8,DVar9,(LPDWORD)&DAT_00404840,(LPVOID)0x0);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004250b8);
      }
    }
  } while( true );
}



LPSTR FUN_00402b32(LPCSTR param_1)

{
  uint uVar1;
  int iVar2;
  LPSTR lpString1;
  LPSTR lpString1_00;
  LPSTR local_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  local_c = (LPSTR)0x0;
  lpString1 = &DAT_0041fc74;
  do {
    lpString1_00 = local_c;
    if ((LPSTR)0x425073 < lpString1) {
LAB_00402bca:
      if (lpString1_00 != (LPSTR)0x0) {
        lstrcpyA(lpString1_00,param_1);
        lpString1_00[0x50] = '\0';
        lpString1_00[0x51] = '\0';
        lpString1_00[0x52] = '\0';
        lpString1_00[0x53] = '\0';
      }
      return lpString1_00;
    }
    if (*lpString1 == '\0') {
      lstrcpyA(lpString1,param_1);
      lpString1[0x50] = '\0';
      lpString1[0x51] = '\0';
      lpString1[0x52] = '\0';
      lpString1[0x53] = '\0';
      return lpString1;
    }
    iVar2 = lstrcmpA(lpString1,param_1);
    if (iVar2 == 0) {
      if (0x1d < (uint)(DAT_00425074 - *(int *)(lpString1 + 0x4c))) {
        lpString1[0x50] = '\0';
        lpString1[0x51] = '\0';
        lpString1[0x52] = '\0';
        lpString1[0x53] = '\0';
      }
      return lpString1;
    }
    uVar1 = *(uint *)(lpString1 + 0x4c);
    if (uVar1 < local_8) {
      local_c = lpString1;
      local_8 = uVar1;
    }
    if (0x1e < DAT_00425074 - uVar1) {
      lpString1_00 = lpString1;
      if (local_c != (LPSTR)0x0) {
        lpString1_00 = local_c;
      }
      goto LAB_00402bca;
    }
    lpString1 = lpString1 + 0x54;
  } while( true );
}



void FUN_00402be6(char *param_1,int param_2)

{
  SOCKET *pSVar1;
  
  for (pSVar1 = &DAT_00404874; pSVar1 < &DAT_0041fc74; pSVar1 = pSVar1 + 0x6d) {
    if (*pSVar1 != 0) {
      send(*pSVar1,param_1,param_2,0);
    }
  }
  return;
}



int * FUN_00402c18(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00404874;
  while( true ) {
    if ((int *)0x41fc73 < piVar1) {
      return (int *)0x0;
    }
    if (*piVar1 == 0) break;
    piVar1 = piVar1 + 0x6d;
  }
  *piVar1 = param_1;
  return piVar1;
}



void FUN_00402c47(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_00404874;
  while( true ) {
    if ((int *)0x41fc73 < piVar1) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 0x6d;
  }
  *piVar1 = 0;
  return;
}



void FUN_00402c72(SOCKET *param_1)

{
  char *pcVar1;
  int len;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  char local_3004 [2];
  char local_3002 [12286];
  
  pcVar1 = local_3004;
  cVar2 = '\0';
  for (pcVar3 = &DAT_0041fc74; pcVar3 < &DAT_00425074; pcVar3 = pcVar3 + 0x54) {
    if ((*pcVar3 != '\0') && ((uint)(DAT_00425074 - *(int *)(pcVar3 + 0x4c)) < 0x1e)) {
      *pcVar1 = '\x01';
      pcVar1[1] = cVar2;
      pcVar1 = pcVar1 + 2;
      for (pcVar5 = pcVar3; *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
        *pcVar1 = *pcVar5;
        pcVar1 = pcVar1 + 1;
      }
      *pcVar1 = '\0';
      pcVar1 = pcVar1 + 1;
    }
    cVar2 = cVar2 + '\x01';
  }
  cVar2 = '\0';
  for (piVar4 = &DAT_00404874; piVar4 < &DAT_0041fc74; piVar4 = piVar4 + 0x6d) {
    if (*piVar4 != 0) {
      *pcVar1 = '\x02';
      pcVar1[1] = cVar2;
      *(int *)(pcVar1 + 2) = piVar4[0x62];
      *(int *)(pcVar1 + 6) = piVar4[0x68];
      pcVar1 = pcVar1 + 10;
      for (piVar6 = piVar4 + 2; (char)*piVar6 != '\0'; piVar6 = (int *)((int)piVar6 + 1)) {
        *pcVar1 = (char)*piVar6;
        pcVar1 = pcVar1 + 1;
      }
      *pcVar1 = '\0';
      piVar6 = piVar4 + 0x12;
      while( true ) {
        pcVar3 = pcVar1 + 1;
        if ((char)*piVar6 == '\0') break;
        *pcVar3 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        pcVar1 = pcVar3;
      }
      *pcVar3 = '\0';
      pcVar1 = pcVar1 + 2;
    }
    cVar2 = cVar2 + '\x01';
  }
  len = (int)pcVar1 - (int)local_3004;
  if (len != 0) {
    send(*param_1,local_3004,len,0);
  }
  return;
}



uint FUN_00402d50(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar2 = 0;
  uVar3 = 0;
  cVar1 = *param_1;
  pcVar4 = param_1 + 1;
  if (cVar1 == '\x02') {
    cVar1 = param_1[1];
    uVar3 = 0xffffffff;
    pcVar4 = param_1 + 2;
  }
  while (cVar1 != '\0') {
    iVar2 = (uint)(byte)(cVar1 - 0x30) + iVar2 * 10;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  }
  return iVar2 + uVar3 ^ uVar3;
}



BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}



HANDLE CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,
                   LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,
                   LPDWORD lpThreadId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateThread(lpThreadAttributes,dwStackSize,lpStartAddress,lpParameter,dwCreationFlags,
                        lpThreadId);
  return pvVar1;
}



void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00402d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}



void ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00402d98. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}



void ExitThread(DWORD dwExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00402d9e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitThread(dwExitCode);
  return;
}



DWORD GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}



DWORD GetPrivateProfileStringA
                (LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,
                DWORD nSize,LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}



HANDLE GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}



DWORD GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}



void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00402dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}



void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00402dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



BOOL ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
             LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}



BOOL SetConsoleTextAttribute(HANDLE hConsoleOutput,WORD wAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleTextAttribute(hConsoleOutput,wAttributes);
  return BVar1;
}



void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x00402dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}



BOOL WriteConsoleA(HANDLE hConsoleOutput,void *lpBuffer,DWORD nNumberOfCharsToWrite,
                  LPDWORD lpNumberOfCharsWritten,LPVOID lpReserved)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteConsoleA(hConsoleOutput,lpBuffer,nNumberOfCharsToWrite,lpNumberOfCharsWritten,
                        lpReserved);
  return BVar1;
}



LPSTR lstrcatA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcatA(lpString1,lpString2);
  return pCVar1;
}



int lstrcmpA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpA(lpString1,lpString2);
  return iVar1;
}



int lstrcmpiA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpiA(lpString1,lpString2);
  return iVar1;
}



LPSTR lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402df2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}



int lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}



int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402dfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}



SOCKET accept(SOCKET s,sockaddr *addr,int *addrlen)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = accept(s,addr,addrlen);
  return SVar1;
}



int bind(SOCKET s,sockaddr *addr,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = bind(s,addr,namelen);
  return iVar1;
}



int closesocket(SOCKET s)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = closesocket(s);
  return iVar1;
}



int getpeername(SOCKET s,sockaddr *name,int *namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = getpeername(s,name,namelen);
  return iVar1;
}



u_short htons(u_short hostshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(hostshort);
  return uVar1;
}



char * inet_ntoa(in_addr in)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = inet_ntoa(in);
  return pcVar1;
}



int listen(SOCKET s,int backlog)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = listen(s,backlog);
  return iVar1;
}



int recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}



int send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}



int shutdown(SOCKET s,int how)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = shutdown(s,how);
  return iVar1;
}



SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00402e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}


