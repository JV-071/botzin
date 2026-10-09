#ifndef BOTZIN_ABI_H
#define BOTZIN_ABI_H
#include <windows.h>
#if defined(_WIN64)
#error Botzin requires the x86 ABI.
#endif
/* The core consumes the window procedure in ECX and the dialog HWND on the stack.
   EDX is unused. The callee removes the single stack argument. */
typedef void (__fastcall *BotzinCoreInit)(WNDPROC window_proc, void *unused_edx, HWND dialog);
#endif
