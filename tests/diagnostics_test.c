#include "botzin_diagnostics.h"
#include <stdio.h>
static DWORD WINAPI worker(LPVOID parameter) {
    unsigned index;
    UNREFERENCED_PARAMETER(parameter);
    for (index=0;index<50;++index) botzin_diag_log("info","diagnostics.thread-check",0,"concurrent event");
    return 0;
}
int main(void) {
    HANDLE threads[2];
    char path[1024];
    unsigned index;
    SetLastError(0x5a5a);
    botzin_diag_log("error","diagnostics.self-test.start",ERROR_FILE_NOT_FOUND,"quotes: \"value\"; slash: \\; newline:\n");
    if (GetLastError()!=0x5a5a) { fputs("Logger changed GetLastError\n",stderr); return 1; }
    for(index=0;index<2;++index) {
        threads[index]=CreateThread(NULL,0,worker,NULL,0,NULL);
        if(!threads[index]) return 1;
    }
    if(WaitForMultipleObjects(2,threads,TRUE,10000)!=WAIT_OBJECT_0) return 1;
    for(index=0;index<2;++index) CloseHandle(threads[index]);
    botzin_diag_log("info","diagnostics.self-test.end",0,"complete");
    if(!botzin_diag_path_utf8(path,sizeof path)) return 1;
    printf("LOG_PATH=%s\n",path);
    return 0;
}
