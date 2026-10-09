#include "botzin_diagnostics.h"
#include <stdint.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
static INIT_ONCE once = INIT_ONCE_STATIC_INIT;
static SRWLOCK lock = SRWLOCK_INIT;
static HANDLE file = INVALID_HANDLE_VALUE;
static wchar_t log_path[MAX_PATH];
static unsigned long long sequence;
static int enabled = 1;
static DWORD logging_error;
static BOOL CALLBACK initialize_log(PINIT_ONCE state, PVOID parameter, PVOID *context) {
    wchar_t folder[MAX_PATH], setting[8];
    DWORD length;
    int result;
    UNREFERENCED_PARAMETER(state); UNREFERENCED_PARAMETER(parameter); UNREFERENCED_PARAMETER(context);
    if (GetEnvironmentVariableW(L"BOTZIN_DIAGNOSTICS", setting, 8) && setting[0] == L'0') {
        enabled = 0;
        return TRUE;
    }
    length = GetEnvironmentVariableW(L"BOTZIN_LOG_DIR", folder, MAX_PATH);
    if (!length) length = GetTempPathW(MAX_PATH, folder);
    if (!length || length >= MAX_PATH) { logging_error = length ? ERROR_FILENAME_EXCED_RANGE : GetLastError(); return TRUE; }
    CreateDirectoryW(folder, NULL);
    result = swprintf_s(log_path, MAX_PATH, L"%ls\\botzin-host-%lu.jsonl", folder, (unsigned long)GetCurrentProcessId());
    if (result < 0) { log_path[0] = 0; return TRUE; }
    file = CreateFileW(log_path, FILE_APPEND_DATA, FILE_SHARE_READ, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    if (file == INVALID_HANDLE_VALUE) logging_error = GetLastError();
    return TRUE;
}
static void narrow_utf8(const char *input, char *output, size_t capacity) {
    wchar_t wide[2048];
    if (!input) input = "";
    if (!MultiByteToWideChar(CP_ACP, 0, input, -1, wide, 2048) ||
        !WideCharToMultiByte(CP_UTF8, 0, wide, -1, output, (int)capacity, NULL, NULL)) output[0] = 0;
}
static void escape_json(const char *input, char *output, size_t capacity) {
    size_t position = 0;
    const unsigned char *p = (const unsigned char *)(input ? input : "");
    while (*p && position + 7 < capacity) {
        const unsigned char c = *p++;
        if (c == '"' || c == '\\') { output[position++] = '\\'; output[position++] = (char)c; }
        else if (c < 32) {
            static const char hex[] = "0123456789abcdef";
            output[position++]='\\'; output[position++]='u'; output[position++]='0'; output[position++]='0';
            output[position++]=hex[c>>4]; output[position++]=hex[c&15];
        } else if (c >= 128) {
            unsigned remaining = c >= 240 ? 3u : c >= 224 ? 2u : c >= 192 ? 1u : 0u;
            output[position++] = (char)c;
            while (remaining-- && *p) output[position++] = (char)*p++;
        } else output[position++] = (char)c;
    }
    output[position] = 0;
}
void botzin_diag_log(const char *level, const char *stage, DWORD error, const char *detail) {
    const DWORD saved = GetLastError();
    char utf8[4096], escaped[8192], message_utf8[2048], message_escaped[4096], line[14336], safe_level[64], safe_stage[512];
    wchar_t message[1024];
    DWORD written;
    int length;
    FILETIME now;
    unsigned long long utc_us;
    InitOnceExecuteOnce(&once, initialize_log, NULL, NULL);
    if (!enabled) { SetLastError(saved); return; }
    escape_json(level, safe_level, sizeof safe_level); escape_json(stage, safe_stage, sizeof safe_stage);
    narrow_utf8(detail, utf8, sizeof utf8); escape_json(utf8, escaped, sizeof escaped);
    message_utf8[0] = 0;
    if (error && FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, NULL, error, 0, message, 1024, NULL))
        if (!WideCharToMultiByte(CP_UTF8, 0, message, -1, message_utf8, sizeof message_utf8, NULL, NULL)) message_utf8[0] = 0;
    escape_json(message_utf8, message_escaped, sizeof message_escaped);
    GetSystemTimeAsFileTime(&now);
    utc_us = ((((unsigned long long)now.dwHighDateTime << 32) | now.dwLowDateTime) - 116444736000000000ULL) / 10;
    AcquireSRWLockExclusive(&lock);
    ++sequence;
    length = snprintf(line, sizeof line,
        "{\"schema_version\":1,\"component\":\"host\",\"level\":\"%s\",\"stage\":\"%s\",\"sequence\":%llu,\"pid\":%lu,\"tid\":%lu,\"uptime_ms\":%llu,\"utc_us\":%llu,\"win32_code\":%lu,\"win32_message\":\"%s\",\"detail\":\"%s\",\"file_sink_available\":%s,\"log_error_code\":%lu}\n",
        safe_level, safe_stage, sequence, (unsigned long)GetCurrentProcessId(), (unsigned long)GetCurrentThreadId(),
        (unsigned long long)GetTickCount64(), utc_us, (unsigned long)error, message_escaped, escaped, file != INVALID_HANDLE_VALUE ? "true" : "false", (unsigned long)logging_error);
    if (length > 0 && (size_t)length < sizeof line) {
        if (file != INVALID_HANDLE_VALUE && !WriteFile(file, line, (DWORD)length, &written, NULL)) logging_error = GetLastError();
        OutputDebugStringA(line);
    }
    ReleaseSRWLockExclusive(&lock);
    SetLastError(saved);
}
int botzin_diag_path_utf8(char *output, size_t capacity) {
    const DWORD saved = GetLastError();
    int result;
    InitOnceExecuteOnce(&once, initialize_log, NULL, NULL);
    if (!output || !capacity || capacity > INT_MAX) { SetLastError(saved); return 0; }
    result = WideCharToMultiByte(CP_UTF8, 0, log_path, -1, output, (int)capacity, NULL, NULL);
    SetLastError(saved);
    return result > 0;
}
