#ifndef BOTZIN_DIAGNOSTICS_H
#define BOTZIN_DIAGNOSTICS_H
#include <windows.h>
#include <stddef.h>
void botzin_diag_log(const char *level, const char *stage, DWORD error, const char *detail);
int botzin_diag_path_utf8(char *output, size_t capacity);
#endif
