#include "botzin_abi.h"
#include <commctrl.h>
#include <stdint.h>
#include <string.h>
static HINSTANCE instance;
static HWND dialog;
static HMODULE skin_module, core_module;
static const char empty[] = "";
typedef void (__cdecl *SkinInit)(const char *, const char *, const char *);
static SkinInit skin_init;
static LRESULT CALLBACK host_window_proc(HWND, UINT, WPARAM, LPARAM);
static HMODULE load_peer(const char *filename) {
    char path[MAX_PATH];
    const DWORD count = GetModuleFileNameA(instance, path, MAX_PATH);
    char *slash;
    size_t prefix, length;
    if (!count || count >= MAX_PATH) return NULL;
    slash = strrchr(path, '\\');
    if (!slash) return NULL;
    prefix = (size_t)(slash - path) + 1;
    length = strlen(filename);
    if (prefix + length + 1 > sizeof path) return NULL;
    memcpy(path + prefix, filename, length + 1);
    return LoadLibraryA(path);
}
static void __cdecl skin_exit_hook(void) { ExitProcess(0); }
static BOOL redirect_skin_exit(FARPROC function) {
    uintptr_t source, destination;
    void (__cdecl *hook)(void) = skin_exit_hook;
    int32_t displacement;
    uint8_t jump[5] = {0xe9, 0, 0, 0, 0};
    DWORD old_protect, restored;
    SIZE_T written = 0;
    BOOL result;
    if (!function) return FALSE;
    memcpy(&source, &function, sizeof source);
    memcpy(&destination, &hook, sizeof destination);
    displacement = (int32_t)(destination - source - 5u);
    memcpy(jump + 1, &displacement, sizeof displacement);
    if (!VirtualProtect((void *)source, sizeof jump, PAGE_EXECUTE_READWRITE, &old_protect)) return FALSE;
    result = WriteProcessMemory(GetCurrentProcess(), (void *)source, jump, sizeof jump, &written);
    FlushInstructionCache(GetCurrentProcess(), (void *)source, sizeof jump);
    VirtualProtect((void *)source, sizeof jump, old_protect, &restored);
    return result && written == sizeof jump;
}
static LRESULT CALLBACK host_window_proc(HWND hwnd, UINT message, WPARAM command, LPARAM data) {
    const uintptr_t *parameters = (const uintptr_t *)data;
    if (message == WM_INITDIALOG) dialog = hwnd;
    else if (message == WM_COMMAND) {
        if (command == 0x539 && parameters) {
            WNDCLASSEXA wc = {0};
            wc.cbSize = sizeof wc;
            wc.style = 3;
            wc.cbWndExtra = 0x1e;
            wc.hInstance = instance;
            wc.hbrBackground = (HBRUSH)(INT_PTR)(COLOR_BTNFACE + 1);
            wc.lpszMenuName = empty;
            wc.hIcon = wc.hIconSm = LoadIconA(NULL, IDI_APPLICATION);
            wc.hCursor = LoadCursorA(NULL, IDC_ARROW);
            memcpy(&wc.lpfnWndProc, &parameters[0], sizeof wc.lpfnWndProc);
            wc.lpszClassName = (LPCSTR)parameters[1];
            RegisterClassExA(&wc);
        } else if (command == 0x53a && parameters) {
            DLGPROC procedure;
            memcpy(&procedure, &parameters[2], sizeof procedure);
            CreateDialogParamA(instance, (LPCSTR)parameters[0], (HWND)parameters[1], procedure, 0);
        } else if (command == 0x53b && skin_init) {
            skin_init(empty, empty, (const char *)data);
        }
    } else if (message == WM_DESTROY) PostQuitMessage(0);
    else return DefWindowProcA(hwnd, message, command, data);
    return 0;
}
static INT_PTR CALLBACK host_dialog_proc(HWND hwnd, UINT message, WPARAM command, LPARAM data) {
    return (INT_PTR)host_window_proc(hwnd, message, command, data);
}
static DWORD WINAPI host_thread(LPVOID parameter) {
    WNDCLASSEXA wc = {0};
    MSG message;
    FARPROC raw;
    BotzinCoreInit initialize;
    UNREFERENCED_PARAMETER(parameter);
    InitCommonControls();
    wc.cbSize = sizeof wc;
    wc.style = 3;
    wc.lpfnWndProc = host_window_proc;
    wc.cbWndExtra = 0x1e;
    wc.hInstance = instance;
    wc.hbrBackground = (HBRUSH)(INT_PTR)(COLOR_BTNFACE + 1);
    wc.lpszMenuName = empty;
    wc.lpszClassName = "TBOTDLG00";
    wc.hIcon = wc.hIconSm = LoadIconA(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursorA(NULL, IDC_ARROW);
    RegisterClassExA(&wc);
    CreateDialogParamA(instance, MAKEINTRESOURCEA(1999), NULL, host_dialog_proc, 0);
    skin_module = load_peer("USkin.dll");
    if (skin_module) {
        raw = GetProcAddress(skin_module, "USkinInit");
        memcpy(&skin_init, &raw, sizeof skin_init);
        if (!redirect_skin_exit(GetProcAddress(skin_module, "USkinExit")))
            OutputDebugStringA("Botzin: skin exit bridge unavailable.\n");
    }
    core_module = load_peer("botzin.dll");
    if (core_module) {
        raw = GetProcAddress(core_module, "EcInit");
        if (raw) {
            memcpy(&initialize, &raw, sizeof initialize);
            initialize(DefWindowProcA, NULL, dialog);
        }
    } else OutputDebugStringA("Botzin: core DLL unavailable.\n");
    while (GetMessageA(&message, NULL, 0, 0) > 0) {
        TranslateMessage(&message);
        DispatchMessageA(&message);
    }
    return 1;
}
BOOL WINAPI DllMain(HINSTANCE module, DWORD reason, LPVOID reserved) {
    UNREFERENCED_PARAMETER(reserved);
    if (reason == DLL_PROCESS_ATTACH) {
        HANDLE thread;
        instance = module;
        DisableThreadLibraryCalls(module);
        thread = CreateThread(NULL, 0, host_thread, NULL, 0, NULL);
        if (thread) CloseHandle(thread);
        else return FALSE;
    }
    return TRUE;
}
