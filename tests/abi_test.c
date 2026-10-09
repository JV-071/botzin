#include "botzin_abi.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static uint32_t ecx_value, stack_value;
__declspec(naked) static void probe(void) {
    __asm {
        mov ecx_value, ecx
        mov eax, [esp + 4]
        mov stack_value, eax
        ret 4
    }
}
int main(void) {
    BotzinCoreInit call;
    void (*pointer)(void) = probe;
    if (sizeof(void *) != 4) return 1;
    memcpy(&call, &pointer, sizeof call);
    call((WNDPROC)(UINT_PTR)0x12345678u, NULL, (HWND)(UINT_PTR)0x76543210u);
    if (ecx_value != 0x12345678u || stack_value != 0x76543210u) {
        fputs("x86 initialization ABI mismatch\n", stderr);
        return 1;
    }
    puts("x86 ABI: ECX, stack argument and callee cleanup verified");
    return 0;
}
