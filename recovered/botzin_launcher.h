typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef unsigned short    wchar16;
typedef int BOOL;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef BOOL (*CALINFO_ENUMPROCA)(LPSTR);

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef ulong DWORD;

typedef DWORD CALID;

typedef DWORD CALTYPE;

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef ushort WORD;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef long LONG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef PCONTEXT LPCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef PVOID PSECURITY_DESCRIPTOR;

typedef struct _TOKEN_PRIVILEGES _TOKEN_PRIVILEGES, *P_TOKEN_PRIVILEGES;

typedef struct _LUID_AND_ATTRIBUTES _LUID_AND_ATTRIBUTES, *P_LUID_AND_ATTRIBUTES;

typedef struct _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES;

typedef struct _LUID _LUID, *P_LUID;

typedef struct _LUID LUID;

struct _LUID {
    DWORD LowPart;
    LONG HighPart;
};

struct _LUID_AND_ATTRIBUTES {
    LUID Luid;
    DWORD Attributes;
};

struct _TOKEN_PRIVILEGES {
    DWORD PrivilegeCount;
    LUID_AND_ATTRIBUTES Privileges[1];
};

typedef struct _SID_IDENTIFIER_AUTHORITY _SID_IDENTIFIER_AUTHORITY, *P_SID_IDENTIFIER_AUTHORITY;

typedef struct _SID_IDENTIFIER_AUTHORITY *PSID_IDENTIFIER_AUTHORITY;

struct _SID_IDENTIFIER_AUTHORITY {
    BYTE Value[6];
};

typedef struct _LUID *PLUID;

typedef struct _ACL _ACL, *P_ACL;

typedef struct _ACL ACL;

typedef ACL *PACL;

struct _ACL {
    BYTE AclRevision;
    BYTE Sbz1;
    WORD AclSize;
    WORD AceCount;
    WORD Sbz2;
};

typedef struct _OSVERSIONINFOW _OSVERSIONINFOW, *P_OSVERSIONINFOW;

typedef struct _OSVERSIONINFOW *LPOSVERSIONINFOW;

typedef wchar_t WCHAR;

struct _OSVERSIONINFOW {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    WCHAR szCSDVersion[128];
};

typedef CHAR *LPCSTR;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

typedef ULONG_PTR SIZE_T;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef struct _TOKEN_PRIVILEGES *PTOKEN_PRIVILEGES;

typedef DWORD ACCESS_MASK;

typedef PVOID PSID;

typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser=1,
    TokenGroups=2,
    TokenPrivileges=3,
    TokenOwner=4,
    TokenPrimaryGroup=5,
    TokenDefaultDacl=6,
    TokenSource=7,
    TokenType=8,
    TokenImpersonationLevel=9,
    TokenStatistics=10,
    TokenRestrictedSids=11,
    TokenSessionId=12,
    TokenGroupsAndPrivileges=13,
    TokenSessionReference=14,
    TokenSandBoxInert=15,
    TokenAuditPolicy=16,
    TokenOrigin=17,
    TokenElevationType=18,
    TokenLinkedToken=19,
    TokenElevation=20,
    TokenHasRestrictions=21,
    TokenAccessInformation=22,
    TokenVirtualizationAllowed=23,
    TokenVirtualizationEnabled=24,
    TokenIntegrityLevel=25,
    TokenUIAccess=26,
    TokenMandatoryPolicy=27,
    TokenLogonSid=28,
    MaxTokenInfoClass=29
} _TOKEN_INFORMATION_CLASS;

typedef enum _TOKEN_INFORMATION_CLASS TOKEN_INFORMATION_CLASS;

typedef WCHAR *LPWSTR;

typedef DWORD SECURITY_INFORMATION;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

typedef HANDLE *PHANDLE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[192]; // Actual DOS program
};

typedef uint UINT_PTR;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef WCHAR OLECHAR;

typedef OLECHAR *BSTR;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef DWORD *PDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef int (*FARPROC)(void);

typedef HANDLE *LPHANDLE;

typedef int INT;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD *LPWORD;

typedef BOOL *LPBOOL;

typedef void *LPCVOID;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_12 IMAGE_RESOURCE_DIR_STRING_U_12, *PIMAGE_RESOURCE_DIR_STRING_U_12;

struct IMAGE_RESOURCE_DIR_STRING_U_12 {
    word Length;
    wchar16 NameString[6];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_22 IMAGE_RESOURCE_DIR_STRING_U_22, *PIMAGE_RESOURCE_DIR_STRING_U_22;

struct IMAGE_RESOURCE_DIR_STRING_U_22 {
    word Length;
    wchar16 NameString[11];
};

typedef ACCESS_MASK REGSAM;

typedef LONG LSTATUS;

typedef char *va_list;




HANDLE __stdcall GetStdHandle(DWORD nStdHandle);
LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo);
BOOL __stdcall WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped);
LPSTR __stdcall CharNextA(LPCSTR lpsz);
void __stdcall ExitProcess(UINT uExitCode);
int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
BOOL __stdcall FindClose(HANDLE hFindFile);
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData);
BOOL __stdcall FreeLibrary(HMODULE hLibModule);
LPSTR __stdcall GetCommandLineA(void);
int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData);
DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName);
LCID __stdcall GetThreadLocale(void);
HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags);
int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax);
LPSTR __stdcall lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength);
int __stdcall lstrlenA(LPCSTR lpString);
LSTATUS __stdcall RegCloseKey(HKEY hKey);
LSTATUS __stdcall RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LSTATUS __stdcall RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
int __stdcall WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,LPBOOL lpUsedDefaultChar);
INT __stdcall SysReAllocStringLen(BSTR *pbstr,OLECHAR *psz,uint len);
void __stdcall SysFreeString(BSTR bstrString);
HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes);
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect);
BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType);
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
int * FUN_004011c4(void);
void FUN_00401214(int param_1);
undefined4 FUN_0040121c(int *param_1,int *param_2);
void FUN_0040124c(int *param_1);
void FUN_00401264(int *param_1,int *param_2,int *param_3);
undefined4 FUN_004012d8(int *param_1,uint *param_2);
void FUN_00401368(int param_1,int *param_2);
void FUN_004013cc(LPVOID param_1,int param_2,int *param_3);
void FUN_00401444(LPVOID param_1,int param_2,undefined4 *param_3);
void FUN_004014fc(uint param_1,int param_2,undefined4 *param_3);
void FUN_00401590(int param_1,int param_2,undefined4 *param_3);
void FUN_00401610(int param_1,int *param_2);
void FUN_004016a0(LPVOID param_1,int param_2,int *param_3);
void FUN_004017c4(int param_1,int param_2,int *param_3);
void FUN_00401850(void);
void FUN_004019f4(int *param_1);
undefined4 * FUN_00401a58(uint param_1);
void FUN_00401a88(uint *param_1,uint param_2);
void FUN_00401ab8(int param_1);
void FUN_00401adc(uint *param_1,uint param_2);
uint FUN_00401b04(int param_1);
uint FUN_00401b74(uint *param_1);
undefined1 FUN_00401bac(uint *param_1,int param_2);
void FUN_00401c5c(uint *param_1,uint param_2);
void FUN_00401ce4(void);
undefined4 FUN_00401d30(uint *param_1);
undefined4 FUN_00401dbc(int param_1);
undefined4 FUN_00401de8(LPVOID param_1,int param_2);
int FUN_00401e1c(int param_1);
uint * FUN_00401e48(uint param_1);
uint * FUN_00401f3c(int param_1);
undefined4 FUN_004020cc(int param_1);
undefined4 FUN_00402270(int param_1,int param_2);
undefined4 FUN_00402440(undefined4 *param_1,uint param_2);
int FUN_00402504(int param_1);
int FUN_00402524(int param_1);
void FUN_00402544(int *param_1,int param_2);
void FUN_00402594(undefined4 param_1,undefined4 param_2);
void FUN_004025a0(uint param_1,undefined4 param_2);
void FUN_004025ec(uint param_1);
void FUN_00402628(undefined4 *param_1,undefined4 *param_2,uint param_3);
byte * FUN_00402668(byte *param_1,int *param_2);
void FUN_00402754(int param_1,int *param_2);
int * FUN_00402860(int *param_1,int *param_2,uint param_3);
void FUN_004028d0(undefined4 *param_1,uint param_2,undefined1 param_3);
void FUN_004028f0(byte *param_1,int *param_2);
void thunk_FUN_004029d8(void);
void FUN_004029d8(void);
void FUN_00402cf0(void);
void FUN_00402db4(void);
void FUN_00402df0(int *param_1);
undefined4 FUN_00402e04(int param_1);
void FUN_00402e1c(int *param_1);
void FUN_00402e28(int param_1,int *param_2);
void FUN_00402e80(int *param_1);
void FUN_00402ec4(int param_1);
void FUN_00402f44(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00402f94(int *param_1);
int * FUN_00402f9c(int *param_1);
int * FUN_00402fac(int *param_1,char param_2);
undefined4 FUN_00402fd8(undefined4 param_1);
undefined4 FUN_00402ffc(void);
void FUN_00403014(void);
void FUN_00403028(void);
int FUN_0040303c(int param_1,undefined4 param_2,char *param_3);
undefined4 * FUN_0040305c(undefined4 *param_1,undefined4 param_2,char *param_3);
undefined4 FUN_004030a0(undefined4 param_1);
void FUN_00403470(int param_1);
void FUN_0040351c(void);
void FUN_00403674(void);
void FUN_00403694(void);
void FUN_004036bc(void);
void FUN_0040371c(void);
void FUN_0040377c(undefined4 param_1,int param_2);
void FUN_00403808(void);
bool FUN_00403864(void);
void FUN_00403894(undefined4 param_1,undefined4 param_2,DWORD param_3);
void FUN_00403920(void);
void FUN_004039f8(undefined4 param_1);
void FUN_00403a04(undefined4 param_1);
int * FUN_00403a10(int *param_1);
void FUN_00403a34(int *param_1,int param_2);
void FUN_00403a64(int *param_1,undefined4 *param_2);
undefined4 * FUN_00403ad4(int param_1);
void FUN_00403b00(int *param_1,undefined4 *param_2,uint param_3);
void FUN_00403b30(LPSTR param_1,int param_2,LPCWSTR param_3,int param_4);
void FUN_00403b4c(int *param_1,LPCWSTR param_2,int param_3);
void FUN_00403bd8(int *param_1,undefined4 param_2);
void FUN_00403be8(int *param_1,char *param_2);
void FUN_00403c18(int *param_1,LPCWSTR param_2);
void FUN_00403c54(int *param_1,char *param_2,uint param_3);
undefined4 FUN_00403c80(int param_1);
void FUN_00403c88(int *param_1,undefined4 *param_2);
void FUN_00403ccc(int *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00403d40(int *param_1,int param_2);
void FUN_00403e68(int param_1);
undefined * FUN_00403e78(undefined *param_1);
int FUN_00403e84(int *param_1);
int thunk_FUN_00403e84(int *param_1);
int thunk_FUN_00403e84(int *param_1);
void FUN_00403ed8(int param_1,int param_2,uint param_3,int *param_4);
void FUN_00403f18(int *param_1,int param_2,int param_3);
void FUN_00403f60(int *param_1,uint param_2);
undefined4 * FUN_00403fcc(undefined4 *param_1);
void FUN_00403fe4(undefined4 *param_1,int param_2);
BSTR * FUN_00404008(BSTR *param_1,OLECHAR *param_2);
void FUN_0040402c(int param_1,int param_2);
void FUN_0040405c(undefined4 *param_1,char *param_2,int param_3);
int FUN_004040f0(int param_1,int param_2);
int * FUN_00404124(int *param_1,char *param_2,int param_3);
void FUN_00404210(int *param_1,char *param_2);
void FUN_0040421c(int param_1,int param_2,int param_3);
void FUN_00404338(BSTR *param_1,int *param_2,char *param_3,int param_4);
void FUN_0040446c(void);
void FUN_00404474(void);
void FUN_0040447c(void);
undefined4 FUN_00404484(undefined4 param_1);
int FUN_00404494(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_004044b8(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
int FUN_00404534(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_00404580(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_004045fc(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
undefined4 FUN_0040464c(int param_1);
int FUN_00404654(int param_1);
void FUN_0040465c(BSTR *param_1,int *param_2,char *param_3,int param_4);
int * thunk_FUN_00404124(int *param_1,char *param_2,int param_3);
void FUN_00404674(undefined4 *param_1,int param_2);
void FUN_0040467c(undefined4 *param_1,int param_2,int param_3,int *param_4);
void FUN_00404808(undefined4 *param_1,int param_2,int param_3);
undefined4 * FUN_00404814(undefined4 *param_1,int param_2);
void FUN_00404850(int *param_1,int param_2,int param_3);
undefined4 FUN_00404878(int param_1);
void FUN_004048c0(int param_1);
void thunk_FUN_004048f0(LPCSTR param_1);
void FUN_004048f0(LPCSTR param_1);
char * FUN_004048fc(char *param_1,int param_2);
HMODULE FUN_00404ab4(LPCSTR param_1);
void FUN_00404d24(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
void FUN_00404d80(undefined4 *param_1);
void FUN_00404d90(undefined4 *param_1,undefined4 param_2,undefined1 *param_3);
int * FUN_00404e00(int *param_1);
void FUN_00404e18(int *param_1,int *param_2);
void FUN_00404e44(undefined4 *param_1,int *param_2);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes);
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex);
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue);
void FUN_00404f84(SIZE_T param_1);
undefined4 FUN_00404f90(void);
void FUN_00404f98(void);
LPVOID FUN_00404fdc(void);
void FUN_0040501c(void);
void FUN_00405028(undefined4 param_1);
BOOL __stdcall AdjustTokenPrivileges(HANDLE TokenHandle,BOOL DisableAllPrivileges,PTOKEN_PRIVILEGES NewState,DWORD BufferLength,PTOKEN_PRIVILEGES PreviousState,PDWORD ReturnLength);
BOOL __stdcall AllocateAndInitializeSid(PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,BYTE nSubAuthorityCount,DWORD nSubAuthority0,DWORD nSubAuthority1,DWORD nSubAuthority2,DWORD nSubAuthority3,DWORD nSubAuthority4,DWORD nSubAuthority5,DWORD nSubAuthority6,DWORD nSubAuthority7,PSID *pSid);
BOOL __stdcall EqualSid(PSID pSid1,PSID pSid2);
PVOID __stdcall FreeSid(PSID pSid);
DWORD __stdcall GetLengthSid(PSID pSid);
BOOL __stdcall GetTokenInformation(HANDLE TokenHandle,TOKEN_INFORMATION_CLASS TokenInformationClass,LPVOID TokenInformation,DWORD TokenInformationLength,PDWORD ReturnLength);
BOOL __stdcall InitializeSecurityDescriptor(PSECURITY_DESCRIPTOR pSecurityDescriptor,DWORD dwRevision);
BOOL __stdcall IsValidSid(PSID pSid);
BOOL __stdcall LookupPrivilegeValueA(LPCSTR lpSystemName,LPCSTR lpName,PLUID lpLuid);
BOOL __stdcall OpenProcessToken(HANDLE ProcessHandle,DWORD DesiredAccess,PHANDLE TokenHandle);
LSTATUS __stdcall RegCloseKey(HKEY hKey);
LSTATUS __stdcall RegCreateKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD Reserved,LPSTR lpClass,DWORD dwOptions,REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult,LPDWORD lpdwDisposition);
LSTATUS __stdcall RegDeleteKeyA(HKEY hKey,LPCSTR lpSubKey);
LSTATUS __stdcall RegEnumKeyA(HKEY hKey,DWORD dwIndex,LPSTR lpName,DWORD cchName);
LSTATUS __stdcall RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LSTATUS __stdcall RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
LSTATUS __stdcall RegSetValueExA(HKEY hKey,LPCSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData);
LSTATUS __stdcall RegSetValueExW(HKEY hKey,LPCWSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData);
BOOL __stdcall SetSecurityDescriptorDacl(PSECURITY_DESCRIPTOR pSecurityDescriptor,BOOL bDaclPresent,PACL pDacl,BOOL bDaclDefaulted);
BOOL __stdcall CloseHandle(HANDLE hObject);
HANDLE __stdcall CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,LPCSTR lpName);
HANDLE __stdcall CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
HANDLE __stdcall CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
HANDLE __stdcall CreateFileMappingA(HANDLE hFile,LPSECURITY_ATTRIBUTES lpFileMappingAttributes,DWORD flProtect,DWORD dwMaximumSizeHigh,DWORD dwMaximumSizeLow,LPCSTR lpName);
HANDLE __stdcall CreateFileMappingW(HANDLE hFile,LPSECURITY_ATTRIBUTES lpFileMappingAttributes,DWORD flProtect,DWORD dwMaximumSizeHigh,DWORD dwMaximumSizeLow,LPCWSTR lpName);
HANDLE __stdcall CreateMutexA(LPSECURITY_ATTRIBUTES lpMutexAttributes,BOOL bInitialOwner,LPCSTR lpName);
void FUN_004051ac(void);
HANDLE __stdcall CreateMutexW(LPSECURITY_ATTRIBUTES lpMutexAttributes,BOOL bInitialOwner,LPCWSTR lpName);
void FUN_004051d4(void);
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
BOOL __stdcall DeleteFileW(LPCWSTR lpFileName);
BOOL __stdcall DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle,LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions);
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
DWORD __stdcall FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer,DWORD nSize,va_list *Arguments);
BOOL __stdcall FreeLibrary(HMODULE hLibModule);
UINT __stdcall GetACP(void);
DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength,LPSTR lpBuffer);
DWORD __stdcall GetCurrentDirectoryW(DWORD nBufferLength,LPWSTR lpBuffer);
HANDLE __stdcall GetCurrentProcess(void);
DWORD __stdcall GetCurrentProcessId(void);
HANDLE __stdcall GetCurrentThread(void);
DWORD __stdcall GetCurrentThreadId(void);
BOOL __stdcall GetDiskFreeSpaceA(LPCSTR lpRootPathName,LPDWORD lpSectorsPerCluster,LPDWORD lpBytesPerSector,LPDWORD lpNumberOfFreeClusters,LPDWORD lpTotalNumberOfClusters);
BOOL __stdcall GetExitCodeThread(HANDLE hThread,LPDWORD lpExitCode);
DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName);
DWORD __stdcall GetFileAttributesW(LPCWSTR lpFileName);
DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh);
DWORD __stdcall GetLastError(void);
int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData);
DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize);
DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize);
DWORD __stdcall GetModuleFileNameW(HMODULE hModule,LPWSTR lpFilename,DWORD nSize);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName);
FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName);
UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer,UINT uSize);
UINT __stdcall GetSystemDirectoryW(LPWSTR lpBuffer,UINT uSize);
DWORD __stdcall GetTempPathW(DWORD nBufferLength,LPWSTR lpBuffer);
BOOL __stdcall GetThreadContext(HANDLE hThread,LPCONTEXT lpContext);
LCID __stdcall GetThreadLocale(void);
DWORD __stdcall GetTickCount(void);
DWORD __stdcall GetVersion(void);
BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation);
BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation);
BOOL __stdcall GetVersionExW(LPOSVERSIONINFOW lpVersionInformation);
BOOL __stdcall IsBadReadPtr(void *lp,UINT_PTR ucb);
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName);
HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags);
HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes);
HLOCAL __stdcall LocalFree(HLOCAL hMem);
LPVOID __stdcall MapViewOfFile(HANDLE hFileMappingObject,DWORD dwDesiredAccess,DWORD dwFileOffsetHigh,DWORD dwFileOffsetLow,SIZE_T dwNumberOfBytesToMap);
HANDLE __stdcall OpenEventA(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCSTR lpName);
HANDLE __stdcall OpenFileMappingA(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCSTR lpName);
HANDLE __stdcall OpenFileMappingW(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCWSTR lpName);
HANDLE __stdcall OpenMutexA(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCSTR lpName);
HANDLE __stdcall OpenMutexW(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCWSTR lpName);
HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwProcessId);
BOOL __stdcall ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,LPOVERLAPPED lpOverlapped);
BOOL __stdcall ReadProcessMemory(HANDLE hProcess,LPCVOID lpBaseAddress,LPVOID lpBuffer,SIZE_T nSize,SIZE_T *lpNumberOfBytesRead);
BOOL __stdcall ReleaseMutex(HANDLE hMutex);
BOOL __stdcall SetEvent(HANDLE hEvent);
void __stdcall SetLastError(DWORD dwErrCode);
BOOL __stdcall SetThreadPriority(HANDLE hThread,int nPriority);
void __stdcall Sleep(DWORD dwMilliseconds);
BOOL __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress);
BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType);
BOOL __stdcall VirtualProtect(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect);
BOOL __stdcall VirtualProtectEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect);
SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength);
SIZE_T __stdcall VirtualQueryEx(HANDLE hProcess,LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength);
DWORD __stdcall WaitForMultipleObjects(DWORD nCount,HANDLE *lpHandles,BOOL bWaitAll,DWORD dwMilliseconds);
DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds);
BOOL __stdcall WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped);
BOOL __stdcall WriteProcessMemory(HANDLE hProcess,LPVOID lpBaseAddress,LPCVOID lpBuffer,SIZE_T nSize,SIZE_T *lpNumberOfBytesWritten);
LPWSTR __stdcall lstrcatW(LPWSTR lpString1,LPCWSTR lpString2);
int __stdcall lstrcmpA(LPCSTR lpString1,LPCSTR lpString2);
int __stdcall lstrcmpiA(LPCSTR lpString1,LPCSTR lpString2);
LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2);
LPWSTR __stdcall lstrcpyW(LPWSTR lpString1,LPCWSTR lpString2);
int __stdcall lstrlenA(LPCSTR lpString);
int __stdcall lstrlenW(LPCWSTR lpString);
HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName);
HWND __stdcall FindWindowExA(HWND hWndParent,HWND hWndChildAfter,LPCSTR lpszClass,LPCSTR lpszWindow);
int __stdcall GetSystemMetrics(int nIndex);
DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId);
int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
void FUN_004054b4(undefined4 *param_1,uint param_2);
void FUN_004054bc(void);
undefined4 FUN_004054f4(void);
undefined4 FUN_00405770(void);
undefined4 FUN_00405790(void);
undefined4 FUN_004057b0(void);
void FUN_004057d0(void);
void FUN_004064ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_004064d0(byte *param_1,undefined4 param_2,int param_3);
int FUN_00406500(undefined *param_1,undefined *param_2);
void FUN_00406550(undefined *param_1,int *param_2);
void FUN_00406584(undefined *param_1,int *param_2);
int FUN_00406630(char *param_1);
undefined4 * FUN_00406648(undefined4 *param_1,undefined4 *param_2,uint param_3);
char * FUN_004066d0(char *param_1,char param_2);
void FUN_004066f0(int param_1,byte *param_2,uint param_3);
void FUN_00406748(void);
void FUN_0040675c(int *param_1);
void FUN_00406768(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5,int param_6);
uint FUN_0040684a(uint param_1,undefined4 param_2,byte *param_3);
undefined * FUN_00406892(undefined1 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00406955(void);
void switchD_004068b2::caseD_0(uint param_1,undefined4 param_2,char param_3);
void FUN_004069e6(uint param_1);
undefined4 FUN_00406b5c(undefined4 param_1);
void FUN_00406b6c(undefined4 param_1);
byte * FUN_00406b7c(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5);
void FUN_00406bbc(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void FUN_00406bd0(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4);
uint FUN_00406c90(undefined4 param_1,uint param_2,int param_3);
void FUN_00406cd4(undefined1 *param_1,undefined4 param_2,char param_3,undefined4 param_4,int param_5,byte param_6);
char FUN_00406dca(void);
void FUN_00406dd3(void);
void FUN_00406e77(void);
void FUN_00406f30(void);
void FUN_00406fa3(void);
void FUN_00406fac(undefined4 param_1,undefined4 param_2,char param_3);
void FUN_00406fd9(void);
void FUN_004070fb(void);
void FUN_004071cf(void);
void FUN_004071d8(LCID param_1,LCTYPE param_2,undefined4 *param_3,int *param_4);
void FUN_0040724c(LCTYPE param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6);
void FUN_00407288(void);
void FUN_004079bc(int param_1,char param_2,byte *param_3,undefined4 param_4,undefined4 param_5);
int * FUN_00407a3c(int *param_1,char param_2,undefined4 *param_3);
void FUN_00407a78(int param_1,char param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00407cfc(int *param_1);
undefined4 FUN_00407d7c(int *param_1);
void FUN_00407d94(void);
undefined4 FUN_00408184(byte *param_1,int param_2);
undefined4 FUN_004081fc(undefined *param_1,int param_2);
undefined4 FUN_00408220(byte *param_1,int param_2);
char * FUN_004082bc(byte *param_1,char param_2);
void FUN_004082fc(LCID param_1);
int * FUN_00408ef4(int *param_1,char param_2,undefined4 *param_3);
void FUN_00408fb4(int *param_1);
bool FUN_00409024(int *param_1,undefined *param_2,undefined *param_3,char param_4,char param_5);
void FUN_004092b8(int *param_1,undefined *param_2,undefined *param_3,char param_4);
void FUN_004092cc(undefined4 *param_1,int param_2,int param_3,int *param_4);
void FUN_004092fc(int *param_1,int param_2,uint param_3);
bool FUN_00409318(int param_1,int param_2);
byte * FUN_0040936c(undefined *param_1,undefined *param_2,int param_3,int param_4);
int FUN_004093c0(char *param_1);
byte * FUN_004093d8(byte *param_1,char *param_2,uint param_3,uint param_4,uint param_5,char param_6,uint param_7);
uint FUN_00409614(int param_1,int param_2,uint param_3,uint param_4);
void FUN_004096a0(int *param_1,uint param_2,char param_3,char param_4);
void FUN_00409774(undefined4 *param_1,uint param_2,char param_3,int *param_4);
void FUN_004097bc(int param_1,int *param_2);
void FUN_00409878(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5);
void FUN_00409968(uint param_1,int *param_2);
void FUN_00409a18(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5);
void FUN_00409ac0(int param_1,uint param_2,char param_3,int *param_4);
void FUN_00409b08(int param_1,uint param_2,undefined4 param_3,int *param_4);
void FUN_00409b54(uint param_1,uint param_2,undefined4 param_3,int *param_4);
uint FUN_00409c00(char param_1,byte *param_2,int param_3);
void FUN_00409ccc(uint param_1,int *param_2);
void FUN_00409eac(undefined4 *param_1,int *param_2);
void FUN_00409ee0(int param_1,char param_2,int *param_3);
void FUN_00409f44(LPCWSTR param_1,int *param_2);
void FUN_0040a0d8(int param_1);
void FUN_0040a534(void);
void FUN_0040a54c(LPCVOID param_1,undefined4 *param_2,int *param_3);
int * FUN_0040a658(short *param_1);
int FUN_0040a6b4(short *param_1,int param_2);
void FUN_0040a6ec(short *param_1);
void FUN_0040a6f4(short *param_1,uint param_2);
uint FUN_0040a7c0(int param_1,uint param_2);
undefined4 FUN_0040a828(int param_1);
LPVOID FUN_0040a83c(HMODULE param_1);
FARPROC FUN_0040a918(HMODULE param_1,LPCSTR param_2,char param_3);
FARPROC FUN_0040ab08(HMODULE param_1,LPCSTR param_2);
void FUN_0040ab6c(short *param_1,int param_2,char param_3,int *param_4);
void FUN_0040acac(int *param_1,int *param_2);
int FUN_0040afb4(uint param_1);
void FUN_0040b044(void);
void FUN_0040b068(void);
undefined1 * FUN_0040b218(void);
undefined1 * FUN_0040b220(void);
undefined1 * FUN_0040b228(void);
undefined1 * FUN_0040b230(void);
undefined * FUN_0040b238(void);
undefined4 FUN_0040b240(void);
void FUN_0040b35c(void);
void FUN_0040b650(void);
uint FUN_0040b734(void);
void FUN_0040bc24(void);
int * FUN_0040bea4(void);
void FUN_0040c394(byte *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4,undefined4 param_5,undefined4 param_6,int param_7,undefined4 *param_8,undefined4 param_9,int *param_10);
void FUN_0040c5b8(byte *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5);
void FUN_0040c63c(byte *param_1,undefined4 *param_2);
void FUN_0040c654(uint param_1,uint param_2,undefined4 param_3,int param_4);
void FUN_0040c7f0(int param_1,int param_2,undefined1 param_3,undefined1 param_4,int param_5);
void FUN_0040c8b4(int param_1,undefined4 param_2,int *param_3,int *param_4);
void FUN_0040ce2c(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void FUN_0040d25c(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0040d2f4(void);
void FUN_0040d340(LPCVOID param_1,undefined4 param_2,undefined1 *param_3,int *param_4,int param_5,int param_6,int param_7,int param_8);
void FUN_0040d8e0(LPCVOID param_1,int *param_2);
void FUN_0040d900(void);
void FUN_0040d994(undefined4 *param_1,char param_2);
void FUN_0040da04(void);
void FUN_0040da7c(undefined4 *param_1,char param_2);
bool FUN_0040db18(LPCVOID param_1,int *param_2,int *param_3);
LPCVOID FUN_0040dba4(LPCVOID param_1);
undefined4 FUN_0040dc34(int param_1);
uint FUN_0040dc38(undefined4 param_1,undefined4 param_2,uint param_3);
undefined1 FUN_0040dd00(undefined4 param_1,undefined4 param_2,uint param_3);
undefined1 FUN_0040dd14(int *param_1,uint param_2);
undefined4 FUN_0040ddd8(uint param_1,undefined4 param_2,int param_3,int *param_4);
void FUN_0040e278(void);
void FUN_0040e2d8(void);
void FUN_0040e33c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,int param_5);
void FUN_0040e47c(undefined4 *param_1);
void FUN_0040e6a4(void);
void FUN_0040e7a8(void);
HANDLE FUN_0040e878(HANDLE param_1);
void FUN_0040e8c8(int *param_1,undefined4 *param_2);
undefined4 FUN_0040e970(void);
int FUN_0040ea58(void);
undefined4 FUN_0040eb40(LPCVOID param_1);
undefined4 FUN_0040eb80(void);
void FUN_0040ec20(void);
undefined4 FUN_0040ec28(void);
void FUN_0040ecb0(void);
void FUN_0040ecb8(LPCVOID param_1,HANDLE param_2,char param_3,int param_4,undefined4 *param_5);
BOOL __stdcall GetKernelObjectSecurity(HANDLE Handle,SECURITY_INFORMATION RequestedInformation,PSECURITY_DESCRIPTOR pSecurityDescriptor,DWORD nLength,LPDWORD lpnLengthNeeded);
void FUN_0040f0c4(int *param_1,int *param_2);
undefined4 FUN_0040f314(uint *param_1,undefined4 param_2,uint param_3);
int FUN_0040f364(int param_1);
undefined4 FUN_0040f3ec(undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool FUN_0040f420(uint param_1);
void FUN_0040f474(void);
uint FUN_0040fb64(void);
void FUN_00410b84(void);
undefined4 FUN_00410b88(void);
char FUN_00410b90(uint param_1,undefined4 *param_2);
void FUN_00410c34(void);
void FUN_00410cd4(LPCWSTR param_1,char param_2,int *param_3);
void FUN_00410d28(void);
undefined4 FUN_00410eec(void);
void FUN_00410f20(void);
char FUN_00410f64(undefined4 param_1,undefined4 param_2,int param_3);
bool FUN_00410f9c(HANDLE param_1,undefined4 *param_2);
void FUN_0041101c(undefined4 *param_1,PSECURITY_DESCRIPTOR param_2,char param_3);
void FUN_00411214(void);
void FUN_00411300(void);
void FUN_004113d8(void);
void FUN_004114f0(void);
void FUN_004115d0(undefined4 *param_1,uint param_2,char param_3,int *param_4);
void FUN_004116e0(char param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_004117b4(uint *param_1);
void FUN_00411804(char param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_004118b0(void);
undefined4 FUN_004118f8(void);
short * FUN_00411978(short *param_1);
bool FUN_00411b5c(int param_1,LPCVOID param_2,undefined4 param_3);
undefined1 FUN_00411bc4(short *param_1,LPCVOID param_2,LPCVOID param_3,int param_4);
void FUN_00411ca4(void);
short * FUN_00411dd4(void);
undefined4 FUN_00411df8(int param_1);
void FUN_00411e50(undefined4 param_1,undefined4 param_2);
void FUN_004120a0(int *param_1,byte param_2);
void FUN_004121b0(HANDLE param_1);
void FUN_004121c8(undefined4 param_1,undefined4 param_2,HANDLE param_3);
undefined4 FUN_00412278(int param_1);
void FUN_004123c0(void);
void FUN_00412e00(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00412f14(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00412f9c(void);
void FUN_004130b0(HANDLE param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0041360c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_00413798(int param_1,int param_2,int param_3);
uint FUN_0041416c(int param_1,int param_2,uint param_3,int param_4,int param_5);
undefined4 FUN_00414224(int param_1,int param_2);
char FUN_00414264(int *param_1,int *param_2);
void FUN_0041541c(int *param_1);
void FUN_00415658(void);
void FUN_00415744(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
HMODULE FUN_00416574(void);
undefined4 FUN_00417078(void);
void FUN_00417084(void);
void FUN_0041708c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8);
undefined4 FUN_00417130(void);
undefined4 FUN_00417208(int param_1,char param_2);
void FUN_00417388(int param_1);
uint FUN_00417678(void);
void FUN_00417814(HANDLE param_1,int param_2);
undefined4 FUN_004178ec(void);
undefined4 FUN_00417928(int param_1);
undefined4 FUN_00417980(void);
void FUN_004179e0(void);
void FUN_004179ec(HANDLE param_1,PSID param_2);
int FUN_00418224(LPCWSTR param_1,undefined4 param_2,DWORD param_3);
void FUN_004182d8(LPWSTR param_1);
void FUN_00418410(byte *param_1,int *param_2);
void FUN_004184a4(LPWSTR param_1,undefined1 *param_2);
void FUN_00418748(void);
void FUN_00418924(undefined4 param_1,LPCWSTR param_2,undefined4 param_3,char param_4);
void FUN_00418ad4(HKEY param_1,undefined *param_2);
void FUN_00418bb0(void);
void FUN_00419198(int param_1,char param_2);
void FUN_00419634(HMODULE param_1,int param_2,int param_3,undefined4 param_4,int *param_5,undefined1 param_6,undefined4 param_7,undefined4 *param_8);
void FUN_00419ad8(char *param_1,LPCWSTR param_2,undefined4 param_3,int param_4);
undefined4 FUN_00419d94(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041a158(HANDLE param_1,uint param_2);
int FUN_0041a334(HANDLE param_1,uint param_2,undefined1 param_3,LPCWSTR param_4,LPCSTR param_5);
bool FUN_0041a3f8(HANDLE param_1,uint param_2,uint param_3);
void FUN_0041a46c(int param_1);
bool FUN_0041a4f8(HANDLE param_1,LPCVOID param_2,LPVOID param_3,SIZE_T param_4);
bool FUN_0041a524(HANDLE param_1,LPCVOID param_2,LPVOID param_3,SIZE_T param_4);
undefined4 FUN_0041a550(HANDLE param_1,LPVOID param_2,LPCVOID param_3,char param_4,SIZE_T param_5);
undefined4 FUN_0041a5a0(HANDLE param_1,uint param_2,undefined4 param_3,int param_4);
void FUN_0041a704(void);
undefined4 FUN_0041a7c4(HANDLE param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5);
uint FUN_0041a864(HANDLE param_1,uint param_2,int param_3,undefined4 param_4,undefined4 *param_5,int param_6);
void FUN_0041aad4(int param_1);
undefined4 FUN_0041ab98(HANDLE param_1,uint param_2,int param_3,undefined4 param_4,undefined4 *param_5,int param_6);
uint FUN_0041aeb4(HANDLE param_1,uint param_2,undefined4 param_3,int param_4);
bool FUN_0041af6c(HANDLE param_1,uint param_2,int *param_3,int param_4);
undefined1 FUN_0041b590(void);
void FUN_0041b8c4(LPCVOID param_1,byte *param_2,undefined4 *param_3,char param_4);
undefined4 FUN_0041ba8c(char *param_1);
void FUN_0041ba9c(void);
void FUN_0041bac8(int *param_1,int param_2);
undefined1 FUN_0041c00c(HANDLE param_1,undefined4 param_2,LPCVOID param_3,int param_4,int param_5);
void FUN_0041c168(HMODULE param_1,int param_2,HANDLE param_3,undefined4 param_4,undefined4 param_5,uint param_6,int param_7,int param_8);
void FUN_0041c624(HANDLE param_1,undefined *param_2,uint param_3);
void FUN_0041c6b8(void);
void FUN_0041c89c(void);
void FUN_0041c90c(void);
void FUN_0041c984(void);
void FUN_0041cf64(void);
void FUN_0041cf9c(void);
void entry(void);

