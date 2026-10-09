typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
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

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef ulonglong __uint64;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

typedef ulong DWORD;

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

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

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

typedef uchar BYTE;

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

typedef struct _flt _flt, *P_flt;

struct _flt {
    int flags;
    int nbytes;
    long lval;
    double dval;
};

typedef struct _flt *FLT;

typedef struct _strflt _strflt, *P_strflt;

struct _strflt {
    int sign;
    int decpt;
    int flag;
    char *mantissa;
};

typedef struct _strflt *STRFLT;

typedef enum enum_3272 {
    INTRNCVT_OK=0,
    INTRNCVT_OVERFLOW=1,
    INTRNCVT_UNDERFLOW=2
} enum_3272;

typedef enum enum_3272 INTRNCVT_STATUS;

typedef struct _Collvec _Collvec, *P_Collvec;

struct _Collvec {
    uint _Page;
    wchar_t *_LocaleName;
};

typedef struct _Ctypevec _Ctypevec, *P_Ctypevec;

struct _Ctypevec {
    uint _Page;
    short *_Table;
    int _Delfl;
    wchar_t *_LocaleName;
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef char *va_list;

typedef uint uintptr_t;

typedef struct FLASHWINFO FLASHWINFO, *PFLASHWINFO;

typedef uint UINT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct FLASHWINFO {
    UINT cbSize;
    HWND hwnd;
    DWORD dwFlags;
    UINT uCount;
    DWORD dwTimeout;
};

struct HWND__ {
    int unused;
};

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef struct tagSCROLLINFO tagSCROLLINFO, *PtagSCROLLINFO;

struct tagSCROLLINFO {
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
};

typedef struct tagSCROLLINFO SCROLLINFO;

typedef SCROLLINFO *LPCSCROLLINFO;

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
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef uint UINT_PTR;

typedef long LONG_PTR;

typedef struct tagLC_STRINGS tagLC_STRINGS, *PtagLC_STRINGS;

typedef struct tagLC_STRINGS *LPLC_STRINGS;

struct tagLC_STRINGS {
    wchar_t szLanguage[64];
    wchar_t szCountry[64];
    wchar_t szCodePage[16];
    wchar_t szLocaleName[85];
};

typedef struct _MMCKINFO _MMCKINFO, *P_MMCKINFO;

typedef struct _MMCKINFO MMCKINFO;

typedef DWORD FOURCC;

struct _MMCKINFO {
    FOURCC ckid;
    DWORD cksize;
    FOURCC fccType;
    DWORD dwDataOffset;
    DWORD dwFlags;
};

typedef struct _MMIOINFO _MMIOINFO, *P_MMIOINFO;

typedef struct _MMIOINFO *LPMMIOINFO;

typedef LONG_PTR LRESULT;

typedef char CHAR;

typedef CHAR *LPSTR;

typedef LONG_PTR LPARAM;

typedef LRESULT (MMIOPROC)(LPSTR, UINT, LPARAM, LPARAM);

typedef MMIOPROC *LPMMIOPROC;

typedef struct HTASK__ HTASK__, *PHTASK__;

typedef struct HTASK__ *HTASK;

typedef char *HPSTR;

typedef struct HMMIO__ HMMIO__, *PHMMIO__;

typedef struct HMMIO__ *HMMIO;

struct HMMIO__ {
    int unused;
};

struct _MMIOINFO {
    DWORD dwFlags;
    FOURCC fccIOProc;
    LPMMIOPROC pIOProc;
    UINT wErrorRet;
    HTASK htask;
    LONG cchBuffer;
    HPSTR pchBuffer;
    HPSTR pchNext;
    HPSTR pchEndRead;
    HPSTR pchEndWrite;
    LONG lBufOffset;
    LONG lDiskOffset;
    DWORD adwInfo[3];
    DWORD dwReserved1;
    DWORD dwReserved2;
    HMMIO hmmio;
};

struct HTASK__ {
    int unused;
};

typedef UINT MMRESULT;

typedef struct _MMCKINFO *LPMMCKINFO;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};

typedef UINT_PTR SOCKET;

typedef ushort u_short;

typedef WSADATA *LPWSADATA;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    short h_addrtype;
    short h_length;
    char **h_addr_list;
};

typedef struct setloc_struct setloc_struct, *Psetloc_struct;

typedef struct _is_ctype_compatible _is_ctype_compatible, *P_is_ctype_compatible;

struct _is_ctype_compatible {
    ulong id;
    int is_clike;
};

struct setloc_struct {
    wchar_t *pchLanguage;
    wchar_t *pchCountry;
    int iLocState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    UINT _cachecp;
    wchar_t _cachein[131];
    wchar_t _cacheout[131];
    struct _is_ctype_compatible _Loc_c[5];
    wchar_t _cacheLocaleName[85];
};

typedef struct _tiddata _tiddata, *P_tiddata;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct setloc_struct _setloc_struct;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct lconv lconv, *Plconv;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct _tiddata {
    ulong _tid;
    uintptr_t _thandle;
    int _terrno;
    ulong _tdoserrno;
    uint _fpds;
    ulong _holdrand;
    char *_token;
    wchar_t *_wtoken;
    uchar *_mtoken;
    char *_errmsg;
    wchar_t *_werrmsg;
    char *_namebuf0;
    wchar_t *_wnamebuf0;
    char *_namebuf1;
    wchar_t *_wnamebuf1;
    char *_asctimebuf;
    wchar_t *_wasctimebuf;
    void *_gmtimebuf;
    char *_cvtbuf;
    uchar _con_ch_buf[5];
    ushort _ch_buf_used;
    void *_initaddr;
    void *_initarg;
    void *_pxcptacttab;
    void *_tpxcptinfoptrs;
    int _tfpecode;
    pthreadmbcinfo ptmbcinfo;
    pthreadlocinfo ptlocinfo;
    int _ownlocale;
    ulong _NLG_dwCode;
    void *_terminate;
    void *_unexpected;
    void *_translator;
    void *_purecall;
    void *_curexception;
    void *_curcontext;
    int _ProcessingThrow;
    void *_curexcspec;
    void *_pFrameInfoChain;
    _setloc_struct _setloc_data;
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    int _cxxReThrow;
    ulong __initDomain;
    int _initapartment;
};

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

typedef struct _tiddata *_ptiddata;

typedef union tagCY tagCY, *PtagCY;

union tagCY {
};

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;

struct _s_HandlerType { // PlaceHolder Structure
};

typedef struct TranslatorGuardRN TranslatorGuardRN, *PTranslatorGuardRN;

struct TranslatorGuardRN { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct _s_ESTypeList _s_ESTypeList, *P_s_ESTypeList;

struct _s_ESTypeList { // PlaceHolder Structure
};

typedef struct EHRegistrationNode EHRegistrationNode, *PEHRegistrationNode;

struct EHRegistrationNode { // PlaceHolder Structure
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry { // PlaceHolder Structure
};

typedef struct _s_CatchableType _s_CatchableType, *P_s_CatchableType;

struct _s_CatchableType { // PlaceHolder Structure
};

typedef struct __ExceptionPtr __ExceptionPtr, *P__ExceptionPtr;

struct __ExceptionPtr { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct COleCurrency COleCurrency, *PCOleCurrency;

struct COleCurrency { // PlaceHolder Structure
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

struct _s_FuncInfo { // PlaceHolder Structure
};

typedef struct _Cvtvec _Cvtvec, *P_Cvtvec;

struct _Cvtvec { // PlaceHolder Structure
};

typedef enum _EXCEPTION_DISPOSITION {
} _EXCEPTION_DISPOSITION;

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct CMFCScanlinerBitmap CMFCScanlinerBitmap, *PCMFCScanlinerBitmap;

struct CMFCScanlinerBitmap { // PlaceHolder Structure
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>, *Pbasic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>;

struct basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> { // PlaceHolder Structure
};

typedef struct basic_istream<char,std::char_traits<char>_> basic_istream<char,std::char_traits<char>_>, *Pbasic_istream<char,std::char_traits<char>_>;

struct basic_istream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_streambuf<char,std::char_traits<char>_> basic_streambuf<char,std::char_traits<char>_>, *Pbasic_streambuf<char,std::char_traits<char>_>;

struct basic_streambuf<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>_> basic_string<char,std::char_traits<char>,std::allocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>_> { // PlaceHolder Structure
};

typedef struct ios_base ios_base, *Pios_base;

struct ios_base { // PlaceHolder Structure
};

typedef struct istreambuf_iterator<char,struct_std::char_traits<char>_> istreambuf_iterator<char,struct_std::char_traits<char>_>, *Pistreambuf_iterator<char,struct_std::char_traits<char>_>;

struct istreambuf_iterator<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct ostreambuf_iterator<char,struct_std::char_traits<char>_> ostreambuf_iterator<char,struct_std::char_traits<char>_>, *Postreambuf_iterator<char,struct_std::char_traits<char>_>;

struct ostreambuf_iterator<char,struct_std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct istreambuf_iterator<char,std::char_traits<char>_> istreambuf_iterator<char,std::char_traits<char>_>, *Pistreambuf_iterator<char,std::char_traits<char>_>;

struct istreambuf_iterator<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct numpunct<char> numpunct<char>, *Pnumpunct<char>;

struct numpunct<char> { // PlaceHolder Structure
};

typedef struct fpos<int> fpos<int>, *Pfpos<int>;

struct fpos<int> { // PlaceHolder Structure
};

typedef struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> _String_iterator<std::_String_val<std::_Simple_types<char>_>_>, *P_String_iterator<std::_String_val<std::_Simple_types<char>_>_>;

struct _String_iterator<std::_String_val<std::_Simple_types<char>_>_> { // PlaceHolder Structure
};

typedef struct locale locale, *Plocale;

struct locale { // PlaceHolder Structure
};

typedef struct num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>, *Pnum_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>;

struct num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> { // PlaceHolder Structure
};

typedef struct ctype<char> ctype<char>, *Pctype<char>;

struct ctype<char> { // PlaceHolder Structure
};

typedef struct basic_ios<char,std::char_traits<char>_> basic_ios<char,std::char_traits<char>_>, *Pbasic_ios<char,std::char_traits<char>_>;

struct basic_ios<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct _Lockit _Lockit, *P_Lockit;

struct _Lockit { // PlaceHolder Structure
};

typedef struct _Fac_node _Fac_node, *P_Fac_node;

struct _Fac_node { // PlaceHolder Structure
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Structure
};

typedef struct basic_iostream<char,std::char_traits<char>_> basic_iostream<char,std::char_traits<char>_>, *Pbasic_iostream<char,std::char_traits<char>_>;

struct basic_iostream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct _Init_locks _Init_locks, *P_Init_locks;

struct _Init_locks { // PlaceHolder Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>, *Pbasic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>;

struct basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> { // PlaceHolder Structure
};

typedef struct _Locinfo _Locinfo, *P_Locinfo;

struct _Locinfo { // PlaceHolder Structure
};

typedef struct basic_ostream<char,std::char_traits<char>_> basic_ostream<char,std::char_traits<char>_>, *Pbasic_ostream<char,std::char_traits<char>_>;

struct basic_ostream<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct ostreambuf_iterator<char,std::char_traits<char>_> ostreambuf_iterator<char,std::char_traits<char>_>, *Postreambuf_iterator<char,std::char_traits<char>_>;

struct ostreambuf_iterator<char,std::char_traits<char>_> { // PlaceHolder Structure
};

typedef struct _Ref_count_del_alloc<__ExceptionPtr,void_(__cdecl*)(__ExceptionPtr*),_DebugMallocator<int>_> _Ref_count_del_alloc<__ExceptionPtr,void_(__cdecl*)(__ExceptionPtr*),_DebugMallocator<int>_>, *P_Ref_count_del_alloc<__ExceptionPtr,void_(__cdecl*)(__ExceptionPtr*),_DebugMallocator<int>_>;

struct _Ref_count_del_alloc<__ExceptionPtr,void_(__cdecl*)(__ExceptionPtr*),_DebugMallocator<int>_> { // PlaceHolder Structure
};

typedef struct shared_ptr<__ExceptionPtr> shared_ptr<__ExceptionPtr>, *Pshared_ptr<__ExceptionPtr>;

struct shared_ptr<__ExceptionPtr> { // PlaceHolder Structure
};

typedef struct _Ref_count_base _Ref_count_base, *P_Ref_count_base;

struct _Ref_count_base { // PlaceHolder Structure
};

typedef enum event {
} event;

typedef struct _Locimp _Locimp, *P_Locimp;

struct _Locimp { // PlaceHolder Structure
};

typedef struct facet facet, *Pfacet;

struct facet { // PlaceHolder Structure
};

typedef struct SchedulerPolicy SchedulerPolicy, *PSchedulerPolicy;

struct SchedulerPolicy { // PlaceHolder Structure
};

typedef struct List<Concurrency::details::ListEntry,Concurrency::details::CollectionTypes::NoCount> List<Concurrency::details::ListEntry,Concurrency::details::CollectionTypes::NoCount>, *PList<Concurrency::details::ListEntry,Concurrency::details::CollectionTypes::NoCount>;

struct List<Concurrency::details::ListEntry,Concurrency::details::CollectionTypes::NoCount> { // PlaceHolder Structure
};

typedef struct StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock> StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>, *PStructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>;

struct StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock> { // PlaceHolder Structure
};

typedef struct List<struct_Concurrency::details::ListEntry,class_Concurrency::details::CollectionTypes::NoCount> List<struct_Concurrency::details::ListEntry,class_Concurrency::details::CollectionTypes::NoCount>, *PList<struct_Concurrency::details::ListEntry,class_Concurrency::details::CollectionTypes::NoCount>;

struct List<struct_Concurrency::details::ListEntry,class_Concurrency::details::CollectionTypes::NoCount> { // PlaceHolder Structure
};

typedef struct SchedulingNode SchedulingNode, *PSchedulingNode;

struct SchedulingNode { // PlaceHolder Structure
};

typedef struct SchedulerBase SchedulerBase, *PSchedulerBase;

struct SchedulerBase { // PlaceHolder Structure
};

typedef struct _ExceptionPtr_normal _ExceptionPtr_normal, *P_ExceptionPtr_normal;

struct _ExceptionPtr_normal { // PlaceHolder Structure
};

typedef struct CCRTHeap CCRTHeap, *PCCRTHeap;

struct CCRTHeap { // PlaceHolder Structure
};

typedef struct refcount_ptr<struct_boost::exception_detail::error_info_container> refcount_ptr<struct_boost::exception_detail::error_info_container>, *Prefcount_ptr<struct_boost::exception_detail::error_info_container>;

struct refcount_ptr<struct_boost::exception_detail::error_info_container> { // PlaceHolder Structure
};

typedef struct refcount_ptr<boost::exception_detail::error_info_container> refcount_ptr<boost::exception_detail::error_info_container>, *Prefcount_ptr<boost::exception_detail::error_info_container>;

struct refcount_ptr<boost::exception_detail::error_info_container> { // PlaceHolder Structure
};

typedef struct error_info_container error_info_container, *Perror_info_container;

struct error_info_container { // PlaceHolder Structure
};

typedef struct _LDBL12 _LDBL12, *P_LDBL12;

struct _LDBL12 {
    uchar ld12[12];
};

typedef struct _CRT_FLOAT _CRT_FLOAT, *P_CRT_FLOAT;

struct _CRT_FLOAT {
    float f;
};

typedef int (*_onexit_t)(void);

typedef struct _CRT_DOUBLE _CRT_DOUBLE, *P_CRT_DOUBLE;

struct _CRT_DOUBLE {
    double x;
};

typedef DWORD LCTYPE;

typedef void (*_PHNDLR)(int);

typedef struct tagCHOOSECOLORA tagCHOOSECOLORA, *PtagCHOOSECOLORA;

typedef DWORD COLORREF;

typedef UINT_PTR WPARAM;

typedef UINT_PTR (*LPCCHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

typedef CHAR *LPCSTR;

struct tagCHOOSECOLORA {
    DWORD lStructSize;
    HWND hwndOwner;
    HWND hInstance;
    COLORREF rgbResult;
    COLORREF *lpCustColors;
    DWORD Flags;
    LPARAM lCustData;
    LPCCHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
};

typedef UINT_PTR (*LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagOFNA tagOFNA, *PtagOFNA;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct tagOFNA {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpstrFilter;
    LPSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPSTR lpstrFile;
    DWORD nMaxFile;
    LPSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCSTR lpstrInitialDir;
    LPCSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    void *pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct tagCHOOSECOLORA *LPCHOOSECOLORA;

typedef struct tagOFNA *LPOPENFILENAMEA;

typedef ushort wint_t;

typedef long __time32_t;

typedef uint size_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct localeinfo_struct *_locale_t;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

typedef longlong __time64_t;

typedef struct threadlocaleinfostruct threadlocinfo;

typedef int intptr_t;

typedef size_t rsize_t;

typedef ushort wctype_t;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _IMAGE_SECTION_HEADER _IMAGE_SECTION_HEADER, *P_IMAGE_SECTION_HEADER;

typedef union _union_226 _union_226, *P_union_226;

union _union_226 {
    DWORD PhysicalAddress;
    DWORD VirtualSize;
};

struct _IMAGE_SECTION_HEADER {
    BYTE Name[8];
    union _union_226 Misc;
    DWORD VirtualAddress;
    DWORD SizeOfRawData;
    DWORD PointerToRawData;
    DWORD PointerToRelocations;
    DWORD PointerToLinenumbers;
    WORD NumberOfRelocations;
    WORD NumberOfLinenumbers;
    DWORD Characteristics;
};

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef struct _IMAGE_SECTION_HEADER *PIMAGE_SECTION_HEADER;

typedef WCHAR *LPCWSTR;

typedef LONG *PLONG;

typedef short SHORT;

typedef DWORD LCID;

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef struct in_addr in_addr, *Pin_addr;

typedef union _union_1226 _union_1226, *P_union_1226;

typedef struct _struct_1227 _struct_1227, *P_struct_1227;

typedef struct _struct_1228 _struct_1228, *P_struct_1228;

typedef ulong ULONG;

typedef uchar UCHAR;

typedef ushort USHORT;

struct _struct_1228 {
    USHORT s_w1;
    USHORT s_w2;
};

struct _struct_1227 {
    UCHAR s_b1;
    UCHAR s_b2;
    UCHAR s_b3;
    UCHAR s_b4;
};

union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};

struct in_addr {
    union _union_1226 S_un;
};

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct tagRECT *LPRECT;

typedef void *HGDIOBJ;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ *HBRUSH;

typedef struct HFONT__ *HFONT;

typedef DWORD *LPDWORD;

typedef DWORD *PDWORD;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct HDC__ *HDC;

typedef WORD *LPWORD;

typedef HANDLE HGLOBAL;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct HBITMAP__ *HBITMAP;

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

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
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




undefined4 FUN_10001000(undefined4 param_1,int param_2);
undefined8 FUN_10001036(undefined4 param_1);
byte FUN_10001057(int param_1);
byte FUN_1000108b(int param_1);
void FUN_100010bf(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10001160(undefined4 param_1);
void FUN_10001170(byte *param_1,undefined4 param_2);
void FUN_10001222(void);
void FUN_1000126e(void);
void FUN_1000133f(void);
void FUN_1000154b(void);
void FUN_1000159e(void);
void FUN_10001708(void);
void FUN_100017e1(void);
void FUN_10001813(void);
void FUN_10001870(void);
void FUN_1000188b(void);
void FUN_10001929(void);
int FUN_10001960(short *param_1);
void FUN_10001a96(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10001b3e(void);
void FUN_10001b4a(void);
undefined8 FUN_10001b9f(void);
void FUN_10001c38(void);
undefined8 FUN_10001ca8(void);
void FUN_10002041(void);
void FUN_100021c4(undefined4 param_1,int param_2);
void FUN_10002235(SOCKET param_1);
void FUN_1000239b(int param_1);
void FUN_100023c9(int param_1);
undefined4 FUN_10002402(LPCVOID param_1);
undefined8 FUN_10002430(undefined4 param_1);
undefined8 FUN_10002459(undefined4 param_1);
undefined4 FUN_1000247a(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 FUN_10002509(int *param_1,undefined4 param_2,int param_3);
undefined4 FUN_100025bd(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 FUN_1000264c(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 FUN_100026a6(int *param_1,undefined4 param_2,int param_3);
undefined4 FUN_10002731(undefined4 *param_1,undefined4 param_2,int param_3);
undefined4 FUN_100027ef(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_10002992(void);
void FUN_10002bdd(void);
void FUN_10002c01(int param_1);
undefined4 entry(undefined4 param_1,int param_2);
void FUN_10002c6e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10002c87(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void EcInit(undefined4 param_1);
void FUN_10002d08(void);
void FUN_10002d16(int param_1);
void FUN_10002d46(undefined4 param_1);
void FUN_1000307e(HWND param_1,int param_2,undefined4 param_3);
void FUN_100030d6(void);
undefined4 FUN_10003146(HWND param_1,int param_2,uint param_3,undefined4 param_4);
void FUN_10006b62(void);
undefined4 FUN_10006bce(HWND param_1,int param_2,undefined4 param_3,uint param_4);
void FUN_10006c65(int param_1,WPARAM param_2);
void FUN_10006cd0(int param_1,WPARAM param_2);
undefined4 FUN_10006d3b(HWND param_1,int param_2,uint param_3,HWND param_4);
undefined4 FUN_10007360(HWND param_1,int param_2,uint param_3,HWND param_4);
void FUN_10007a08(void);
undefined4 FUN_10007b55(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10007ca5(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10007ec4(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1000802f(HWND param_1,int param_2,int param_3,undefined4 param_4);
void FUN_10008152(void);
void FUN_10008284(void);
undefined4 FUN_100083b6(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_100086b3(HWND param_1,int param_2,int param_3,undefined4 param_4);
void FUN_10008a7e(void);
undefined4 FUN_10008e41(undefined4 param_1,int *param_2);
undefined4 FUN_1000904c(undefined4 param_1,int param_2,int param_3,int param_4);
int FUN_100092b0(void);
void FUN_1000936f(int *param_1);
undefined8 FUN_100093a3(int param_1);
void FUN_10009452(void);
undefined8 FUN_10009489(int param_1);
void FUN_1000954e(undefined4 param_1);
undefined4 FUN_1000d287(byte *param_1);
longlong FUN_1000d2da(uint param_1,int param_2,uint param_3);
longlong FUN_1000d9b8(int param_1,int param_2,uint param_3);
undefined2 * FUN_1000e100(int param_1,int param_2,uint param_3);
uint FUN_1000e6b9(uint param_1,uint param_2,uint param_3);
uint FUN_1000f40a(int param_1,int param_2,uint param_3);
uint FUN_1000ffb0(int param_1,int param_2,uint param_3);
uint FUN_10010af0(void);
void FUN_100115bc(int param_1,int param_2,int param_3,int param_4);
undefined4 FUN_10011678(int param_1,int param_2,int param_3);
undefined4 FUN_100117ef(int param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 FUN_1001193c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined4 FUN_10011a89(ushort param_1,ushort param_2);
uint FUN_10011af2(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined4 FUN_1001242d(undefined4 param_1,undefined4 param_2,int param_3);
void decodeSparseBotzin(byte *param_1,undefined4 param_2,int *param_3);
uint * FUN_10012827(int *param_1,int param_2,int param_3);
void FUN_10012aae(void);
int FUN_10012d79(int param_1,int param_2);
undefined4 FUN_10012e3d(int param_1);
int * FUN_10012edb(void);
void FUN_10013e4d(int param_1);
void FUN_10013f16(void);
void FUN_100143ba(int param_1,int param_2);
void FUN_1001451b(int param_1);
void FUN_100147eb(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10014825(void);
void FUN_100148ba(int param_1);
void FUN_10014927(int param_1);
void FUN_10014993(int param_1);
void FUN_10014a0d(int param_1);
void FUN_10014a6e(int param_1);
void FUN_10014aed(void);
void FUN_10014afb(int param_1);
void FUN_10014b75(int param_1);
void FUN_10014bef(int param_1);
void FUN_10014c69(int param_1);
void FUN_10014d75(int param_1);
void FUN_10014e64(int param_1);
void FUN_10014f10(int *param_1);
void FUN_100151f4(undefined4 param_1);
void FUN_10015204(int param_1,int param_2);
void FUN_10015228(LPSTR param_1,int param_2);
void FUN_10015267(void);
int FUN_1001561d(byte *param_1,uint param_2,undefined4 *param_3);
void FUN_100156ce(char *param_1);
void FUN_10015843(char *param_1,int param_2);
void FUN_100159d8(void);
void FUN_100159fd(char *param_1);
void FUN_10015b79(char *param_1,int param_2);
void FUN_10015da3(void);
void FUN_10015fdc(LPSTR param_1,uint param_2);
void FUN_10016073(LPSTR param_1,ushort *param_2);
void FUN_100160d6(void);
void FUN_100162e3(void);
void FUN_100163d8(void);
void FUN_10016438(char *param_1,int param_2);
void FUN_100167eb(LPCSTR param_1);
void FUN_1001686c(void);
void FUN_100188bf(HWND param_1,int param_2,UINT param_3,WPARAM param_4,LPARAM param_5);
void FUN_100188f9(void);
void FUN_10018d8a(void);
void FUN_100193a1(void);
int FUN_10019751(HWND param_1,int param_2,uint param_3,undefined4 param_4);
LRESULT FUN_1001a715(HWND param_1,int param_2,uint param_3,undefined4 param_4);
void FUN_1001b6df(void);
void FUN_1001b815(void);
int FUN_1001b89b(char *param_1);
LRESULT FUN_1001b8be(HWND param_1,int param_2,HDC param_3,HWND param_4);
void FUN_1001ccb1(void);
void FUN_1001cecf(void);
void FUN_1001cf36(LPCSTR param_1);
undefined4 FUN_1001d151(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1001d2e0(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1001d5fd(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1001df05(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1001e1d9(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1001e313(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_1001e3e5(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_1001e7c3(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1001eb33(HWND param_1,int param_2,int param_3,undefined4 param_4);
undefined4 FUN_1001ef0c(HWND param_1,int param_2,int param_3,undefined4 param_4);
void FUN_1001f57d(HWND param_1,undefined4 param_2,undefined4 param_3);
void FUN_1001f5bd(void);
void FUN_100200ff(void);
void FUN_100201d3(void);
void FUN_1002040d(void);
byte * FUN_100204af(void);
void FUN_100205bf(void);
void FUN_10020905(undefined4 param_1,undefined4 param_2);
void FUN_10020950(int param_1,ushort *param_2);
void FUN_100209d5(void);
void FUN_10020ba4(undefined4 param_1,int param_2);
void FUN_10020c48(void);
undefined4 FUN_10020c8b(undefined4 param_1,undefined4 param_2,int param_3);
undefined4 FUN_10020d0b(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_10020d53(void);
void FUN_10021047(void);
void FUN_100212a3(undefined4 param_1,ushort *param_2);
void FUN_100212d7(undefined4 param_1,ushort *param_2);
undefined4 FUN_1002131f(void);
void FUN_10021c2d(undefined4 param_1,uint param_2,undefined4 param_3);
void FUN_10021e4e(void);
byte FUN_10021ed2(int param_1);
byte FUN_10021f06(int param_1);
undefined4 FUN_10021f3a(void);
void FUN_10021f6c(void);
void FUN_10022566(void);
void FUN_100227bd(void);
int FUN_1002355e(void);
undefined4 FUN_100235e8(int param_1);
void FUN_10023797(void);
undefined4 FUN_100237a4(int param_1);
undefined1 * FUN_10023861(void);
void FUN_1002387b(void);
void FUN_10023893(void);
void FUN_10023a45(void);
void FUN_10023a8f(void);
void FUN_10023e42(void);
void FUN_10023ea2(void);
void FUN_100240b1(void);
int FUN_10024209(char *param_1);
void FUN_100244e1(void);
void FUN_100247f7(void);
void FUN_1002489c(void);
void FUN_1002492d(void);
undefined2 FUN_10024cae(undefined4 param_1);
void FUN_10024d66(void);
void FUN_10024f39(void);
void FUN_10024fae(void);
int FUN_10024feb(void);
undefined8 FUN_10025172(undefined4 param_1);
undefined8 FUN_100252ba(undefined4 param_1);
undefined8 FUN_100253d9(undefined4 param_1);
undefined4 FUN_100254f8(undefined4 param_1,undefined4 param_2);
void FUN_10025646(undefined1 *param_1,uint param_2);
void FUN_1002583e(undefined4 param_1,undefined1 *param_2,int param_3);
undefined8 FUN_1002592f(void);
undefined4 * FUN_10025a79(void);
undefined4 FUN_10025f0c(void);
undefined8 FUN_10026340(void);
void FUN_10026571(void);
void FUN_100265d3(int param_1,int param_2,int param_3);
undefined4 FUN_100266b1(void);
void FUN_10026702(void);
void FUN_10026724(void);
void FUN_10026a7f(void);
undefined8 FUN_10026adf(void);
void FUN_10028970(void);
void FUN_100289ee(void);
int FUN_10028cf5(void);
void FUN_10028d0c(void);
void FUN_10029010(void);
void FUN_1002994d(void);
void FUN_1002997f(void);
void FUN_10029a61(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,uint param_7);
void FUN_10029b3b(void);
void FUN_10029d3e(undefined4 param_1);
undefined8 FUN_10029d4e(int param_1);
void FUN_1002a092(void);
void FUN_1002a311(void);
void FUN_1002a433(void);
longlong FUN_1002a9b0(int param_1);
undefined8 FUN_1002ad54(undefined1 *param_1);
void FUN_1002ad79(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1002adac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_1002ade7(ushort *param_1);
void copyBuffer(undefined1 *param_1,undefined1 *param_2,int param_3);
void zeroBuffer(undefined1 *param_1,int param_2);
longlong FUN_1002ae92(int param_1,uint param_2,int *param_3);
void FUN_1002af42(void);
void FUN_1002af69(void);
void FUN_1002b02b(int param_1);
void FUN_1002b09e(void);
void FUN_1002bc68(void);
longlong FUN_1002be32(uint param_1);
int FUN_1002bed7(void);
void FUN_1002bf38(void);
void FUN_1002bfd7(void);
undefined4 FUN_1002c077(void);
undefined4 FUN_1002c0cb(undefined4 param_1);
void FUN_1002c1b6(byte *param_1,undefined4 param_2);
undefined4 FUN_1002c228(void);
void FUN_1002ff87(void);
undefined4 FUN_1002ffa3(void);
int FUN_1002fff4(void);
void FUN_1003004d(void);
undefined8 FUN_100300ce(void);
void FUN_10030225(void);
undefined4 FUN_10030326(void);
undefined4 FUN_100303be(undefined4 param_1);
void FUN_10030442(byte *param_1,int param_2,undefined4 param_3);
undefined4 FUN_10036bb2(void);
int FUN_10036c87(void);
undefined4 FUN_10036daf(void);
void FUN_10036e69(void);
void FUN_10036eb6(void);
int FUN_10037100(void);
undefined4 FUN_100371fd(void);
undefined4 FUN_10037384(void);
undefined4 FUN_100374ba(void);
void FUN_100375d9(void);
int FUN_10037694(void);
int FUN_100377cb(void);
void FUN_10037973(void);
void FUN_100379b6(void);
void FUN_10037a0f(void);
undefined4 FUN_10037a68(undefined4 param_1,undefined4 param_2);
void FUN_10037b0c(void);
undefined8 FUN_10037c72(void);
int FUN_10037f84(void);
int FUN_10037fa1(void);
undefined8 FUN_100380dd(void);
void FUN_10038449(void);
undefined4 FUN_100384fb(void);
void FUN_1003867e(void);
void FUN_10038725(void);
void FUN_100388ae(void);
void FUN_10038d20(void);
void FUN_10038d3c(void);
void FUN_10038e29(undefined4 param_1,undefined4 param_2);
int FUN_10038eb3(byte *param_1,uint param_2,int param_3);
undefined1 * FUN_1003919a(void);
undefined4 * FUN_1003927b(void);
void FUN_1003933a(LPCVOID param_1);
void FUN_10039357(LPVOID param_1);
void FUN_10039374(LPCVOID param_1);
void FUN_100393c2(undefined4 param_1,undefined2 param_2);
void FUN_10039413(undefined4 param_1);
void FUN_1003945d(undefined4 param_1);
void FUN_100394a7(void);
void FUN_1003974b(int param_1,undefined4 param_2);
void FUN_100397a0(int param_1,int param_2);
void FUN_10039951(uint param_1,undefined1 *param_2);
int * FUN_1003997e(int param_1);
undefined1 * FUN_100399af(undefined4 param_1);
undefined1 * FUN_100399f0(ushort param_1,ushort param_2,byte param_3,undefined4 param_4);
undefined1 * FUN_10039a52(ushort param_1,ushort param_2,byte param_3);
undefined1 * FUN_10039ab9(ushort param_1,ushort param_2,byte param_3);
HWND FUN_10039b62(void);
void FUN_10039bbb(void);
void FUN_10039c81(void);
void FUN_10039d8a(void);
void FUN_10039f02(int *param_1,int *param_2,int *param_3);
void FUN_10039f67(int *param_1,int *param_2,int *param_3);
void FUN_10039fc8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int * FUN_10039fee(int *param_1);
void FUN_1003a03f(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1003a065(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1003a0f8(int param_1,int param_2,undefined4 param_3);
void FUN_1003a148(undefined4 param_1,undefined4 param_2,int param_3);
int FUN_1003a176(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_1003a1aa(int param_1,int param_2,int param_3);
undefined8 FUN_1003a1e5(void);
undefined4 FUN_1003a320(undefined4 param_1);
undefined4 FUN_1003a3da(undefined4 param_1);
undefined4 FUN_1003a494(undefined4 param_1);
undefined4 FUN_1003a550(undefined4 param_1);
void FUN_1003a60a(int *param_1,uint param_2);
int FUN_1003b0f0(int param_1);
void FUN_1003b127(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1003b159(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4);
void FUN_1003b22b(void);
void FUN_1003ba2f(void);
void FUN_1003bb22(void);
int FUN_1003bbc1(int param_1,uint param_2);
undefined4 FUN_1003bc09(int param_1);
void FUN_1003bc54(void);
uint FUN_1003bec5(void);
int FUN_1003bfec(void);
uint FUN_1003c059(short param_1,short param_2,char param_3,int param_4);
int FUN_1003c23e(int param_1);
short * FUN_1003c291(short *param_1);
undefined4 FUN_1003c2e3(short param_1,short param_2,char param_3);
byte FUN_1003c36f(int param_1);
byte FUN_1003c3fc(int param_1);
void FUN_1003c430(int param_1);
byte FUN_1003c462(int param_1);
void FUN_1003c496(int param_1);
void FUN_1003c4c8(int param_1);
undefined4 FUN_1003c4fa(int param_1);
byte FUN_1003c52a(int param_1);
undefined4 FUN_1003c55d(int param_1,int param_2,int param_3,int param_4,int param_5);
undefined4 FUN_1003c718(int param_1,int param_2,int param_3,int param_4,int param_5);
int FUN_1003c87c(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1003c8d8(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1003c936(int param_1,int param_2);
undefined4 FUN_1003c9bd(int param_1,int param_2);
void FUN_1003ca03(void);
void FUN_1003d1b7(void);
void FUN_1003d60f(void);
undefined4 FUN_1003d730(uint *param_1,uint param_2,uint param_3);
void FUN_1003d770(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5);
void FUN_1003d844(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1003d89c(LPCSTR param_1);
void FUN_1003d99f(void);
void FUN_1003e2a0(void);
void FUN_1003e5f2(int param_1,int param_2,int param_3,uint *param_4,int param_5,undefined4 param_6,int param_7);
void FUN_1003e7aa(void);
void FUN_1003e983(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1003ea34(int param_1);
undefined4 FUN_1003ec1e(int *param_1);
void FUN_1003ecf9(void);
undefined4 FUN_1003f393(void);
void FUN_1003f3a0(void);
void FUN_1003f5d7(void);
void FUN_1003ffdf(void);
uint FUN_100401a9(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_100401f7(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1004024a(uint *param_1);
void FUN_10040272(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_10040318(int param_1,int param_2);
HWND FindWindowExA(HWND hWndParent,HWND hWndChildAfter,LPCSTR lpszClass,LPCSTR lpszWindow);
DWORD GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId);
LRESULT SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
int __cdecl wsprintfA(LPSTR param_1,LPCSTR param_2,...);
BOOL CloseClipboard(void);
HWND CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam);
BOOL DestroyWindow(HWND hWnd);
int DlgDirListA(HWND hDlg,LPSTR lpPathSpec,int nIDListBox,int nIDStaticPath,UINT uFileType);
BOOL EmptyClipboard(void);
BOOL EnableWindow(HWND hWnd,BOOL bEnable);
BOOL FlashWindowEx(PFLASHWINFO pfwi);
SHORT GetAsyncKeyState(int vKey);
BOOL GetClientRect(HWND hWnd,LPRECT lpRect);
HANDLE GetClipboardData(UINT uFormat);
HWND GetDlgItem(HWND hDlg,int nIDDlgItem);
HWND GetForegroundWindow(void);
HDC GetWindowDC(HWND hWnd);
BOOL GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl);
BOOL GetWindowRect(HWND hWnd,LPRECT lpRect);
BOOL InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase);
BOOL IsIconic(HWND hWnd);
BOOL IsWindow(HWND hWnd);
HCURSOR LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName);
HICON LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName);
BOOL MessageBeep(UINT uType);
int MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
BOOL MoveWindow(HWND hWnd,int X,int Y,int nWidth,int nHeight,BOOL bRepaint);
BOOL OpenClipboard(HWND hWndNewOwner);
void PostQuitMessage(int nExitCode);
BOOL RegisterHotKey(HWND hWnd,int id,UINT fsModifiers,UINT vk);
int ReleaseDC(HWND hWnd,HDC hDC);
LRESULT SendDlgItemMessageA(HWND hDlg,int nIDDlgItem,UINT Msg,WPARAM wParam,LPARAM lParam);
HANDLE SetClipboardData(UINT uFormat,HANDLE hMem);
HWND SetFocus(HWND hWnd);
int SetScrollInfo(HWND hwnd,int nBar,LPCSCROLLINFO lpsi,BOOL redraw);
BOOL SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags);
BOOL SetWindowTextA(HWND hWnd,LPCSTR lpString);
BOOL ShowWindow(HWND hWnd,int nCmdShow);
BOOL UnregisterHotKey(HWND hWnd,int id);
HANDLE CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,LPDWORD lpThreadId);
void ExitThread(DWORD dwExitCode);
HANDLE GetCurrentProcess(void);
DWORD GetCurrentProcessId(void);
DWORD GetTickCount(void);
HGLOBAL GlobalAlloc(UINT uFlags,SIZE_T dwBytes);
LPVOID GlobalLock(HGLOBAL hMem);
void OutputDebugStringA(LPCSTR lpOutputString);
BOOL ReadProcessMemory(HANDLE hProcess,LPCVOID lpBaseAddress,LPVOID lpBuffer,SIZE_T nSize,SIZE_T *lpNumberOfBytesRead);
void Sleep(DWORD dwMilliseconds);
BOOL VirtualProtect(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect);
BOOL WriteProcessMemory(HANDLE hProcess,LPVOID lpBaseAddress,LPCVOID lpBuffer,SIZE_T nSize,SIZE_T *lpNumberOfBytesWritten);
void lstrlen(void);
BOOL CloseHandle(HANDLE hObject);
BOOL CreateDirectoryA(LPCSTR lpPathName,LPSECURITY_ATTRIBUTES lpSecurityAttributes);
HANDLE CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
HANDLE CreateFileMappingA(HANDLE hFile,LPSECURITY_ATTRIBUTES lpFileMappingAttributes,DWORD flProtect,DWORD dwMaximumSizeHigh,DWORD dwMaximumSizeLow,LPCSTR lpName);
BOOL DeleteFileA(LPCSTR lpFileName);
void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void ExitProcess(UINT uExitCode);
LPSTR GetCommandLineA(void);
int GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,int cchDate);
DWORD GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh);
DWORD GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize);
DWORD GetPrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize,LPCSTR lpFileName);
HANDLE GetProcessHeap(void);
BOOL GetThreadContext(HANDLE hThread,LPCONTEXT lpContext);
int GetTimeFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpTime,LPCSTR lpFormat,LPSTR lpTimeStr,int cchTime);
HGLOBAL GlobalFree(HGLOBAL hMem);
BOOL GlobalUnlock(HGLOBAL hMem);
LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes);
BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem);
void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
HLOCAL LocalAlloc(UINT uFlags,SIZE_T uBytes);
HLOCAL LocalFree(HLOCAL hMem);
LPVOID MapViewOfFile(HANDLE hFileMappingObject,DWORD dwDesiredAccess,DWORD dwFileOffsetHigh,DWORD dwFileOffsetLow,SIZE_T dwNumberOfBytesToMap);
BOOL QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount);
BOOL QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency);
BOOL ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,LPOVERLAPPED lpOverlapped);
DWORD ResumeThread(HANDLE hThread);
void RtlZeroMemory(void);
DWORD SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod);
BOOL SetThreadContext(HANDLE hThread,CONTEXT *lpContext);
DWORD SuspendThread(HANDLE hThread);
BOOL TerminateThread(HANDLE hThread,DWORD dwExitCode);
DWORD TlsAlloc(void);
LPVOID TlsGetValue(DWORD dwTlsIndex);
BOOL TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue);
BOOL UnmapViewOfFile(LPCVOID lpBaseAddress);
BOOL WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped);
BOOL WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName);
void lstrcat(void);
void lstrcmp(void);
void lstrcmpi(void);
void lstrcpy(void);
void lstrcpyn(void);
int WSACleanup(void);
int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData);
SOCKET accept(SOCKET s,sockaddr *addr,int *addrlen);
int bind(SOCKET s,sockaddr *addr,int namelen);
int closesocket(SOCKET s);
hostent * gethostbyname(char *name);
int getsockname(SOCKET s,sockaddr *name,int *namelen);
u_short htons(u_short hostshort);
ulong inet_addr(char *cp);
int listen(SOCKET s,int backlog);
int recv(SOCKET s,char *buf,int len,int flags);
int send(SOCKET s,char *buf,int len,int flags);
int shutdown(SOCKET s,int how);
SOCKET socket(int af,int type,int protocol);
int connect(SOCKET s,sockaddr *name,int namelen);
int getpeername(SOCKET s,sockaddr *name,int *namelen);
char * inet_ntoa(in_addr in);
uint FUN_10040900(char *param_1);
void FUN_10040940(uint param_1,char *param_2);
void FUN_100409a8(uint param_1,int param_2);
void FUN_100409e0(undefined4 *param_1,uint param_2,undefined4 param_3);
uint FUN_10040a30(uint param_1);
void FUN_10040a76(undefined4 param_1);
MMRESULT mmioAscend(HMMIO hmmio,LPMMCKINFO pmmcki,UINT fuAscend);
MMRESULT mmioClose(HMMIO hmmio,UINT fuClose);
MMRESULT mmioDescend(HMMIO hmmio,LPMMCKINFO pmmcki,MMCKINFO *pmmckiParent,UINT fuDescend);
HMMIO mmioOpenA(LPSTR pszFileName,LPMMIOINFO pmmioinfo,DWORD fdwOpen);
LONG mmioRead(HMMIO hmmio,HPSTR pch,LONG cch);
void DragQueryFile(void);
void InitCommonControls(void);
BOOL ChooseColorA(LPCHOOSECOLORA param_1);
BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1);
BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1);
BOOL BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop);
HBITMAP CreateCompatibleBitmap(HDC hdc,int cx,int cy);
HDC CreateCompatibleDC(HDC hdc);
HFONT CreateFontA(int cHeight,int cWidth,int cEscapement,int cOrientation,int cWeight,DWORD bItalic,DWORD bUnderline,DWORD bStrikeOut,DWORD iCharSet,DWORD iOutPrecision,DWORD iClipPrecision,DWORD iQuality,DWORD iPitchAndFamily,LPCSTR pszFaceName);
HBRUSH CreateSolidBrush(COLORREF color);
BOOL DeleteObject(HGDIOBJ ho);
int GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage);
HGDIOBJ SelectObject(HDC hdc,HGDIOBJ h);
COLORREF SetBkColor(HDC hdc,COLORREF color);
int SetBkMode(HDC hdc,int mode);
COLORREF SetTextColor(HDC hdc,COLORREF color);
void DirectSoundCreate(void);
int FUN_102eb000(undefined4 param_1,int param_2,undefined1 param_3);
int FUN_102eb070(byte param_1);
uint FUN_102eb0b0(char param_1);
void FUN_102eb110(uint param_1,char param_2);
void FUN_102eb160(void);
bool FUN_102eb190(void);
void FUN_102eb1d0(void);
void FUN_102eb200(void);
void FUN_102eb240(char param_1);
void FUN_102eb280(void);
void FUN_102eb2b0(void);
undefined4 FUN_102eb300(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_102eb340(int param_1,int param_2,int param_3,undefined4 param_4);
void FUN_102eb5b0(int param_1,uint *param_2,uint *param_3);
int FUN_102eb670(int param_1,uint param_2);
void FUN_102eb6d0(void *param_1);
void FUN_102eb6f0(undefined4 param_1,uint param_2,uint param_3);
void FUN_102eb750(undefined4 param_1,uint param_2,uint param_3);
void FUN_102eb7b0(int param_1,uint *param_2,uint *param_3);
uint FUN_102eb870(void);
void FUN_102eb8d0(void);
uint FUN_102eb8f0(int param_1);
uint FUN_102eb940(int param_1,int param_2);
void FUN_102eb9c0(short param_1);
int FUN_102eba10(char *param_1,undefined1 *param_2,size_t param_3,int param_4);
size_t FUN_102ebca0(char *param_1,byte *param_2,size_t param_3,int param_4);
bool FUN_102ebe90(byte *param_1,size_t *param_2,int param_3);
void FUN_102ec090(undefined1 *param_1,int param_2,char param_3);
int FUN_102ec100(void);
bool FUN_102ec130(uint param_1,char param_2);
void FUN_102ec1f0(void);
void FUN_102ec230(void);
void FUN_102ec270(void);
uint FUN_102ec2e0(uint param_1,uint param_2);
undefined1 FUN_102ec380(void *param_1,size_t *param_2,int param_3);
uint FUN_102ec590(int param_1);
int FUN_102ec640(int param_1,uint param_2);
void FUN_102ec6a0(int *param_1,uint *param_2,uint param_3,int param_4);
void FUN_102ec8b0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_102ec930(undefined4 param_1,undefined4 param_2,uint param_3);
void FUN_102ec950(undefined4 param_1,undefined4 param_2);
void FUN_102ec980(void);
void FUN_102ec9a0(void);
undefined4 FUN_102ec9c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
char FUN_102eca50(char *param_1,undefined1 *param_2,size_t *param_3);
void FUN_102ecc50(int param_1,uint *param_2,uint *param_3);
void FUN_102ecd50(char *param_1,char *param_2,int param_3);
bool FUN_102ece60(void *param_1,size_t *param_2,undefined4 param_3);
bool FUN_102ecee0(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
void FUN_102ecf80(byte *param_1,undefined1 *param_2,int param_3);
void FUN_102ed090(int *param_1,byte *param_2,uint *param_3);
bool FUN_102ed2e0(char *param_1,byte *param_2,size_t *param_3,int param_4);
bool FUN_102ed440(void *param_1,size_t *param_2,undefined4 param_3);
uint FUN_102ed4b0(byte *param_1,uint param_2);
int FUN_102ed560(void *param_1,void *param_2);
undefined4 FUN_102ed640(int param_1,int param_2);
void FUN_102ed6b0(int param_1,uint param_2,uint param_3);
void FUN_102ed940(int param_1,int param_2,int param_3);
void FUN_102edcb0(int param_1,int param_2,int param_3);
void FUN_102edf10(undefined4 param_1,undefined4 param_2,undefined4 param_3);
uint FUN_102edf80(byte *param_1);
void FUN_102edfe0(int param_1,int param_2);
void FUN_102ee060(undefined4 param_1,undefined4 param_2);
int FUN_102ee080(void);
void FUN_102ee0a0(void);
bool FUN_102ee0d0(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
void FUN_102ee140(undefined1 *param_1,int param_2,undefined4 param_3);
void FUN_102ee1e0(int param_1);
void FUN_102ee2e0(int param_1,int param_2);
void FUN_102ee3a0(int param_1,int param_2);
void FUN_102ee480(int param_1);
void FUN_102ee700(int param_1,int param_2,int param_3);
void FUN_102ee8a0(int param_1,int param_2);
bool FUN_102ee9d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
int FUN_102eea20(undefined4 param_1,undefined1 *param_2,int param_3);
int FUN_102eeab0(int param_1);
undefined1 FUN_102eeb40(void);
int FUN_102eeb60(void);
undefined4 FUN_102eebb0(uint param_1);
uint FUN_102eed50(undefined4 param_1);
undefined4 FUN_102eef00(uint param_1);
uint FUN_102ef020(undefined4 param_1);
uint FUN_102ef140(uint param_1);
uint FUN_102ef270(uint param_1);
undefined4 FUN_102ef3a0(uint param_1);
uint FUN_102ef460(undefined4 param_1);
undefined4 FUN_102ef530(uint param_1);
uint FUN_102ef640(undefined4 param_1);
uint FUN_102ef750(uint param_1);
uint FUN_102ef8d0(uint param_1);
undefined4 FUN_102efa50(uint param_1);
uint FUN_102efba0(undefined4 param_1);
undefined4 FUN_102efcf0(uint param_1);
uint FUN_102efd90(undefined4 param_1);
uint FUN_102efe30(uint param_1);
uint FUN_102effb0(uint param_1);
undefined4 FUN_102f0130(uint param_1);
uint FUN_102f02b0(undefined4 param_1);
uint FUN_102f0430(uint param_1);
uint FUN_102f04d0(uint param_1);
undefined4 FUN_102f0570(uint param_1);
uint FUN_102f0650(undefined4 param_1);
undefined4 FUN_102f0730(uint param_1);
uint FUN_102f07c0(undefined4 param_1);
undefined4 FUN_102f0850(uint param_1);
uint FUN_102f0940(undefined4 param_1);
undefined4 FUN_102f0a30(uint param_1);
uint FUN_102f0ba0(undefined4 param_1);
undefined4 FUN_102f0d10(uint param_1);
uint FUN_102f0dc0(undefined4 param_1);
undefined4 FUN_102f0e70(uint param_1);
uint FUN_102f0f30(undefined4 param_1);
uint FUN_102f0ff0(uint param_1);
uint FUN_102f1120(uint param_1);
undefined4 FUN_102f1250(uint param_1);
uint FUN_102f1390(undefined4 param_1);
uint FUN_102f14d0(uint param_1);
uint FUN_102f1670(uint param_1);
undefined4 FUN_102f1810(uint param_1);
uint FUN_102f1910(undefined4 param_1);
undefined4 FUN_102f1a10(uint param_1);
uint FUN_102f1b90(undefined4 param_1);
uint FUN_102f1d10(uint param_1);
uint FUN_102f1e90(uint param_1);
uint FUN_102f2010(uint param_1);
uint FUN_102f2170(uint param_1);
uint FUN_102f22d0(uint param_1);
uint FUN_102f2420(uint param_1);
undefined4 FUN_102f2570(uint param_1);
uint FUN_102f2690(undefined4 param_1);
undefined4 FUN_102f27b0(uint param_1);
uint FUN_102f2940(undefined4 param_1);
undefined4 FUN_102f2ad0(uint param_1);
uint FUN_102f2b60(undefined4 param_1);
uint FUN_102f2bf0(uint param_1,int param_2);
uint FUN_102f2c20(uint param_1,int param_2,byte param_3,int param_4);
uint FUN_102f2ca0(uint param_1,byte param_2,byte param_3);
uint FUN_102f2d00(uint param_1,int param_2,byte param_3);
undefined4 FUN_102f2d90(void);
bool FUN_102f2da0(uint param_1);
uint FUN_102f2dc0(uint param_1);
undefined4 FUN_102f2dd0(uint param_1);
bool FUN_102f2e20(uint param_1);
bool FUN_102f2e50(uint param_1);
bool FUN_102f2e70(uint param_1);
bool FUN_102f2e90(uint param_1);
bool FUN_102f2eb0(uint param_1);
bool FUN_102f2ed0(uint param_1);
bool FUN_102f2ef0(uint param_1);
undefined4 FUN_102f2f10(uint param_1);
bool FUN_102f2f60(uint param_1);
bool FUN_102f2f90(uint param_1);
bool FUN_102f2fb0(uint param_1);
bool FUN_102f2fd0(uint param_1);
bool FUN_102f2ff0(uint param_1);
bool FUN_102f3010(undefined4 param_1,int param_2);
void FUN_102f3020(undefined4 param_1);
void FUN_102f30b0(undefined4 param_1);
void FUN_102f3180(void);
void FUN_102f3370(undefined4 param_1);
void FUN_102f3400(undefined4 param_1);
void FUN_102f34a0(undefined4 param_1);
void FUN_102f3550(undefined4 param_1);
void FUN_102f3620(undefined4 param_1);
void FUN_102f36d0(undefined4 param_1,int param_2);
void FUN_102f3790(undefined4 param_1);
void FUN_102f3860(undefined4 param_1,int param_2);
void FUN_102f38e0(undefined4 param_1);
void FUN_102f3990(undefined4 param_1);
void FUN_102f3a40(undefined4 param_1);
void FUN_102f3ad0(undefined4 param_1);
void FUN_102f3b80(undefined4 param_1);
void FUN_102f3c20(undefined4 param_1);
void FUN_102f3d00(undefined4 param_1);
void FUN_102f3e60(undefined4 param_1);
void FUN_102f3f10(void);
void FUN_102f4000(undefined4 param_1);
void FUN_102f4090(undefined4 param_1);
void FUN_102f4150(undefined4 param_1);
void FUN_102f4250(undefined4 param_1);
void FUN_102f4300(undefined4 param_1);
void FUN_102f4410(undefined4 param_1);
void FUN_102f45d0(void);
void FUN_102f47b0(undefined4 param_1);
void FUN_102f4870(void);
void FUN_102f4960(undefined4 param_1);
void FUN_102f4a40(undefined4 param_1);
void FUN_102f4ae0(undefined4 param_1);
void FUN_102f4b60(undefined4 param_1);
void FUN_102f4c40(undefined4 param_1);
void FUN_102f4cd0(undefined4 param_1);
void FUN_102f4d90(void);
void FUN_102f4f80(undefined4 param_1);
void FUN_102f5020(undefined4 param_1);
void FUN_102f50e0(undefined4 param_1);
void FUN_102f5260(undefined4 param_1);
void FUN_102f5330(undefined4 param_1);
void FUN_102f53e0(undefined4 param_1);
void FUN_102f54a0(void);
void FUN_102f5530(undefined4 param_1);
void FUN_102f55f0(undefined4 param_1);
void FUN_102f56a0(void);
void FUN_102f5720(undefined4 param_1);
void FUN_102f5810(void);
void FUN_102f5a00(undefined4 param_1);
void FUN_102f5ae0(undefined4 param_1);
void FUN_102f5bc0(undefined4 param_1);
void FUN_102f5c70(undefined4 param_1);
void FUN_102f5d90(undefined4 param_1);
void FUN_102f5e20(undefined4 param_1);
void FUN_102f5f00(undefined4 param_1);
void FUN_102f5f90(undefined4 param_1);
void FUN_102f6070(undefined4 param_1);
void FUN_102f6110(undefined4 param_1);
void FUN_102f62a0(undefined4 param_1);
void FUN_102f6350(undefined4 param_1);
void FUN_102f63f0(undefined4 param_1);
void FUN_102f64c0(undefined4 param_1);
void FUN_102f6650(undefined4 param_1);
void FUN_102f66f0(undefined4 param_1);
void FUN_102f67a0(undefined4 param_1);
void FUN_102f6850(undefined4 param_1);
void FUN_102f68f0(undefined4 param_1);
void FUN_102f6980(undefined4 param_1);
void FUN_102f6a90(undefined4 param_1);
void FUN_102f6b90(undefined4 param_1);
void FUN_102f6c50(undefined4 param_1);
void FUN_102f6d20(void);
void FUN_102f6de0(undefined4 param_1);
void FUN_102f6e80(undefined4 param_1);
void FUN_102f6f30(undefined4 param_1);
void FUN_102f6fd0(undefined4 param_1);
void FUN_102f7130(undefined4 param_1);
void FUN_102f71e0(undefined4 param_1);
void FUN_102f72b0(undefined4 param_1);
void FUN_102f7460(undefined4 param_1);
void FUN_102f7500(undefined4 param_1);
void FUN_102f75b0(undefined4 param_1);
void FUN_102f7650(undefined4 param_1);
void FUN_102f7740(undefined4 param_1);
void FUN_102f77e0(undefined4 param_1);
void FUN_102f78f0(undefined4 param_1);
void FUN_102f79f0(undefined4 param_1,int param_2);
void FUN_102f7a80(undefined4 param_1);
void FUN_102f7b30(undefined4 param_1,int param_2);
void FUN_102f7bc0(undefined4 param_1);
void FUN_102f7c60(undefined4 param_1);
void FUN_102f7d40(undefined4 param_1);
void FUN_102f7df0(undefined4 param_1);
void FUN_102f7ec0(undefined4 param_1);
void FUN_102f7fa0(undefined4 param_1);
void FUN_102f8070(undefined4 param_1);
void FUN_102f8210(undefined4 param_1);
void FUN_102f83a0(undefined4 param_1,int param_2);
void FUN_102f8460(undefined4 param_1);
void FUN_102f8560(undefined4 param_1);
void FUN_102f8600(undefined4 param_1);
void FUN_102f8700(undefined4 param_1);
void FUN_102f8790(undefined4 param_1);
void FUN_102f8820(undefined4 param_1);
void FUN_102f88d0(undefined4 param_1);
void FUN_102f89b0(undefined4 param_1);
void FUN_102f8a60(undefined4 param_1);
void FUN_102f8b10(undefined4 param_1);
void FUN_102f8bd0(undefined4 param_1);
void FUN_102f8c70(undefined4 param_1);
void FUN_102f8dd0(undefined4 param_1);
void FUN_102f8f80(undefined4 param_1);
void FUN_102f9010(undefined4 param_1);
void FUN_102f90f0(undefined4 param_1);
void FUN_102f91a0(undefined4 param_1);
void FUN_102f9240(undefined4 param_1);
void FUN_102f9300(undefined4 param_1);
void FUN_102f9420(undefined4 param_1);
void FUN_102f94c0(undefined4 param_1,int param_2);
void FUN_102f9560(undefined4 param_1);
void FUN_102f95f0(undefined4 param_1);
void FUN_102f96e0(undefined4 param_1);
void FUN_102f9780(undefined4 param_1);
void FUN_102f9820(void);
void FUN_102f9910(void);
void FUN_102f99a0(undefined4 param_1);
void FUN_102f9a30(undefined4 param_1);
void FUN_102f9ae0(undefined4 param_1);
void FUN_102f9b80(undefined4 param_1);
void FUN_102f9c20(undefined4 param_1);
void FUN_102f9cc0(undefined4 param_1);
void FUN_102f9db0(undefined4 param_1);
void FUN_102f9eb0(undefined4 param_1);
void FUN_102fa010(undefined4 param_1,int param_2);
void FUN_102fa090(void);
void FUN_102fa210(undefined4 param_1);
void FUN_102fa2e0(undefined4 param_1);
void FUN_102fa3b0(undefined4 param_1);
void FUN_102fa460(undefined4 param_1);
void FUN_102fa550(undefined4 param_1);
void FUN_102fa610(undefined4 param_1);
void FUN_102fa700(undefined4 param_1);
void FUN_102fa7f0(undefined4 param_1);
void FUN_102fa8a0(undefined4 param_1);
void FUN_102fa9c0(void);
void FUN_102faa80(undefined4 param_1);
void FUN_102fab30(undefined4 param_1);
void FUN_102fac10(undefined4 param_1);
void FUN_102face0(undefined4 param_1);
void FUN_102fad70(undefined4 param_1);
void FUN_102fae50(undefined4 param_1);
void FUN_102faf30(void);
void FUN_102fb010(undefined4 param_1);
void FUN_102fb0b0(undefined4 param_1);
void FUN_102fb240(undefined4 param_1);
void FUN_102fb2c0(undefined4 param_1);
void FUN_102fb460(undefined4 param_1);
void FUN_102fb530(undefined4 param_1);
void FUN_102fb600(undefined4 param_1);
void FUN_102fb690(undefined4 param_1);
void FUN_102fb730(undefined4 param_1);
void FUN_102fb7c0(undefined4 param_1);
void FUN_102fb850(undefined4 param_1,int param_2);
void FUN_102fb8e0(undefined4 param_1);
void FUN_102fb980(undefined4 param_1);
void FUN_102fbb00(undefined4 param_1);
void FUN_102fbb90(undefined4 param_1);
void FUN_102fbca0(undefined4 param_1);
void FUN_102fbd40(undefined4 param_1);
void FUN_102fbdf0(undefined4 param_1);
void FUN_102fbfb0(undefined4 param_1);
void FUN_102fc0c0(undefined4 param_1);
void FUN_102fc180(undefined4 param_1);
void FUN_102fc210(undefined4 param_1);
void FUN_102fc2b0(void);
void FUN_102fc4b0(undefined4 param_1);
void FUN_102fc5a0(undefined4 param_1);
void FUN_102fc660(undefined4 param_1);
void FUN_102fc710(undefined4 param_1);
void FUN_102fc7c0(undefined4 param_1,int param_2);
void FUN_102fc880(undefined4 param_1);
void FUN_102fc930(void);
void FUN_102fca00(undefined4 param_1,int param_2);
void FUN_102fcaa0(undefined4 param_1);
void FUN_102fcb70(undefined4 param_1);
void FUN_102fcc00(undefined4 param_1);
void FUN_102fcce0(undefined4 param_1);
void FUN_102fcdc0(undefined4 param_1);
void FUN_102fceb0(undefined4 param_1);
void FUN_102fcf80(undefined4 param_1);
void FUN_102fd040(undefined4 param_1);
void FUN_102fd0f0(undefined4 param_1);
void FUN_102fd270(undefined4 param_1);
void FUN_102fd320(void);
void FUN_102fd3c0(undefined4 param_1);
void FUN_102fd490(undefined4 param_1);
void FUN_102fd540(undefined4 param_1);
void FUN_102fd6c0(undefined4 param_1);
void FUN_102fd770(undefined4 param_1,int param_2);
void FUN_102fd800(undefined4 param_1);
void FUN_102fd890(void);
void FUN_102fd980(undefined4 param_1);
void FUN_102fda50(undefined4 param_1);
void FUN_102fdbf0(undefined4 param_1);
void FUN_102fdcb0(undefined4 param_1);
void FUN_102fdd80(undefined4 param_1,int param_2);
void FUN_102fde10(undefined4 param_1,int param_2);
void FUN_102fde90(undefined4 param_1);
void FUN_102fdf50(undefined4 param_1);
void FUN_102fe040(undefined4 param_1);
void FUN_102fe110(void);
void FUN_102fe190(undefined4 param_1);
void FUN_102fe290(undefined4 param_1);
void FUN_102fe330(undefined4 param_1);
void FUN_102fe3d0(undefined4 param_1);
void FUN_102fe470(undefined4 param_1);
void FUN_102fe550(undefined4 param_1);
void FUN_102fe555(void);
void FUN_102fe6e0(undefined4 param_1);
void FUN_102fe790(undefined4 param_1);
void FUN_102fe830(undefined4 param_1);
void FUN_102fe8e0(undefined4 param_1);
void FUN_102fe990(undefined4 param_1);
void FUN_102fea30(undefined4 param_1);
void FUN_102fead0(undefined4 param_1);
void FUN_102febc0(undefined4 param_1);
void FUN_102fec90(undefined4 param_1);
void FUN_102fed40(undefined4 param_1);
void FUN_102fee30(undefined4 param_1);
void FUN_102fef20(undefined4 param_1);
void FUN_102fefe0(undefined4 param_1);
void FUN_102ff0b0(undefined4 param_1);
void FUN_102ff180(undefined4 param_1);
void FUN_102ff210(undefined4 param_1);
void FUN_102ff2e0(undefined4 param_1);
void FUN_102ff380(undefined4 param_1);
void FUN_102ff4e0(undefined4 param_1);
void FUN_102ff5b0(undefined4 param_1);
void FUN_102ff650(undefined4 param_1);
void FUN_102ff730(undefined4 param_1);
void FUN_102ff7f0(undefined4 param_1);
void FUN_102ff880(undefined4 param_1);
void FUN_102ffa30(undefined4 param_1);
void FUN_102ffb40(undefined4 param_1);
void FUN_102ffbf0(undefined4 param_1);
void FUN_102ffcb0(void);
void FUN_102ffda0(undefined4 param_1);
void FUN_102ffe80(undefined4 param_1);
void FUN_102fff10(undefined4 param_1);
void FUN_102fffb0(undefined4 param_1);
void FUN_10300070(void);
void FUN_10300140(undefined4 param_1);
void FUN_103001f0(undefined4 param_1,int param_2);
uint FUN_10300280(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10300390(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103004a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103005a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103006a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103007b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103008c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103009d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10300ae0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10300bf0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10300d00(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10300e10(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10300f20(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301030(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301140(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301250(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301360(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301470(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301580(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301690(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103017a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103018b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103019c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301ad0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301be0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301cf0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301e00(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10301f00(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302010(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302110(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302220(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302330(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302440(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302550(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302660(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302770(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302880(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302990(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302aa0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302bb0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302cc0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302dd0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302ee0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10302ff0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303100(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303210(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303320(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303430(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303540(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303650(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303760(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303870(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303980(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303a90(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303ba0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303cb0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303dc0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303ed0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10303fe0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103040f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304200(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304310(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304420(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304530(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304630(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304740(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304850(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304960(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304a70(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304b80(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304c90(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304da0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304ea0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10304fb0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103050c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103051d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103052e0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103053f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103054f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305600(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305710(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305820(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305920(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305a30(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305b40(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305c50(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305d60(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305e70(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10305f80(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10306090(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103061a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103062b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103063b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103064b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103065b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103066c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103067d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103068e0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103069f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10306b00(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10306c10(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10306d20(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10306e20(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10306f30(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307040(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307150(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307260(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307370(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307480(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307590(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103076a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103077b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103078c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103079d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307ae0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307bf0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307d00(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307e10(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10307f20(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308030(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308140(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308250(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308360(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308470(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308580(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308690(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103087a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103088b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103089c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308ad0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308be0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308cf0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308df0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10308f00(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309010(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309120(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309230(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309340(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309440(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309550(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309660(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309770(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309880(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309990(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309aa0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309bb0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309cc0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309dd0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309ee0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10309ff0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a100(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a210(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a320(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a430(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a540(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a650(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a760(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a870(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030a980(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030aa90(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030aba0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030acb0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030adc0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030aed0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030afe0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b0f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b200(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b310(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b420(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b530(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b640(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b750(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b860(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030b960(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ba70(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030bb80(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030bc90(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030bda0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030beb0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030bfc0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c0d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c1e0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c2f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c400(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c510(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c620(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c730(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c830(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030c940(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ca50(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030cb60(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030cc70(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030cd80(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ce90(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030cfa0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d0b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d1c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d2d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d3e0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d4f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d600(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d710(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d820(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030d930(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030da40(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030db50(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030dc60(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030dd70(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030de80(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030df90(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e0a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e1b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e2c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e3d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e4e0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e5f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e700(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e810(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030e920(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ea30(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030eb40(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ec50(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ed60(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ee60(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ef70(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f080(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f190(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f2a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f3b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f4c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f5d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f6e0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f7f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030f900(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030fa10(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030fb20(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030fc30(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030fd40(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030fe50(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_1030ff60(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310070(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310180(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310290(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103103a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103104a0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103105b0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103106c0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103107d0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103108e0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_103109f0(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310b00(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310c10(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310d20(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310e30(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10310f40(uint param_1,undefined4 param_2,undefined4 param_3);
uint FUN_10311050(uint param_1,undefined4 param_2,undefined4 param_3);
void FUN_10311160(void);
void FUN_10311540(void);
void FUN_103115b0(undefined4 param_1);
undefined1 FUN_10311680(char *param_1,size_t param_2);
void FUN_10311740(undefined4 param_1);
undefined1 FUN_10311810(wchar_t *param_1,size_t param_2);
undefined4 FUN_103118e0(void);
void FUN_10311940(void);
undefined4 FUN_10311c90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool FUN_10311cd0(int param_1);
undefined4 FUN_10311dd0(void);
void FUN_10311f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4);
void FUN_10312460(undefined4 param_1);
char * __cdecl strchr(char *param_1,int param_2);
char * __cdecl strrchr(char *param_1,int param_2);
void FUN_103124c0(wchar_t *param_1,wchar_t param_2);
void FUN_103124e0(wchar_t *param_1,wchar_t param_2);
undefined4 * FUN_10312500(char *param_1);
void * FUN_10312560(uint param_1);
void FUN_10312590(void);
undefined4 * FUN_103125d0(undefined4 param_1);
bool FUN_10312640(void);
void FUN_10312660(undefined4 param_1);
undefined4 * FUN_10312680(void);
void __thiscall Concurrency::SchedulerPolicy::~SchedulerPolicy(SchedulerPolicy *this);
undefined4 * FUN_103126f0(void);
void FUN_10312730(undefined4 param_1,int param_2,undefined4 param_3);
void FUN_10312960(void);
void FUN_10312a00(undefined4 *param_1);
undefined4 FUN_10312a30(undefined4 param_1,int param_2,int param_3);
undefined4 * FUN_10312b10(undefined4 param_1,undefined4 param_2);
char * FUN_10312b80(void);
void FUN_10312b90(void);
void * FUN_10312bf0(uint param_1);
void FID_conflict:~bad_alloc(void);
void FUN_10312c70(void);
void FUN_10312d00(void);
undefined4 FUN_10312d20(void);
void FUN_10312d30(void);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::uflow(basic_streambuf<char,std::char_traits<char>_> *this);
int __cdecl std::char_traits<char>::to_int_type(char *param_1);
bool __cdecl std::char_traits<char>::eq_int_type(int *param_1,int *param_2);
void xsgetn(undefined4 param_1,undefined4 param_2);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::_Xsgetn_s(basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,uint param_2,int param_3);
char __cdecl std::char_traits<char>::to_char_type(int *param_1);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::xsputn(basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,int param_2);
fpos<int> * seekoff(fpos<int> *param_1);
fpos<int> * seekpos(fpos<int> *param_1);
undefined4 FUN_10313040(void);
void FUN_10313050(void);
void * FUN_10313060(uint param_1);
void * FUN_10313090(uint param_1);
void FUN_103130c0(void);
uint FUN_10313110(void);
char * __thiscall std::basic_streambuf<char,std::char_traits<char>_>::gptr(basic_streambuf<char,std::char_traits<char>_> *this);
char * __thiscall std::basic_streambuf<char,std::char_traits<char>_>::pptr(basic_streambuf<char,std::char_traits<char>_> *this);
void __thiscall std::basic_streambuf<char,std::char_traits<char>_>::gbump(basic_streambuf<char,std::char_traits<char>_> *this,int param_1);
char * __thiscall std::basic_streambuf<char,std::char_traits<char>_>::_Gninc(basic_streambuf<char,std::char_traits<char>_> *this);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::_Gnavail(basic_streambuf<char,std::char_traits<char>_> *this);
void __thiscall std::basic_streambuf<char,std::char_traits<char>_>::pbump(basic_streambuf<char,std::char_traits<char>_> *this,int param_1);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::_Pnavail(basic_streambuf<char,std::char_traits<char>_> *this);
fpos<int> * __thiscall std::fpos<int>::fpos<int>(fpos<int> *this,long param_1);
char * __cdecl std::_Traits_helper::copy_s<std::char_traits<char>_>(char *param_1,uint param_2,char *param_3,uint param_4);
void FID_conflict:copy_s<std::char_traits<wchar_t>_>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * FID_conflict:_Move_s(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4);
undefined4 * FUN_103133c0(undefined4 param_1,undefined4 param_2);
basic_streambuf<char,std::char_traits<char>_> * FUN_10313430(void);
undefined4 * FUN_103134d0(void);
void FUN_10313500(void);
void __thiscall std::basic_streambuf<char,std::char_traits<char>_>::_Init(basic_streambuf<char,std::char_traits<char>_> *this);
void __thiscall std::basic_streambuf<char,std::char_traits<char>_>::setg(basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,char *param_2,char *param_3);
void __thiscall std::basic_streambuf<char,std::char_traits<char>_>::setp(basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,char *param_2);
void * FUN_10313660(uint param_1);
undefined4 FUN_10313690(char *param_1);
uint __cdecl std::char_traits<char>::length(char *param_1);
undefined1 FUN_103136e0(undefined4 param_1);
uint FUN_10313800(void);
bool __thiscall std::ios_base::fail(ios_base *this);
undefined4 FUN_10313840(void);
void FUN_10313860(uint param_1);
void FID_conflict:`vbase_destructor'(void);
void FUN_103138b0(void);
void FUN_10313910(void);
void * FUN_10313930(uint param_1);
void FUN_10313960(void);
void * FUN_10313980(uint param_1);
int FID_conflict:`scalar_deleting_destructor'(uint param_1);
void FUN_103139f0(undefined4 param_1);
undefined4 * FUN_10313a80(int param_1);
void FUN_10313b10(void);
void FUN_10313b30(void);
undefined4 * FUN_10313b60(void);
void * FUN_10313b80(uint param_1);
void FUN_10313bb0(void);
refcount_ptr<boost::exception_detail::error_info_container> * __thiscall boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::refcount_ptr<boost::exception_detail::error_info_container>(refcount_ptr<boost::exception_detail::error_info_container> *this,refcount_ptr<struct_boost::exception_detail::error_info_container> *param_1);
void FUN_10313c00(void);
undefined4 * FUN_10313c30(int param_1);
undefined4 * FUN_10313cd0(int param_1);
void FUN_10313d70(void);
undefined4 * FUN_10313dd0(int param_1);
void * FUN_10313e50(uint param_1);
void * FUN_10313e80(uint param_1);
basic_istream<char,std::char_traits<char>_> * __thiscall std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>(basic_istream<char,std::char_traits<char>_> *this,basic_streambuf<char,std::char_traits<char>_> *param_1,bool param_2);
undefined4 * FUN_10313f60(void);
undefined4 * FUN_10313fc0(void);
void __thiscall std::basic_ios<char,std::char_traits<char>_>::init(basic_ios<char,std::char_traits<char>_> *this,basic_streambuf<char,std::char_traits<char>_> *param_1,bool param_2);
void FUN_10314050(void);
void __thiscall std::ios_base::clear(ios_base *this,int param_1);
void FUN_10314100(uint param_1,char param_2);
exception * FUN_10314290(exception *param_1);
void what(void);
void * FUN_10314330(uint param_1);
void FUN_10314360(void);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
undefined4 * FUN_10314430(undefined4 param_1);
void FUN_103144a0(void);
void * FUN_10314500(uint param_1);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * basic_string<>(char *param_1);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *FUN_103145d0(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void FUN_10314610(void);
void __thiscall std::basic_ios<char,std::char_traits<char>_>::setstate(basic_ios<char,std::char_traits<char>_> *this,int param_1,bool param_2);
basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1,uint param_2,uint param_3);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
void FUN_10314750(char param_1,uint param_2);
allocator<char> * _String_val<>(void);
void clear(uint param_1,undefined1 param_2);
basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::assign(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,char *param_1,uint param_2);
basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::erase(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,uint param_1,uint param_2);
void __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Eos(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,uint param_1);
void FUN_103149a0(undefined1 *param_1,undefined1 *param_2);
bool __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,bool param_2);
char * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Myptr(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
int FID_conflict:max_size(void);
void FUN_10314ac0(uint param_1,uint param_2);
char * __thiscall std::allocator<char>::allocate(allocator<char> *this,uint param_1);
bool __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::_Inside(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,char *param_1);
char __thiscall std::basic_ios<char,std::char_traits<char>_>::widen(basic_ios<char,std::char_traits<char>_> *this,char param_1);
char __thiscall std::ctype<char>::widen(ctype<char> *this,char param_1);
locale * FUN_10314d40(locale *param_1);
locale * __thiscall std::locale::locale(locale *this,locale *param_1);
uint __thiscall std::allocator<char>::max_size(allocator<char> *this);
facet * FUN_10314e10(locale *param_1);
int FUN_10314f00(void);
void FUN_10314f90(void);
facet * __thiscall std::locale::_Getfacet(locale *this,uint param_1);
undefined4 FUN_10315040(int *param_1);
void __thiscall std::ctype<char>::ctype<char>(ctype<char> *this,short *param_1,bool param_2,uint param_3);
_Lockit * FUN_103151b0(char *param_1);
void __thiscall std::_Locinfo::~_Locinfo(_Locinfo *this);
facet * FID_conflict:bad_exception(uint param_1);
void FUN_10315390(void);
facet * __thiscall std::locale::facet::facet(facet *this,uint param_1);
void * FUN_103153e0(uint param_1);
void FUN_10315410(void);
void * FUN_10315470(uint param_1);
void __thiscall std::ctype<char>::_Init(ctype<char> *this,_Locinfo *param_1);
_Ctypevec * __thiscall std::_Locinfo::_Getctype(_Locinfo *this,_Ctypevec *__return_storage_ptr__);
void __thiscall std::ctype<char>::_Tidy(ctype<char> *this);
void FUN_10315580(byte param_1);
byte * FID_conflict:do_toupper(byte *param_1,byte *param_2);
void FUN_103155f0(byte param_1);
byte * FID_conflict:do_toupper(byte *param_1,byte *param_2);
undefined1 FUN_10315660(undefined1 param_1);
char * __thiscall std::ctype<char>::do_widen(ctype<char> *this,char *param_1,char *param_2,char *param_3);
int FUN_103156a0(void *param_1,int param_2,void *param_3,uint param_4);
undefined1 FUN_103156e0(undefined1 param_1);
char * __thiscall std::ctype<char>::do_narrow(ctype<char> *this,char *param_1,char *param_2,char param_3,char *param_4);
int FUN_10315730(void *param_1,int param_2,undefined4 param_3,void *param_4,uint param_5);
ctype<char> * FUN_10315770(uint param_1);
void __thiscall std::ctype<char>::~ctype<char>(ctype<char> *this);
undefined4 basic_string<>(void);
char * __cdecl std::_Allocate<char>(uint param_1,char *param_2);
exception * FUN_10315880(void);
void FUN_103158e0(void);
void * FUN_10315940(uint param_1);
exception * FID_conflict:bad_exception(exception *param_1);
char * __cdecl std::_Traits_helper::move_s<std::char_traits<char>_>(char *param_1,uint param_2,char *param_3,uint param_4);
void FID_conflict:copy_s<std::char_traits<wchar_t>_>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * FID_conflict:_Move_s(void *param_1,rsize_t param_2,void *param_3,rsize_t param_4);
int * FUN_10315a40(undefined4 param_1);
void FID_conflict:~bad_alloc(void);
undefined4 FUN_10315c20(void);
int FUN_10315c40(undefined4 param_1,undefined1 param_2);
uint FUN_10315cb0(char param_1);
bool __thiscall std::ctype<char>::is(ctype<char> *this,short param_1,char param_2);
bool FUN_10315ed0(void);
undefined4 FUN_10315ef0(void);
int * flush(void);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::sgetc(basic_streambuf<char,std::char_traits<char>_> *this);
int FUN_10315fd0(void);
undefined4 * FUN_10316050(undefined4 param_1);
void pubsync(void);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::sbumpc(basic_streambuf<char,std::char_traits<char>_> *this);
void FUN_10316110(void);
undefined4 FUN_10316130(void);
undefined4 FUN_10316170(void);
void FUN_10316190(void);
int FUN_103161b0(void);
void FUN_103162f0(void);
void FUN_10316380(void);
int FUN_10316410(void);
void FUN_103164b0(void);
undefined4 FUN_103164e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
int FUN_10316540(int param_1);
void FUN_10316570(ios_base *param_1);
int __thiscall std::ios_base::precision(ios_base *this,int param_1);
undefined4 FUN_103165c0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10316620(undefined4 param_1,undefined4 param_2);
facet * FUN_10316680(locale *param_1);
undefined4 * FUN_10316770(undefined4 param_1);
undefined4 * FUN_103167f0(void);
undefined4 * FUN_10316870(int param_1);
void FUN_10316940(undefined4 param_1,undefined4 param_2);
int FUN_10316960(int param_1);
refcount_ptr<struct_boost::exception_detail::error_info_container> * __thiscall boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::operator=(refcount_ptr<boost::exception_detail::error_info_container> *this,refcount_ptr<struct_boost::exception_detail::error_info_container> *param_1);
void __thiscall boost::exception_detail::refcount_ptr<boost::exception_detail::error_info_container>::adopt(refcount_ptr<boost::exception_detail::error_info_container> *this,error_info_container *param_1);
undefined4 * FUN_10316a00(void);
undefined4 FUN_10316a20(int *param_1);
void FID_conflict:money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>(uint param_1);
void FUN_10316b60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10316de0(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,uint param_2,uint param_3);
undefined4 FUN_10316f00(undefined4 param_1);
undefined4 FUN_10316f70(undefined4 param_1);
facet * FUN_10316fe0(locale *param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,char param_2);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Chassign(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,uint param_2,char param_3);
char * __cdecl std::char_traits<char>::assign(char *param_1,uint param_2,char param_3);
undefined4 FUN_103171e0(int *param_1);
void __thiscall std::numpunct<char>::numpunct<char>(numpunct<char> *this,uint param_1);
uint * __thiscall std::_Locinfo::_Getcvt(_Locinfo *this);
undefined1 FUN_10317390(void);
undefined1 FUN_103173b0(void);
undefined4 FUN_103173d0(undefined4 param_1);
undefined4 FUN_10317440(undefined4 param_1);
undefined4 FUN_103174b0(undefined4 param_1);
void * FUN_10317520(uint param_1);
void FID_conflict:~CMenu(void);
void FUN_103175b0(void);
void FUN_10317600(_Locinfo *param_1);
lconv * __thiscall std::_Locinfo::_Getlconv(_Locinfo *this);
char * FUN_10317770(void);
undefined * FUN_10317780(void);
char * FUN_10317790(char *param_1);
basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,char param_2);
basic_string<char,std::char_traits<char>,std::allocator<char>_> *FUN_10317840(uint param_1,char param_2);
void FUN_10317890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_103179f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10317b50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10317c70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10317d90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10317eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10317fd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_103180e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_103181f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10318300(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * FUN_10318450(uint param_1);
void FUN_10318480(void);
void FUN_103184e0(int param_1,char *param_2,istreambuf_iterator<char,std::char_traits<char>_> *param_3,istreambuf_iterator<char,std::char_traits<char>_> *param_4,uint param_5,undefined4 param_6);
char * FUN_103189a0(uint param_1);
char __thiscall std::numpunct<char>::thousands_sep(numpunct<char> *this);
undefined4 FUN_103189f0(undefined4 param_1);
char __cdecl std::_Maklocchr<char>(char param_1,char *param_2,_Cvtvec *param_3);
int __thiscall std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffld(num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1,istreambuf_iterator<char,std::char_traits<char>_> *param_2,istreambuf_iterator<char,std::char_traits<char>_> *param_3,locale *param_4);
char __thiscall std::numpunct<char>::decimal_point(numpunct<char> *this);
char __thiscall std::istreambuf_iterator<char,std::char_traits<char>_>::operator*(istreambuf_iterator<char,std::char_traits<char>_> *this);
istreambuf_iterator<char,std::char_traits<char>_> * FUN_10319260(void);
void __thiscall std::istreambuf_iterator<char,std::char_traits<char>_>::_Inc(istreambuf_iterator<char,std::char_traits<char>_> *this);
char __thiscall std::istreambuf_iterator<char,std::char_traits<char>_>::_Peek(istreambuf_iterator<char,std::char_traits<char>_> *this);
int __cdecl std::_Getloctxt<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>(istreambuf_iterator<char,std::char_traits<char>_> *param_1,istreambuf_iterator<char,std::char_traits<char>_> *param_2,uint param_3,char *param_4);
bool __cdecl std::operator==<char,std::char_traits<char>_>(istreambuf_iterator<char,std::char_traits<char>_> *param_1,istreambuf_iterator<char,std::char_traits<char>_> *param_2);
bool __cdecl std::operator!=<char,std::char_traits<char>_>(istreambuf_iterator<char,std::char_traits<char>_> *param_1,istreambuf_iterator<char,std::char_traits<char>_> *param_2);
bool __thiscall std::istreambuf_iterator<char,std::char_traits<char>_>::equal(istreambuf_iterator<char,std::char_traits<char>_> *this,istreambuf_iterator<char,struct_std::char_traits<char>_> *param_1);
void Init(_Locinfo *param_1);
undefined4 FUN_10319670(void);
void FUN_103196b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10319860(undefined4 param_1);
void FUN_10319980(undefined4 param_1,int *param_2);
void FUN_10319a60(void);
void FUN_10319a80(undefined4 param_1,undefined4 *param_2);
undefined4 FUN_10319e80(undefined4 param_1);
void FUN_10319f00(void);
basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::operator=(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void __thiscall Concurrency::details::SchedulingNode::~SchedulingNode(SchedulingNode *this);
undefined4 FUN_10319ff0(void);
void FID_conflict:~bad_alloc(void);
undefined4 FUN_1031a090(void);
void FID_conflict:~bad_alloc(void);
void FID_conflict:assign(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void FUN_1031a160(void);
undefined1 * FUN_1031a1d0(void);
void FUN_1031a1f0(void);
void FUN_1031a210(void);
undefined4 FUN_1031a230(void);
undefined4 allocator<>(void);
void __thiscall _anon_026BA49F::_ExceptionPtr_normal::~_ExceptionPtr_normal(_ExceptionPtr_normal *this);
void FUN_1031a2e0(void);
void FUN_1031a310(void);
void FUN_1031a340(void);
void FUN_1031a370(void);
void FUN_1031a3a0(void);
void FUN_1031a3c0(char param_1,int param_2);
void FID_conflict:_Eos(int param_1);
void assign(undefined2 *param_1,undefined2 *param_2);
int FID_conflict:_Myptr(void);
undefined4 FUN_1031a4d0(undefined4 param_1);
undefined4 FUN_1031a540(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1031a5d0(undefined4 param_1,undefined4 param_2,char *param_3);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1,uint param_2);
undefined4 FUN_1031a780(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1031a810(undefined4 param_1);
undefined4 FUN_1031a8e0(undefined4 param_1);
void copy_s<>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1031a9e0(undefined4 param_1);
int FUN_1031aa20(void);
bool FUN_1031aa50(void);
void FUN_1031aa70(undefined4 param_1);
void FUN_1031aaa0(undefined4 param_1,undefined4 *param_2);
void FUN_1031ab20(undefined4 param_1,undefined4 *param_2);
void FID_conflict:copy_s<std::char_traits<wchar_t>_>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
wchar_t * FID_conflict:_Move_s(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,rsize_t param_4);
errno_t __cdecl FID_conflict:_wmemmove_s(wchar_t *_S1,rsize_t _N1,wchar_t *_S2,rsize_t _N);
void FUN_1031ac10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1031ac50(undefined4 param_1);
undefined4 FUN_1031ac70(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1031acf0(undefined4 param_1,undefined4 param_2);
void FUN_1031ad00(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void FUN_1031ae20(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void FUN_1031af40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
undefined4 * FUN_1031b260(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1031b290(undefined4 param_1);
undefined4 FUN_1031b2c0(int param_1);
undefined4 FUN_1031b320(void);
void FUN_1031b350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1031b380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1031b3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1031b3e0(uint param_1,int param_2);
int FUN_1031b5c0(int param_1);
void FUN_1031b5f0(undefined4 param_1,undefined4 param_2);
void FUN_1031b630(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1031b650(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1031b670(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1031b690(undefined4 param_1,undefined4 param_2);
undefined4 FID_conflict:begin(undefined4 param_1);
undefined4 _String_iterator<>(undefined4 param_1,undefined4 param_2);
undefined4 *FUN_1031b730(char *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2);
undefined4 __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
void FUN_1031b7c0(void);
void FUN_1031b7d0(void);
void * FUN_1031b7f0(uint param_1);
void FUN_1031b820(void);
void * FUN_1031b840(uint param_1);
void FUN_1031b870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_1031b8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_1031b960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_1031b9f0(undefined4 param_1,int param_2);
int FUN_1031ba20(int *param_1);
void FUN_1031ba60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
basic_string<char,std::char_traits<char>,std::allocator<char>_> *FUN_1031ba90(uint param_1,uint param_2,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,uint param_4,uint param_5);
undefined4 FUN_1031bdd0(undefined4 param_1,undefined4 param_2);
void FUN_1031be30(char *param_1,char *param_2);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1);
void FUN_1031bf50(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1031bf80(int param_1,int param_2,int *param_3);
bool FUN_1031bfa0(char *param_1);
uint FUN_1031bfc0(uint param_1,uint param_2);
undefined4 FUN_1031c010(void);
undefined * FUN_1031c030(void);
undefined4 FUN_1031c040(void);
undefined4 FUN_1031c060(undefined4 param_1,int param_2,char param_3);
void FUN_1031c3f0(ushort param_1);
int FUN_1031c400(void);
void FUN_1031c880(void);
void FUN_1031c9c0(uint *param_1,undefined4 *param_2,char param_3);
uint * FUN_1031cc30(uint *param_1,void *param_2,size_t *param_3,int param_4);
undefined4 FUN_1031cd70(undefined4 *param_1);
undefined4 FUN_1031d2e0(int param_1,int param_2,ushort *param_3,int param_4);
undefined4 FUN_1031d430(int param_1,int param_2);
int FUN_1031d5c0(int param_1,char *param_2);
void FUN_1031d680(void);
void FUN_1031df50(undefined1 param_1);
void FUN_1031dfa0(void);
void FUN_1031dfb0(void);
void FUN_1031e070(void);
void FUN_1031e0a0(void);
undefined4 FUN_1031e1d0(undefined4 param_1);
void FUN_1031e250(void);
void FUN_1031e2d0(void);
void FUN_1031e310(byte param_1);
bool FUN_1031e350(void);
undefined4 FUN_1031e370(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4);
undefined4 FUN_1031e3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::insert(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1,uint param_2,char param_3);
undefined4 * FUN_1031e560(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_1031e5a0(undefined4 param_1);
int * FUN_1031e5c0(int param_1);
undefined4 FUN_1031e640(undefined4 param_1);
void FUN_1031e6b0(undefined4 param_1);
undefined4 FUN_1031e6e0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1031e760(undefined4 param_1);
int FID_conflict:assign(int param_1,uint param_2,uint param_3);
allocator<char> * FUN_1031e860(allocator<char> *param_1);
int FID_conflict:erase(uint param_1,uint param_2);
undefined4 FUN_1031e920(void);
bool FID_conflict:_Grow(uint param_1,char param_2);
int FID_conflict:max_size(void);
void FUN_1031ea20(uint param_1,int param_2);
void allocate(undefined4 param_1);
undefined4 max_size(void);
void move_s<>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void _Allocate<>(uint param_1);
void FID_conflict:copy_s<std::char_traits<wchar_t>_>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
wchar_t * FID_conflict:_Move_s(wchar_t *param_1,rsize_t param_2,wchar_t *param_3,rsize_t param_4);
errno_t __cdecl FID_conflict:_wmemmove_s(wchar_t *_S1,rsize_t _N1,wchar_t *_S2,rsize_t _N);
undefined4 FUN_1031ece0(int param_1);
undefined4 FUN_1031ed70(undefined4 param_1,int param_2);
undefined4 * FUN_1031edd0(int param_1);
void FUN_1031f010(void);
undefined4 FUN_1031f090(void *param_1,int *param_2,int *param_3);
bool FUN_1031f410(undefined4 param_1,undefined1 param_2,undefined1 param_3);
void FUN_1031f470(int param_1,int param_2,char param_3,char param_4,char param_5);
void FUN_1031f840(undefined4 param_1,uint param_2,int param_3,undefined4 param_4);
undefined4 FUN_1031fa90(void);
undefined1 FUN_1031fb60(undefined4 param_1,undefined1 param_2,undefined1 param_3);
undefined4 basic_string<>(undefined4 param_1);
void FUN_1031fc50(void);
void FID_conflict:assign(char *param_1);
uint __cdecl std::char_traits<char>::length(char *param_1);
int FID_conflict:assign(int param_1,undefined4 param_2);
uint FID_conflict:_Inside(uint param_1);
void FUN_1031fd90(void);
void FUN_1031feb0(undefined4 param_1);
undefined4 FUN_1031ff60(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1031ff90(undefined4 param_1,int param_2,size_t param_3,void *param_4);
int FUN_103200a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_103203b0(void);
void FUN_10320440(undefined4 param_1);
__time64_t FUN_10320760(__time64_t *param_1);
bool FUN_10320780(undefined4 param_1);
void FUN_103207b0(undefined4 param_1,int param_2,int param_3,undefined4 param_4);
bool FUN_10320b60(undefined4 param_1);
undefined4 FUN_10320ba0(undefined4 param_1,undefined4 *param_2);
void FUN_10320bd0(void);
bool FUN_10320d90(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10320e40(void);
undefined1 FUN_10322f60(int param_1);
undefined4 FUN_10323730(int param_1,undefined4 param_2,char param_3);
undefined4 FUN_103241d0(undefined4 param_1);
int FUN_10324210(uint param_1,char param_2);
void FUN_103242b0(undefined4 param_1,undefined4 param_2);
void FUN_10324420(undefined4 param_1);
undefined4 FUN_103244a0(char param_1);
void FUN_10325030(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_10325270(undefined4 *param_1,int param_2);
void FUN_10325310(char param_1);
void FUN_103255a0(void);
undefined4 FUN_10325630(undefined4 param_1,int param_2);
void FUN_10325680(void);
undefined4 FUN_103256e0(undefined4 param_1,undefined4 param_2);
undefined4 function<>(undefined4 param_1);
undefined4 basic_string<>(void);
void FID_conflict:~bad_alloc(void);
undefined4 FUN_10325820(undefined4 param_1);
undefined4 FUN_10325880(undefined4 param_1);
void FUN_103258e0(void);
undefined1 * FUN_10325900(undefined4 param_1);
void FUN_10325930(undefined4 param_1);
undefined4 FUN_103259c0(short *param_1);
void FUN_10325a60(undefined4 param_1);
void FUN_10325b00(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10325b20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10325b90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool IsEnd(void);
uint FUN_10325c00(undefined4 param_1,uint param_2,uint param_3);
undefined2 FUN_10325ce0(short *param_1,short *param_2);
void FUN_10325d00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int FUN_10325d20(ushort *param_1,ushort *param_2,int param_3);
undefined4 FUN_10325d80(undefined4 param_1);
int FUN_10325ed0(uint param_1);
void FUN_10325f00(void);
void FUN_10325f70(undefined2 param_1);
int FUN_10325f90(uint param_1,undefined2 param_2);
void FID_conflict:_Chassign(int param_1,int param_2,undefined2 param_3);
void assign(wchar_t *param_1,size_t param_2,wchar_t param_3);
wchar_t * __cdecl _wmemset(wchar_t *_S,wchar_t _C,size_t _N);
void FUN_103260b0(short param_1);
undefined1 FUN_103260f0(short param_1);
undefined4 basic_string<>(undefined4 param_1,undefined2 param_2);
undefined4 FID_conflict:end(undefined4 param_1);
void FUN_10326190(void);
undefined4 * FUN_103261b0(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_103261f0(int param_1,undefined2 param_2);
undefined4 _String_iterator<>(undefined4 param_1,undefined4 param_2);
void FUN_10326260(int param_1);
int FUN_10326280(void);
undefined4 FUN_103262d0(undefined4 param_1);
int * FUN_103262f0(uint param_1,int param_2);
int * FUN_10326350(int param_1);
int FUN_103263d0(undefined4 param_1,int param_2);
undefined1 FUN_103264b0(undefined4 param_1,uint param_2);
void FUN_10326540(undefined4 param_1,undefined4 param_2);
uint FUN_10326560(undefined4 param_1,uint param_2,uint param_3);
void FUN_10326640(wchar_t *param_1,size_t param_2,wchar_t *param_3);
wchar_t * __cdecl _wmemchr(wchar_t *_S,wchar_t _C,size_t _N);
undefined4 FUN_103266a0(undefined4 param_1);
undefined4 FUN_10326770(undefined4 param_1);
undefined4 FUN_10326840(void);
undefined4 FUN_103268f0(void);
undefined4 FUN_103269a0(void);
undefined4 FUN_10326a70(undefined4 param_1);
undefined4 FUN_10326c30(undefined4 param_1);
undefined4 FUN_10326df0(undefined4 param_1);
undefined4 FUN_10326e70(void);
undefined4 FUN_10326fd0(void);
void FUN_10327130(void);
void FUN_10327150(void);
undefined4 FUN_10327170(undefined4 param_1);
undefined4 FUN_10327230(undefined4 param_1);
undefined4 FUN_103272f0(undefined4 param_1);
void FUN_103273b0(void);
void FUN_103273d0(void);
void FUN_103273f0(void);
void FUN_10327410(void);
undefined4 FUN_10327430(undefined4 param_1);
undefined4 FUN_10327490(undefined4 param_1);
undefined4 FUN_103274f0(undefined4 param_1);
undefined4 FUN_10327550(undefined4 param_1);
undefined1 FUN_103275b0(void);
undefined1 FUN_103275f0(void);
bool FUN_10327630(void);
undefined4 FUN_10327660(undefined4 param_1);
undefined4 FUN_10327750(undefined4 param_1);
undefined4 * FUN_10327830(int param_1);
undefined4 * FUN_103279a0(undefined4 *param_1);
undefined4 * FUN_10327a70(int param_1);
undefined4 * FUN_10327be0(undefined4 *param_1);
void FUN_10327cb0(void);
void FUN_10327d30(void);
void FUN_10327d90(void);
bool FUN_10327e40(void);
undefined4 FUN_10327e60(undefined4 param_1);
undefined4 FUN_10328010(undefined4 param_1);
undefined4 FUN_103281a0(undefined4 param_1);
undefined1 FUN_103282f0(void);
undefined4 FUN_10328440(undefined4 param_1);
void FUN_10328610(undefined4 param_1,undefined4 param_2);
undefined4 FUN_103286e0(undefined4 param_1);
undefined4 FUN_103287e0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10328a70(undefined4 param_1);
undefined4 FUN_10328b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10328dc0(undefined4 param_1);
undefined4 FUN_10328e60(undefined4 param_1);
undefined4 FUN_10329000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_103290b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10329290(undefined4 param_1);
undefined4 FUN_10329330(undefined4 param_1);
void FUN_103294e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_103295f0(undefined4 param_1,undefined4 param_2);
void FUN_10329790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_10329a50(undefined4 param_1);
void FUN_10329be0(void);
void FUN_10329cb0(void);
void FUN_10329d90(void);
undefined4 FUN_10329df0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10329ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
bool FUN_1032a170(void);
bool FUN_1032a200(void);
void FUN_1032a230(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1032a2a0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1032a2c0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1032a3a0(undefined4 param_1,undefined4 param_2);
void FUN_1032a610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1032a720(undefined4 param_1);
void FUN_1032a800(undefined4 param_1);
undefined4 FUN_1032a870(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_1032a950(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1032ab00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_1032abf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
bool FUN_1032acd0(undefined4 param_1);
undefined4 FUN_1032ad40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1032ae00(undefined4 param_1,undefined4 param_2);
void FUN_1032af80(undefined4 *param_1);
void FUN_1032b130(undefined4 *param_1);
void FUN_1032b300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
void FUN_1032b430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_1032b520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_1032b620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1032b700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_1032b7e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 FUN_1032b870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 FUN_1032b920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 FUN_1032bac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 FUN_1032bc60(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1032bd50(undefined4 param_1,undefined4 param_2);
void FUN_1032bf70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
undefined4 FUN_1032c2f0(undefined4 param_1);
undefined4 FUN_1032c360(undefined4 param_1);
undefined4 FUN_1032c490(undefined4 param_1);
undefined4 FUN_1032c4f0(undefined4 param_1);
void FUN_1032c660(void);
void FUN_1032c830(__time64_t *param_1);
void FUN_1032c850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_1032ca30(void);
void FUN_1032cb00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void FUN_1032cce0(void);
undefined4 FUN_1032cdb0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032cdf0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032ce30(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032ce70(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032ceb0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032cef0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032cf30(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032cf70(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032cfb0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032cff0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d030(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d070(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d0b0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d0f0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d130(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d170(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d1b0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d1f0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d230(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d270(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d2b0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d2f0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d330(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d370(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d3b0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d3f0(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 FUN_1032d430(undefined4 param_1,undefined4 param_2,char param_3);
undefined4 * FUN_1032d470(undefined4 param_1);
void FUN_1032d4e0(void);
void * FUN_1032d550(uint param_1);
exception * FUN_1032d580(exception *param_1);
undefined4 FUN_1032d600(void);
void FUN_1032d690(undefined4 param_1);
void FUN_1032d6b0(undefined4 param_1);
undefined4 FUN_1032d6d0(void);
void FUN_1032d770(undefined4 param_1);
void FUN_1032d790(undefined4 param_1);
undefined4 FUN_1032d7b0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1032d810(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1032d870(void);
void FUN_1032d910(void);
undefined4 * FUN_1032d990(undefined4 *param_1);
undefined4 * FUN_1032da20(undefined4 *param_1);
void FUN_1032dab0(void);
undefined4 FID_conflict:begin(undefined4 param_1);
void FUN_1032db20(ushort param_1);
void FUN_1032db60(void);
undefined4 function<>(undefined4 param_1);
void FID_conflict:~bad_alloc(void);
void FUN_1032dc30(void);
void FUN_1032dc50(void);
undefined4 * FUN_1032dc70(undefined4 param_1);
void FUN_1032dca0(void);
void FUN_1032dcd0(void);
bool FUN_1032dd30(int param_1,uint param_2);
int FUN_1032dd50(void);
int FUN_1032ddc0(undefined4 param_1,undefined4 param_2);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
exception * FUN_1032de60(exception *param_1);
void * FUN_1032ded0(uint param_1);
undefined4 FUN_1032df00(undefined4 *param_1);
undefined4 FUN_1032df20(void);
undefined4 FUN_1032dfc0(undefined4 param_1);
undefined4 FUN_1032e020(undefined4 param_1);
undefined4 FUN_1032e080(undefined4 param_1);
void FUN_1032e0a0(void);
undefined4 FUN_1032e0c0(undefined4 param_1);
void FUN_1032e0e0(void);
undefined4 FUN_1032e100(undefined4 param_1);
undefined4 FUN_1032e160(undefined4 param_1);
void FID_conflict:~bad_alloc(void);
undefined4 FUN_1032e210(void);
undefined4 FUN_1032e240(undefined4 param_1,undefined4 param_2);
void FUN_1032e280(void);
int FUN_1032e2a0(void);
int FUN_1032e2e0(uint param_1);
void FUN_1032e310(undefined4 param_1);
undefined4 FUN_1032e380(void);
undefined4 FUN_1032e3b0(undefined4 param_1,undefined4 param_2);
void FUN_1032e3f0(void);
int FUN_1032e410(uint param_1);
void FUN_1032e440(undefined4 param_1);
int * FUN_1032e4b0(void);
undefined4 * FUN_1032e510(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e540(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e570(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e5a0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e5d0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e600(undefined4 param_1,undefined4 param_2,undefined1 param_3);
bool FUN_1032e630(void);
void FUN_1032e650(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_1032e670(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032e6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
undefined4 * FUN_1032e6d0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032e700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 * FUN_1032e730(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032e760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * FUN_1032e790(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e7c0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e7f0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e820(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e850(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e880(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e8b0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e8e0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032e910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 * FUN_1032e940(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e970(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032e9a0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032e9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
undefined4 * FUN_1032ea20(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032ea50(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032ea80(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032eab0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032eae0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 * FUN_1032eb00(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032eb30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10);
undefined4 * FUN_1032eb70(undefined4 param_1,undefined4 param_2,undefined1 param_3);
undefined4 * FUN_1032eba0(undefined4 param_1,undefined4 param_2,undefined1 param_3);
void FUN_1032ebd0(void);
undefined4 FUN_1032ebf0(void);
int FUN_1032ec20(allocator<char> *param_1);
void FUN_1032ed00(void);
void FUN_1032ed20(undefined4 param_1);
undefined4 FUN_1032ed90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4);
undefined4 FUN_1032ee10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_1032eec0(void);
void FUN_1032ef10(void);
undefined4 FUN_1032ef40(undefined4 param_1);
undefined4 FUN_1032ef60(undefined4 param_1);
undefined4 FUN_1032ef80(undefined4 param_1);
int FUN_1032f0d0(undefined4 param_1);
undefined4 FUN_1032f140(undefined4 param_1);
void FUN_1032f160(void);
void FUN_1032f1e0(void);
undefined4 FUN_1032f1f0(void);
void FUN_1032f210(void);
undefined4 FUN_1032f230(undefined4 param_1);
bool FUN_1032f260(undefined4 param_1);
undefined4 FUN_1032f280(undefined4 param_1);
int FUN_1032f2a0(undefined4 param_1);
void FUN_1032f340(void);
undefined8 FUN_1032f360(void);
void FUN_1032f370(void);
undefined4 FUN_1032f390(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_1032f4e0(int param_1);
undefined4 FUN_1032f580(undefined2 param_1);
undefined4 FUN_1032f5a0(undefined2 param_1);
undefined4 FUN_1032f5c0(undefined2 param_1);
undefined4 FUN_1032f5e0(undefined2 param_1,undefined2 param_2,undefined2 param_3);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
void FUN_1032f780(void);
void * FUN_1032f7e0(uint param_1);
void * FUN_1032f810(uint param_1);
void FID_conflict:~bad_alloc(void);
undefined4 FUN_1032f890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_1032f8c0(undefined4 param_1);
undefined2 * FUN_1032f8e0(undefined2 param_1);
undefined2 * FUN_1032f910(undefined2 param_1);
undefined2 * FUN_1032f940(undefined2 param_1);
undefined4 FUN_1032f970(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_1032fa10(undefined2 param_1,undefined2 param_2,undefined2 param_3);
undefined4 * FUN_1032fa50(void);
undefined4 FUN_1032fa70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_1032fab0(void);
undefined4 * FUN_1032fad0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1032faf0(undefined4 param_1,undefined4 param_2);
void FUN_1032fb90(void);
void FUN_1032fba0(ushort param_1);
void FUN_1032fc10(void);
void FUN_1032fc20(ushort param_1);
void FUN_1032fc90(ushort param_1);
undefined4 FUN_1032fd00(undefined4 param_1);
int __cdecl std::char_traits<char>::eof(void);
undefined4 FUN_1032fd30(undefined4 param_1);
undefined4 FUN_1032fd50(void);
undefined4 FUN_1032fd60(undefined4 param_1);
undefined4 FUN_1032fd80(undefined4 param_1);
undefined4 FUN_1032fda0(undefined4 param_1);
int FUN_1032fdc0(int param_1,int param_2,uint param_3,int param_4,int param_5);
undefined4 FUN_1032fed0(undefined4 param_1,COleCurrency *param_2,COleCurrency *param_3);
undefined8 FUN_1032ff80(void);
void FUN_1032ffa0(void);
undefined4 FUN_1032ffc0(undefined4 param_1,code *param_2);
void FUN_103300d0(undefined4 param_1);
undefined4 FUN_103300e0(void);
undefined4 FUN_10330110(void);
undefined4 FUN_10330140(undefined4 param_1);
undefined4 * FUN_10330160(undefined4 *param_1);
undefined4 FUN_10330180(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_103301b0(void);
undefined1 * FUN_103301d0(void);
undefined1 * FUN_103301f0(undefined4 param_1);
void FUN_10330220(undefined4 param_1);
uint FUN_10330260(void);
void FUN_10330280(undefined4 param_1);
undefined1 * FUN_103302c0(undefined4 param_1);
void FUN_103302f0(void);
void FUN_10330310(undefined4 param_1,undefined4 param_2);
int FUN_103303b0(void);
undefined4 FUN_103303f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10330470(uint param_1);
void FUN_103304f0(void);
int FUN_10330560(int param_1,int param_2,undefined4 param_3);
void FUN_10330590(undefined4 param_1,undefined4 param_2);
int FUN_10330630(void);
undefined4 FID_conflict:end(undefined4 param_1);
int FUN_103306a0(void);
undefined4 FUN_103306e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10330760(uint param_1);
void FUN_103307e0(void);
int FUN_10330850(int param_1,int param_2,undefined4 param_3);
int FUN_10330880(void);
undefined4 FUN_103308c0(undefined4 param_1);
undefined4 FUN_103308f0(undefined4 param_1);
int FUN_10330920(void);
undefined4 FUN_10330960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_103309e0(uint param_1);
void FUN_10330a60(void);
int FUN_10330ad0(int param_1,int param_2,undefined4 param_3);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
int FID_conflict:insert(uint param_1,uint param_2,undefined2 param_3);
undefined4 FUN_10330c30(undefined4 param_1,int param_2);
undefined4 FUN_10330c60(undefined4 param_1);
undefined8 FUN_10330c80(void);
undefined4 FUN_10330c90(undefined4 param_1);
undefined8 FUN_10330cb0(void);
undefined4 FUN_10330cc0(undefined4 param_1);
undefined4 FUN_10330ce0(undefined4 param_1);
undefined4 FUN_10330d00(undefined4 param_1);
bool FUN_10330d20(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10330d70(undefined4 param_1,undefined4 param_2);
void FUN_10330de0(void);
undefined2 FUN_10330df0(void);
void FUN_10330e00(void);
undefined4 * FUN_10330e70(void);
void FUN_10330ef0(void);
undefined2 FUN_10330f00(void);
void FUN_10330f10(void);
undefined4 * FUN_10330f80(void);
void * FUN_10331000(uint param_1);
void FID_conflict:~bad_alloc(void);
void FUN_10331080(void);
void FUN_10331090(void);
undefined4 * FUN_10331100(void);
void * FUN_10331180(uint param_1);
void FID_conflict:~bad_alloc(void);
undefined4 FUN_10331200(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10331240(undefined4 param_1,undefined4 param_2);
void FUN_10331260(undefined4 param_1,undefined4 param_2);
void FUN_10331280(void);
bool FUN_10331290(void);
undefined4 * FUN_103312f0(undefined4 param_1,COleCurrency *param_2);
void FUN_103313c0(void);
bool FUN_103313e0(int param_1);
bool FUN_10331410(void);
void FUN_10331440(void);
void FUN_10331480(void);
undefined4 * __thiscall COleCurrency::operator_union_tagCY(COleCurrency *this);
void FUN_103314c0(undefined4 param_1);
void FUN_10331550(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void FUN_10331570(void);
void FUN_103315a0(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
undefined1 FUN_103315c0(void);
void FUN_103315d0(undefined4 param_1);
void FUN_10331660(void);
void FUN_10331690(void);
void FUN_103316b0(undefined4 param_1,int param_2,uint param_3,undefined1 *param_4);
void FUN_103319c0(void);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
void FUN_10331aa0(void);
void * FUN_10331b00(uint param_1);
void FUN_10331b30(void);
void FUN_10331b50(undefined4 param_1,int param_2,uint param_3,undefined2 *param_4);
void FUN_10331e80(void);
undefined4 * FUN_10331f00(undefined4 *param_1,undefined4 param_2);
void FUN_10331f40(void);
void FUN_10331f60(undefined4 param_1,undefined4 param_2);
void FUN_10331f90(undefined4 param_1,int param_2,uint param_3,undefined4 param_4);
void FUN_10332300(void);
void FUN_10332380(undefined4 param_1);
undefined4 _Vector_iterator<>(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_103323c0(undefined4 *param_1,undefined4 param_2);
void FUN_10332400(undefined4 param_1);
undefined4 * FUN_10332420(undefined4 *param_1,undefined4 param_2);
void FUN_10332460(undefined4 param_1);
undefined4 * FUN_10332480(undefined4 *param_1,undefined4 param_2);
void FUN_103324c0(undefined4 param_1);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
undefined4 FUN_10332540(undefined4 param_1);
basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>::operator=(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *this,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
bool FUN_103325c0(undefined4 param_1,undefined4 param_2);
bool FUN_10332610(undefined4 param_1,undefined4 param_2);
bool __thiscall Concurrency::details::SchedulerBase::HasWorkPending(SchedulerBase *this);
undefined2 FUN_103326a0(void);
undefined2 FUN_103326b0(void);
undefined2 FUN_103326c0(void);
void FUN_103326d0(void);
undefined4 FUN_103326f0(undefined4 param_1);
void FUN_10332710(void);
undefined4 FUN_10332720(undefined4 param_1);
void FUN_10332730(void);
int FUN_10332760(int *param_1);
undefined4 max_size(void);
undefined4 FUN_103327d0(undefined4 param_1);
int * FUN_103327f0(uint param_1,int param_2);
int FUN_10332840(int *param_1);
undefined4 FUN_10332880(undefined4 param_1);
int FUN_103328a0(int *param_1);
int FUN_103328e0(int *param_1);
undefined4 FUN_10332920(undefined4 param_1);
void FID_conflict:assign(undefined4 param_1);
undefined4 FUN_10332970(void);
undefined4 FUN_10332a00(void);
undefined1 FUN_10332a60(int param_1);
int * FUN_10332ab0(int param_1);
int * FUN_10332b10(int param_1);
int * FUN_10332b70(int param_1);
void FUN_10332bd0(void);
undefined4 FUN_10332bf0(char *param_1);
void FUN_10332c90(void);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> * FUN_10332cb0(void);
void FUN_10332ce0(void);
void FUN_10332ed0(void);
void FUN_103330c0(undefined4 param_1);
undefined4 * FUN_103331e0(void);
uint FUN_10333210(void);
undefined1 FUN_10333230(void);
void FUN_10333270(undefined4 param_1);
undefined8 FUN_10333390(undefined4 param_1);
undefined8 FUN_103334a0(undefined4 param_1);
void FUN_103335b0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10333780(undefined4 param_1,undefined4 param_2);
void FUN_103337e0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_103339b0(undefined4 param_1,undefined4 param_2);
void FUN_10333a10(undefined4 param_1);
undefined2 * FUN_10333ac0(undefined2 param_1,undefined2 param_2,undefined2 param_3);
int FUN_10333af0(void);
undefined2 FUN_10333bc0(void);
undefined4 FUN_10333be0(undefined2 param_1);
undefined4 FUN_10333c60(void);
void FUN_10333cd0(undefined4 param_1);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
int FUN_10333de0(int param_1);
undefined4 FUN_10333e10(undefined4 param_1);
undefined4 FUN_10333e30(undefined4 param_1);
undefined4 FUN_10333e50(undefined4 param_1);
undefined4 FUN_10333e70(int param_1);
undefined4 FUN_10333e90(int param_1);
int FUN_10333eb0(undefined4 param_1);
undefined4 FUN_10333ef0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10333f40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10333f90(undefined4 param_1,undefined4 param_2);
bool FUN_10333ff0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char *param_2);
int __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
uint FUN_10334040(uint param_1,uint param_2,undefined4 param_3,uint param_4);
void FUN_103340f0(void *param_1,void *param_2,size_t param_3);
bool FUN_10334110(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char *param_2);
bool FUN_10334130(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>*param_2);
int __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1);
undefined4 FUN_10334180(undefined4 param_1);
void FUN_103341b0(void);
int FUN_103341e0(undefined4 param_1,undefined4 param_2);
void FUN_10334210(void);
undefined4 FUN_10334230(void);
int FUN_10334250(void);
int * FUN_103342a0(void);
undefined4 FUN_103342f0(undefined4 param_1);
void FUN_10334320(void);
undefined4 FUN_10334350(void);
int * FUN_10334370(void);
undefined4 FUN_103343c0(undefined4 param_1);
undefined4 FUN_10334430(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10334450(undefined4 param_1);
void FUN_103344c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined8 __cdecl imaxabs(int param_1,int param_2);
void FUN_10334530(void);
undefined4 * FUN_10334540(undefined4 *param_1,SchedulerBase *param_2);
void FUN_103346c0(uint *param_1);
void FUN_10334730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10334770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_103347b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_103347f0(undefined4 param_1);
void FUN_103348a0(undefined4 param_1);
undefined4 * FUN_10334950(undefined4 *param_1,SchedulerBase *param_2);
bool FUN_10334ac0(int param_1);
bool FUN_10334af0(int param_1);
bool FUN_10334b20(void);
bool __thiscall Concurrency::details::SchedulerBase::HasWorkPending(SchedulerBase *this);
undefined1 FUN_10334b90(void);
void DoMessageBox(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334c20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334c50(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void DoMessageBox(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334d20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334d90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void DoMessageBox(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334e00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334e30(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10334ea0(uint param_1);
undefined4 FUN_10334ef0(undefined4 param_1);
undefined4 * FUN_10334f50(int param_1);
undefined4 * FUN_10334ff0(int param_1);
undefined4 * FUN_10335090(int param_1);
undefined4 * FUN_10335130(int param_1);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
undefined4 * FUN_10335230(void);
char * FUN_10335290(void);
void FID_conflict:~bad_alloc(void);
exception * FID_conflict:bad_exception(exception *param_1);
undefined4 * FUN_10335350(int param_1);
undefined4 * FUN_103353f0(int param_1);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
undefined4 * FUN_103354f0(int param_1);
undefined4 * FUN_10335590(int param_1);
undefined4 * FID_conflict:bad_exception(undefined4 param_1);
void * FUN_10335690(uint param_1);
void * FUN_103356c0(uint param_1);
void * FUN_103356f0(uint param_1);
void * FUN_10335720(uint param_1);
void * FUN_10335750(uint param_1);
void * FUN_10335780(uint param_1);
void * FUN_103357b0(uint param_1);
void * FUN_103357e0(uint param_1);
void * FUN_10335810(uint param_1);
int __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::compare(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
undefined4 FUN_10335870(undefined4 param_1);
undefined4 FUN_10335900(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10335960(undefined4 param_1);
undefined4 FUN_103359f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10335a50(undefined4 param_1);
undefined4 FUN_10335ab0(undefined4 param_1);
void FUN_10335b10(undefined4 param_1);
int FUN_10335b30(undefined4 param_1);
void FUN_10335b60(void);
void FUN_10335bd0(void);
void * FUN_10335c40(uint param_1);
void FUN_10335c70(void);
undefined4 FUN_10335d90(undefined4 param_1);
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1);
void FUN_10335e30(void);
void FUN_10335e90(char *param_1,undefined4 param_2,undefined4 param_3,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4);
void FUN_10335fe0(void);
void FUN_10336050(void);
void FUN_103360b0(void);
void FUN_10336140(void);
int FUN_103361d0(void);
void FUN_10336270(void);
void FUN_103362a0(void);
void FUN_10336330(void);
int FUN_103363c0(void);
void FUN_10336460(void);
void FUN_10336490(void);
void FUN_10336520(void);
int FUN_103365b0(void);
void FUN_10336650(void);
void FUN_10336680(void);
void FUN_10336710(void);
int FUN_103367a0(void);
void FUN_10336840(void);
void * FUN_10336870(uint param_1);
void FUN_103368a0(void);
void FUN_103368f0(void);
void FUN_10336910(void);
void Decwref(void);
void * FUN_10336970(uint param_1);
void FUN_103369a0(void);
uint FUN_103369f0(uint param_1,uint param_2,undefined4 param_3,uint param_4);
undefined1 * FUN_10336aa0(void);
undefined1 * FUN_10336ae0(void);
undefined4 FUN_10336b20(void);
void FUN_10336b30(void);
void FUN_10336ba0(char param_1);
undefined4 FUN_10336bd0(char param_1);
int FUN_10336c00(undefined4 param_1,int param_2);
uint FUN_10336ce0(undefined4 param_1,uint param_2);
undefined4 *FUN_10336de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * FUN_10336ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *FUN_10336f60(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void FUN_10336f80(undefined4 param_1);
uint FUN_10337030(undefined4 param_1,uint param_2);
undefined4 *FUN_10337130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *FUN_10337230(basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_1);
void FUN_10337250(undefined4 param_1);
undefined4 FUN_10337300(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10337360(undefined4 param_1,undefined4 param_2);
undefined4 FUN_103373c0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10337420(undefined4 param_1,undefined4 param_2);
void FUN_10337480(undefined4 param_1);
void FUN_10337530(undefined4 param_1);
void FUN_103375e0(undefined4 param_1);
void FUN_10337690(undefined4 param_1);
void FUN_103376c0(undefined4 param_1);
undefined4 FUN_103376f0(int param_1);
void FUN_10337710(undefined4 param_1,undefined1 param_2);
void FUN_10337740(undefined4 param_1,undefined2 param_2);
void FUN_10337770(undefined2 *param_1,undefined2 *param_2);
void FUN_10337840(undefined4 param_1);
undefined4 *FUN_10337860(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_103378b0(undefined4 param_1);
undefined4 *FUN_103378c0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5);
void FUN_10337910(void);
undefined1 _Char_traits_cat<>(void);
void FUN_10337980(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_103379a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_103379c0(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_10337a80(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10337ae0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10337b40(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10337ba0(undefined4 param_1,undefined4 param_2);
void FUN_10337c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10337c50(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
void FUN_10337c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_10337cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10337d10(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3);
void FUN_10337d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void _Destroy_range<>(int param_1,int param_2);
void FUN_10337db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void _Destroy_range<>(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>*param_1,basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_>*param_2,basic_string<char,struct_std::char_traits<char>,class_std::_DebugHeapAllocator<char>_>*param_3);
int FUN_10337e30(int param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5);
undefined4 FUN_10337e90(undefined4 param_1);
undefined4 FUN_10337ea0(void);
undefined4 FUN_10337f10(void);
undefined4 * FUN_10337f60(int param_1);
undefined4 * FUN_10338000(int param_1);
undefined4 * FUN_103380a0(int param_1);
undefined4 * FUN_10338120(int param_1);
undefined4 FUN_103381b0(void);
undefined4 FUN_10338220(void);
undefined4 * FUN_10338270(int param_1);
undefined4 * FUN_10338310(int param_1);
undefined4 * FUN_103383b0(int param_1);
void __thiscall _anon_026BA49F::_ExceptionPtr_normal::~_ExceptionPtr_normal(_ExceptionPtr_normal *this);
void __thiscall _anon_026BA49F::_ExceptionPtr_normal::~_ExceptionPtr_normal(_ExceptionPtr_normal *this);
void __thiscall _anon_026BA49F::_ExceptionPtr_normal::~_ExceptionPtr_normal(_ExceptionPtr_normal *this);
void * FUN_10338520(uint param_1);
void * FUN_10338550(uint param_1);
undefined4 * FUN_10338580(undefined4 *param_1);
int * FUN_103385f0(int *param_1);
void FUN_10338620(void);
void * FUN_10338640(uint param_1);
void * FUN_10338670(uint param_1);
undefined4 * FUN_103386a0(undefined4 *param_1);
void FUN_10338710(undefined4 param_1,undefined4 param_2);
void FUN_10338730(undefined4 param_1,undefined4 param_2);
uint FUN_10338750(undefined4 param_1,uint param_2,uint param_3);
undefined4 FUN_10338830(char *param_1,char *param_2);
void __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,uint param_1);
void FUN_103388a0(void);
void FUN_103388b0(int *param_1);
undefined4 * FUN_10338970(undefined4 param_1);
undefined4 * FUN_103389d0(undefined4 *param_1,undefined4 param_2);
undefined4 FUN_10338a10(undefined4 param_1);
undefined4 FUN_10338a30(undefined4 param_1);
void FUN_10338a50(undefined4 param_1,undefined4 param_2);
void FUN_10338a70(undefined4 param_1);
undefined4 * FUN_10338a90(void);
undefined4 * FUN_10338af0(void);
void FUN_10338b10(void);
undefined4 * FUN_10338b80(void);
void FUN_10338be0(void);
undefined4 * FUN_10338c50(undefined4 param_1);
undefined4 * FUN_10338cd0(int param_1);
undefined4 * FUN_10338da0(undefined4 param_1);
undefined4 * FUN_10338e20(int param_1);
undefined4 * FUN_10338ef0(undefined4 param_1);
undefined4 * FUN_10338f70(int param_1);
undefined4 * FUN_10339040(undefined4 param_1);
undefined4 * FUN_103390c0(int param_1);
void FUN_10339190(void);
void FUN_10339220(void);
int FUN_103392b0(void);
void FUN_10339350(void);
void FUN_10339380(void);
void FUN_10339410(void);
int FUN_103394a0(void);
void FUN_10339540(void);
undefined4 * FUN_10339570(undefined4 param_1);
undefined4 * FUN_103395d0(undefined4 param_1);
undefined4 * FUN_10339630(undefined4 param_1);
void __thiscall _anon_026BA49F::_ExceptionPtr_normal::~_ExceptionPtr_normal(_ExceptionPtr_normal *this);
void __thiscall _anon_026BA49F::_ExceptionPtr_normal::~_ExceptionPtr_normal(_ExceptionPtr_normal *this);
uint FUN_10339730(undefined4 param_1,uint param_2,uint param_3);
void FUN_10339810(void *param_1,size_t param_2,char *param_3);
void FUN_10339830(int param_1);
void __thiscall Concurrency::details::List<Concurrency::details::ListEntry,Concurrency::details::CollectionTypes::NoCount>::Swap(List<Concurrency::details::ListEntry,Concurrency::details::CollectionTypes::NoCount>*this,List<struct_Concurrency::details::ListEntry,class_Concurrency::details::CollectionTypes::NoCount>*param_1);
void FUN_10339880(int param_1);
undefined4 * FUN_103398b0(undefined4 param_1,undefined4 param_2);
void __thiscall std::tr1::shared_ptr<__ExceptionPtr>::reset<__ExceptionPtr>(shared_ptr<__ExceptionPtr> *this,__ExceptionPtr *param_1);
undefined4 FUN_10339990(undefined4 param_1,undefined4 param_2);
undefined4 FUN_103399f0(undefined4 param_1,undefined4 param_2);
void __thiscall std::tr1::shared_ptr<__ExceptionPtr>::reset<__ExceptionPtr>(shared_ptr<__ExceptionPtr> *this,__ExceptionPtr *param_1);
undefined4 FUN_10339ac0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10339b20(undefined4 param_1,undefined4 param_2);
void FUN_10339b80(undefined4 param_1);
undefined4 FUN_10339bb0(undefined4 param_1);
void FUN_10339c20(undefined4 param_1);
void FUN_10339c50(undefined4 param_1);
void FUN_10339c80(undefined4 param_1);
void FUN_10339cc0(undefined4 param_1);
void FUN_10339d00(undefined4 param_1);
void FUN_10339d30(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10339d60(void);
int FUN_10339d70(int param_1,int param_2,int param_3);
void FUN_10339e30(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10339e70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10339eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * FUN_10339ed0(void *param_1,int param_2,int param_3);
void FUN_10339f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * FUN_10339f30(void *param_1,int param_2,int param_3);
void FUN_10339f80(int param_1,int param_2,int param_3);
int FUN_1033a080(int param_1,int param_2,int param_3);
void FUN_1033a0c0(undefined4 param_1);
void FUN_1033a100(undefined4 param_1);
void FUN_1033a140(undefined4 param_1,undefined4 param_2);
void FUN_1033a1c0(void);
void FUN_1033a1d0(undefined4 *param_1,undefined4 *param_2);
undefined4 FUN_1033a200(void);
undefined4 * FUN_1033a220(undefined4 param_1);
undefined4 * FUN_1033a2a0(int param_1);
undefined4 * FUN_1033a370(undefined4 param_1);
undefined4 * FUN_1033a3f0(int param_1);
undefined4 * FUN_1033a4c0(undefined4 param_1);
undefined4 * FUN_1033a4e0(undefined4 param_1);
undefined4 * FUN_1033a560(undefined4 param_1);
void FUN_1033a5e0(undefined4 param_1);
void FUN_1033a620(undefined4 *param_1);
void FUN_1033a650(undefined4 param_1);
void FUN_1033a690(undefined4 param_1);
void FUN_1033a6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033a710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033a750(undefined4 param_1);
void FUN_1033a790(int param_1,int param_2,int *param_3);
void FUN_1033a7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033a7f0(uint param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033a830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033a890(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033a8f0(undefined4 param_1,undefined4 param_2);
void FUN_1033a910(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033a950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033a990(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1);
undefined4 FUN_1033aad0(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_1033ab10(undefined4 param_1);
undefined4 * FUN_1033abe0(undefined4 param_1);
void FUN_1033acb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033acf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033ad30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033ad70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void FUN_1033b090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void FUN_1033b3b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033b3f0(undefined1 *param_1,int param_2,undefined1 *param_3);
void FUN_1033b420(undefined2 *param_1,int param_2,undefined2 *param_3);
int FUN_1033b450(void *param_1,int param_2,void *param_3);
void * FUN_1033b490(void *param_1,int param_2,void *param_3);
void FUN_1033b4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void FUN_1033b800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
undefined1 FUN_1033bb20(void);
_Ref_count_base * FUN_1033bb30(undefined4 param_1);
_Ref_count_base * __thiscall std::tr1::_Ref_count_base::_Ref_count_base(_Ref_count_base *this);
void FUN_1033bbd0(void);
void Destroy(void);
void * FUN_1033bc30(uint param_1);
void FUN_1033bc60(void);
_Ref_count_base * FUN_1033bc80(undefined4 param_1);
void FUN_1033bcf0(void);
void * FUN_1033bd10(uint param_1);
void * FUN_1033bd40(uint param_1);
void FID_conflict:~bad_alloc(void);
void FID_conflict:~bad_alloc(void);
void FID_conflict:StaticDelete(int param_1);
void FID_conflict:StaticDelete(int param_1);
void FUN_1033be90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void FUN_1033c1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void FUN_1033c4d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void FUN_1033c7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033c820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6);
void FUN_1033cb40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033cb70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033cba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033cbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033cc00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033cc30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * FUN_1033cc60(uint param_1);
void * FUN_1033cc90(uint param_1);
void FUN_1033ccc0(void);
void FUN_1033cd30(void);
void FUN_1033cda0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033cdd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033ce00(void);
void FUN_1033ce10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033ce40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033ce70(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033ce90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1033cec0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cee0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cf00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cf20(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cf40(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cf60(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cf80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cfa0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cfc0(void);
void FUN_1033cfd0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033cff0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033d010(undefined4 param_1);
void FUN_1033d030(void *param_1);
void FUN_1033d050(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033d070(undefined4 *param_1);
void FUN_1033d090(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1);
void FUN_1033d0b0(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1);
void FUN_1033d0d0(undefined4 param_1);
void FUN_1033d100(undefined4 param_1);
void FUN_1033d130(undefined4 param_1);
uint __thiscall ATL::CCRTHeap::GetSize(CCRTHeap *this,void *param_1);
void FUN_1033d180(undefined4 param_1);
void FUN_1033d1a0(undefined4 param_1);
void FUN_1033d1c0(undefined4 param_1);
void FUN_1033d1e0(undefined4 param_1);
void FUN_1033d200(undefined4 *param_1);
void FUN_1033d270(undefined4 param_1);
void FUN_1033d370(undefined4 param_1);
undefined4 FUN_1033d470(undefined4 *param_1);
undefined4 FUN_1033d490(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1);
undefined4 FUN_1033d4b0(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1);
undefined1 FUN_1033d4d0(void);
undefined4 FUN_1033d4e0(void);
size_t __cdecl __msize(void *_Memory);
CMFCScanlinerBitmap * __thiscall CMFCScanlinerBitmap::CMFCScanlinerBitmap(CMFCScanlinerBitmap *this);
void __thiscall Concurrency::details::StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>::Reinitialize(StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>*this);
void FID_conflict:~CAtlWinModule(void);
void FUN_1033d710(void);
void FUN_1033d740(char param_1);
void FUN_1033d8e0(void);
void FUN_1033d980(undefined4 param_1);
void FUN_1033d9f0(undefined4 param_1,undefined4 param_2);
void FUN_1033daf0(undefined4 param_1,undefined4 param_2);
void FUN_1033db60(undefined4 param_1);
void FUN_1033dbd0(undefined4 param_1,undefined4 param_2);
void FUN_1033dc40(undefined4 param_1);
void FUN_1033dcb0(undefined4 param_1,undefined4 param_2);
void FUN_1033dd20(undefined4 param_1);
void FUN_1033dd90(undefined4 param_1,undefined4 param_2);
void FUN_1033de00(int param_1,int param_2);
void FUN_1033df20(undefined4 param_1);
void FUN_1033e020(__time32_t *param_1);
__time64_t FUN_1033e040(__time64_t *param_1);
void FUN_1033e060(void);
void FID_conflict:~bad_alloc(void);
void FUN_1033e140(void);
void FUN_1033e1a0(void);
void FID_conflict:~numpunct<wchar_t>(void);
void * FUN_1033e220(uint param_1);
void FUN_1033e250(void);
void FUN_1033e270(void);
void FUN_1033e290(void);
void FUN_1033e300(void);
void FUN_1033e330(void);
void FUN_1033e3a0(undefined4 param_1,undefined4 param_2);
void FUN_1033e3d0(void *param_1);
void FUN_1033e3f0(void);
void FUN_1033e420(undefined4 param_1,undefined4 param_2);
fpos<int> * FUN_1033e450(fpos<int> *param_1,int param_2,int param_3,uint param_4);
undefined4 FUN_1033e650(void);
undefined4 FUN_1033e670(void);
fpos<int> * FUN_1033e690(fpos<int> *param_1);
int FUN_1033e7f0(void);
void FUN_1033e810(void);
int FUN_1033e910(void);
void FUN_1033e930(void);
int __cdecl std::char_traits<char>::not_eof(int *param_1);
int FUN_1033ea50(int param_1);
void FUN_1033ed00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int __thiscall std::basic_streambuf<char,std::char_traits<char>_>::sputc(basic_streambuf<char,std::char_traits<char>_> *this,char param_1);
char * __thiscall std::basic_streambuf<char,std::char_traits<char>_>::epptr(basic_streambuf<char,std::char_traits<char>_> *this);
char * __thiscall std::basic_streambuf<char,std::char_traits<char>_>::_Pninc(basic_streambuf<char,std::char_traits<char>_> *this);
void FUN_1033edf0(void);
int FUN_1033ee80(int param_1);
void FUN_1033ef70(void);
undefined4 FUN_1033ef90(undefined4 param_1);
void FUN_1033eff0(void);
void FUN_1033f010(void);
void FUN_1033f030(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1033f070(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void allocate(uint param_1);
undefined4 FUN_1033f0d0(void);
undefined4 * FUN_1033f120(void);
undefined4 FUN_1033f180(void);
undefined4 * FUN_1033f1b0(undefined4 param_1);
undefined4 FUN_1033f230(void);
undefined4 FUN_1033f260(uint param_1);
undefined4 FUN_1033f2e0(uint param_1);
void FUN_1033f360(void);
void FUN_1033f380(void);
allocator<char> * __thiscall std::allocator<char>::allocator<char>(allocator<char> *this,allocator<char> *param_1);
void FUN_1033f410(undefined4 param_1);
void FUN_1033f430(void);
void FUN_1033f450(void);
void FUN_1033f4d0(undefined4 param_1);
undefined4 max_size(void);
undefined4 max_size(void);
int FUN_1033f550(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1);
undefined4 * FUN_1033fa30(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_1033faa0(void);
char * FUN_1033fb00(void);
void * FUN_1033fb10(uint param_1);
void FID_conflict:~bad_alloc(void);
char * FUN_1033fb90(void);
void * FUN_1033fba0(uint param_1);
void FID_conflict:~bad_alloc(void);
void FUN_1033fc20(undefined4 param_1);
undefined4 * FUN_1033fcb0(int param_1);
undefined4 * FUN_1033fd50(int param_1);
undefined4 * FUN_1033fdf0(int param_1);
exception * FID_conflict:bad_exception(exception *param_1);
void * FUN_1033fed0(uint param_1);
void * FUN_1033ff00(uint param_1);
void FUN_1033ff30(void);
void FUN_1033ffc0(void);
int FUN_10340050(void);
void FUN_103400f0(void);
undefined4 FUN_10340120(undefined4 param_1);
undefined4 __thiscall std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::end(basic_string<char,std::char_traits<char>,std::allocator<char>_> *this);
undefined4 FUN_10340180(undefined4 param_1,undefined4 param_2);
undefined4 FUN_103401e0(undefined4 param_1,undefined4 param_2);
void FUN_10340240(void);
undefined4 * FUN_10340400(undefined4 param_1,undefined4 param_2);
char * FUN_10340470(void);
void * FUN_10340480(uint param_1);
void FID_conflict:~bad_alloc(void);
int FUN_10340500(int param_1,undefined4 param_2);
int FUN_103405a0(int param_1,undefined4 param_2);
int FUN_10340640(int param_1,undefined4 param_2);
void _Destroy_range<>(int param_1,int param_2);
void FUN_10340710(uint param_1);
void FUN_10340760(uint param_1);
void FUN_103407b0(void);
void FUN_10340820(void);
undefined4 FUN_10340870(undefined4 param_1,undefined4 param_2);
void FUN_103408b0(uint param_1);
int FUN_10340990(void);
int FUN_103409d0(uint param_1);
void FUN_10340a00(undefined4 param_1);
int _String_const_iterator<>(void);
undefined4 * FUN_10340a40(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_10340a80(undefined1 param_1);
undefined4 * FUN_10340b20(undefined4 param_1);
undefined4 * FUN_10340ba0(int param_1);
bool FUN_10340c70(void);
undefined4 FUN_10340ca0(undefined4 param_1);
undefined4 *FUN_10340ce0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_10340d50(undefined4 param_1,int param_2,uint param_3,undefined4 param_4);
void FUN_103411a0(void);
undefined4 FUN_103411b0(void);
undefined4 FUN_103411c0(undefined1 param_1);
int FUN_10341220(void);
int FUN_10341260(void);
undefined4 FUN_10341280(undefined4 param_1);
undefined4 FUN_103412a0(undefined4 param_1,undefined4 param_2);
undefined4 * FUN_103412e0(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_10341320(undefined4 *param_1);
undefined4 FUN_103413d0(undefined4 param_1);
undefined4 * FUN_103413f0(undefined4 *param_1);
undefined4 FUN_10341490(undefined4 param_1);
undefined4 FID_conflict:begin(undefined4 param_1);
int FUN_10341520(void);
int FUN_10341560(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_10341590(undefined4 param_1);
int * FUN_103415b0(int *param_1);
int FUN_10341600(void);
undefined4 FUN_10341640(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10341660(undefined4 param_1);
undefined4 FUN_10341680(undefined4 param_1);
bool FUN_103416a0(undefined4 param_1);
undefined1 * FUN_103416d0(void);
undefined4 FUN_10341710(void);
undefined4 _Vector_iterator<>(undefined4 param_1,undefined4 param_2);
int * FUN_10341760(int param_1);
int * FUN_10341870(int param_1);
undefined4 FUN_103418d0(int *param_1);
undefined4 FUN_10341910(void);
void FUN_10341930(locale *param_1);
int * FUN_10341980(int param_1,int param_2);
locale * FUN_103419c0(locale *param_1);
int FUN_10341a90(void);
int FUN_10341b90(void);
undefined1 FUN_10341c30(void);
void FUN_10341c50(uint param_1);
int FUN_10341df0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char param_2,undefined4 param_3,byte param_4);
void FUN_10341fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_10342000(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,int param_5,undefined1 param_6);
void FUN_10342a90(byte param_1,undefined4 param_2,undefined4 param_3);
int * FUN_10342b10(void);
void FUN_10342b70(void);
void FUN_10342c00(undefined4 param_1);
void FUN_10342c90(int param_1,undefined4 param_2);
undefined4 * FUN_10342da0(undefined4 param_1,undefined4 param_2);
char * FUN_10342e10(void);
void * FUN_10342e20(uint param_1);
void FID_conflict:~bad_alloc(void);
void FUN_10342ea0(int param_1,undefined4 param_2);
void FUN_10342fb0(int param_1,undefined4 param_2);
void FUN_103430c0(undefined1 param_1);
void FUN_10343110(void);
void FUN_10343120(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void DoMessageBox(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_103431c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_103431f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10343260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * FUN_103432a0(int param_1);
undefined4 * FUN_10343340(int param_1);
undefined4 * FUN_103433e0(int param_1);
void * FUN_10343460(uint param_1);
void * FUN_10343490(uint param_1);
void * FUN_103434c0(uint param_1);
void FUN_103434f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10343540(undefined4 param_1);
void FUN_10343560(uint param_1,undefined1 param_2);
void FUN_103435f0(undefined4 param_1,undefined4 param_2);
bool FUN_10343610(undefined4 param_1);
bool FUN_10343640(undefined4 param_1);
void FUN_10343670(void);
void FUN_10343700(void);
int FUN_10343790(void);
void FUN_10343830(void);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *FUN_10343860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10343990(uint param_1,char param_2);
undefined4 FUN_103439d0(undefined4 param_1);
undefined4 FUN_10343a10(undefined4 param_1);
void FUN_10343ab0(void);
void FUN_10343b30(undefined4 param_1,undefined4 param_2);
bool FUN_10343c10(int *param_1);
bool FUN_10343c60(int *param_1);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *FUN_10343ca0(uint param_1,uint param_2,char *param_3,uint param_4);
undefined4 FUN_10343e30(void);
uint FUN_10343f30(uint param_1);
void FUN_10344010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10344040(undefined4 param_1);
int FUN_10344060(void);
uint FUN_103440a0(int param_1);
void FUN_103440b0(void);
void FUN_10344130(uint param_1);
int FUN_103441d0(void);
int FUN_10344210(uint param_1);
undefined4 *FUN_10344240(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int FUN_103442b0(int param_1);
undefined4 * FUN_103442e0(undefined4 *param_1,undefined4 param_2);
void FUN_10344320(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4);
undefined4 FUN_10344660(undefined4 param_1);
int FUN_10344680(void);
int FUN_103446c0(int param_1,int param_2,undefined4 param_3);
int * FUN_103446f0(int param_1);
uint * FUN_10344750(uint *param_1,uint *param_2);
void FUN_10344780(undefined1 param_1);
undefined4 *FUN_103447e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10344840(ctype<char> *param_1,char param_2);
undefined4 *FUN_10344860(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int *param_4,undefined4 param_5);
void FUN_10344920(undefined4 param_1,byte param_2,byte param_3);
void FUN_10344940(undefined1 param_1,undefined1 param_2);
undefined4 *FUN_10344970(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_10344a10(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10344a70(undefined4 param_1,undefined4 param_2);
void FUN_10344ad0(undefined4 param_1);
void FUN_10344b60(void);
void FUN_10344b70(undefined4 param_1,int param_2,basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_103451d0(void);
int __thiscall std::ios_base::width(ios_base *this,int param_1);
undefined1 FUN_10345220(void);
int * FUN_10345240(int *param_1,char param_2);
int sentry(undefined4 param_1);
void FUN_10345550(void);
undefined1 FUN_103455c0(void);
void FUN_103455e0(void);
void FUN_10345660(void);
void FUN_103456a0(undefined4 param_1,int param_2,basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_3,undefined4 param_4,undefined4 param_5);
void FUN_10345d00(undefined4 param_1,int param_2,basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_3,undefined4 param_4,undefined4 param_5);
int FUN_10346360(int param_1,int param_2,int param_3);
void FUN_103463c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void _Destroy_range<>(int param_1,int param_2,undefined4 param_3);
void FUN_10346440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_10346480(int param_1,int param_2,undefined4 param_3);
undefined4 FUN_10346540(undefined4 param_1);
void FUN_103465c0(void);
undefined4 FUN_10346600(undefined4 param_1);
void FUN_10346680(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void DoMessageBox(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10346720(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10346750(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_103467c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 * FUN_10346800(int param_1);
undefined4 * FUN_103468a0(int param_1);
undefined4 * FUN_10346940(int param_1);
void __thiscall std::basic_iostream<char,std::char_traits<char>_>::`vbase_destructor'(basic_iostream<char,std::char_traits<char>_> *this);
undefined4 * FUN_103469f0(undefined4 *param_1);
void * FUN_10346a60(uint param_1);
void * FUN_10346a90(uint param_1);
void FUN_10346ac0(void);
void ~basic_ostream<>(void);
int FID_conflict:`scalar_deleting_destructor'(uint param_1);
void FID_conflict:`vbase_destructor'(void);
undefined4 * FUN_10346bd0(undefined4 *param_1);
void FID_conflict:~bad_alloc(void);
void FUN_10346c90(void);
undefined4 FUN_10346ce0(undefined4 param_1);
undefined4 FUN_10346d00(void);
void FUN_10346d30(undefined4 param_1,undefined4 param_2);
int FUN_10346d50(void);
undefined4 * FUN_10346d80(undefined4 param_1);
undefined4 * FUN_10346e00(int param_1);
void FUN_10346ed0(void);
void FUN_10346f60(void);
int FUN_10346ff0(void);
void FUN_10347090(void);
int FUN_103470c0(undefined4 param_1,int param_2);
basic_ostream<char,std::char_traits<char>_> * __thiscall std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>(basic_ostream<char,std::char_traits<char>_> *this,basic_streambuf<char,std::char_traits<char>_> *param_1,bool param_2);
void * __thiscall std::basic_iostream<char,std::char_traits<char>_>::`scalar_deleting_destructor'(basic_iostream<char,std::char_traits<char>_> *this,uint param_1);
void FUN_10347270(void);
void FUN_10347290(ios_base *param_1,int param_2);
void __thiscall std::ios_base::exceptions(ios_base *this,int param_1);
undefined4 FUN_103473d0(uint param_1);
locale * FUN_10347400(locale *param_1,undefined4 param_2);
locale * FUN_103474b0(locale *param_1,undefined4 param_2);
int * FUN_10347550(int *param_1);
void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1);
locale * FUN_10347610(locale *param_1,undefined4 param_2);
undefined4 FUN_103476b0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10347710(undefined4 param_1,undefined4 param_2);
void FUN_10347770(undefined4 param_1,undefined4 *param_2);
void FUN_10347790(void);
uint * FUN_10347830(uint *param_1,uint *param_2);
void FUN_10347860(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char *param_2,uint param_3,uint param_4,char param_5,uint param_6,char param_7,char param_8);
void FUN_10347990(undefined4 param_1,undefined4 param_2);
int * FUN_103479b0(int *param_1,char *param_2);
void FUN_10347c20(undefined4 param_1,undefined4 param_2);
void FUN_10347c50(undefined4 param_1,undefined2 *param_2);
int * FUN_10347c70(ushort param_1);
undefined4 FUN_10347e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,undefined4 param_7);
int FUN_10347e60(undefined4 param_1);
undefined4 FUN_10347e90(void);
facet * FUN_10347eb0(locale *param_1);
undefined4 FUN_10347fa0(int *param_1);
void FID_conflict:money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>(uint param_1);
void FUN_103480e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ios_base *param_5,undefined1 param_6,char param_7);
void FUN_103483b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,undefined4 param_7);
void FUN_10348450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,undefined4 param_7);
void FUN_103484f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8);
void FUN_10348590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8);
void FUN_10348630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,double param_7);
void FUN_10348860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,double param_7);
void FUN_10348a90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,undefined4 param_7);
void * FUN_10348b10(uint param_1);
void FUN_10348b40(void);
undefined1 * Ffmt(undefined4 param_1,undefined1 *param_2,char param_3,uint param_4);
void FUN_10348c70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,ios_base *param_6,undefined1 param_7,char *param_8,uint param_9,uint param_10,uint param_11,uint param_12);
undefined1 * Ifmt(undefined4 param_1,undefined1 *param_2,char *param_3,uint param_4);
void FUN_10349500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,ios_base *param_6,undefined1 param_7,char *param_8,uint param_9);
undefined4 *FUN_103498b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char *param_6,int param_7);
undefined4 *FUN_10349910(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char param_6,int param_7);
undefined4 *FUN_10349960(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,char *param_6,int param_7);
undefined4 *FUN_103499d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,void *param_6,size_t param_7,char param_8);
ostreambuf_iterator<char,struct_std::char_traits<char>_> * __thiscall std::ostreambuf_iterator<char,std::char_traits<char>_>::operator=(ostreambuf_iterator<char,std::char_traits<char>_> *this,char param_1);
int FUN_10349b40(int param_1,int param_2,int param_3);
void FUN_10349b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_10349ba0(int param_1,int param_2,int param_3);
undefined4 FUN_10349c00(undefined4 param_1,undefined4 param_2);
undefined4 FUN_10349c20(undefined4 param_1);
void FUN_10349ca0(void);
undefined4 FUN_10349cf0(undefined4 param_1);
void FUN_10349d70(undefined4 param_1);
void * FUN_10349d90(void *param_1,int param_2,void *param_3);
void FUN_10349de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_10349e30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_10349e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_10349ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_10349ec0(void);
void FUN_10349fb0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1034a030(undefined4 param_1,undefined1 param_2);
int * FUN_1034a090(undefined4 param_1);
undefined1 FUN_1034a230(undefined1 param_1);
void FUN_1034a260(undefined4 param_1);
undefined4 FUN_1034a280(char param_1);
undefined4 FUN_1034a2e0(void);
undefined4 FUN_1034a300(undefined4 param_1,undefined4 param_2);
bool FUN_1034a340(undefined4 param_1);
undefined4 * FUN_1034a370(undefined4 param_1);
undefined4 * FUN_1034a3f0(int param_1);
void FUN_1034a4c0(int param_1);
undefined4 FUN_1034a4e0(void);
undefined1 FUN_1034a500(int param_1);
void FUN_1034a540(void);
void FUN_1034a5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_1034a610(int param_1,int param_2,int param_3);
undefined4 select_on_container_copy_construction(undefined4 param_1,undefined4 param_2);
undefined4 FUN_1034a660(undefined4 param_1);
undefined4 FUN_1034a6c0(undefined4 param_1);
undefined4 FUN_1034a720(undefined4 *param_1);
void FUN_1034a730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void * FUN_1034a750(void *param_1,int param_2,int param_3);
void FUN_1034a7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 * FUN_1034a7e0(undefined4 param_1,undefined1 param_2);
void FUN_1034a860(void);
undefined4 FUN_1034a880(void);
undefined4 FUN_1034a8a0(void);
void FUN_1034a8c0(void);
int FUN_1034a930(int param_1,int param_2,int param_3);
void FUN_1034a9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_1034aa50(uint param_1,undefined4 param_2,undefined4 param_3);
undefined4 * FUN_1034aa90(undefined4 param_1,undefined1 param_2);
_Ref_count_base * FUN_1034ab60(undefined4 param_1);
void FUN_1034abd0(void);
void * __thiscall std::tr1::_Ref_count_del_alloc<__ExceptionPtr,void_(__cdecl*)(__ExceptionPtr*),_DebugMallocator<int>_>::_Get_deleter(_Ref_count_del_alloc<__ExceptionPtr,void_(__cdecl*)(__ExceptionPtr*),_DebugMallocator<int>_>*this,type_info *param_1);
void * FUN_1034ac30(uint param_1);
void FID_conflict:~bad_alloc(void);
void * FUN_1034acb0(void *param_1,int param_2,void *param_3);
void FUN_1034ad00(undefined4 *param_1,int param_2,undefined4 *param_3);
undefined4 FUN_1034ad30(undefined4 param_1);
void FUN_1034add0(code *param_1,undefined1 *param_2);
undefined4 FUN_1034ae80(undefined4 param_1,int param_2);
void FUN_1034aeb0(void);
undefined4 FUN_1034af10(void);
void FUN_1034b03f(void);
void FUN_1034b061(void);
uint FUN_1034b0ae(int *param_1,uint param_2);
undefined4 FUN_1034b81d(int param_1);
size_t FUN_1034b8ca(void *param_1,uint param_2);
void FUN_1034b92d(void);
char * FUN_1034b9ab(uint param_1);
char * FUN_1034baf0(void);
void FUN_1034bb7a(void);
char FUN_1034bc5e(int *param_1,int param_2);
undefined4 FUN_1034c43f(int param_1);
undefined4 FUN_1034c4c6(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,char *param_7,int param_8);
void FUN_1034c696(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_1034c6b7(int param_1);
undefined4 FUN_1034c712(int param_1,uint param_2,char *param_3,int param_4);
void FUN_1034c7cc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_1034c7e3(void);
undefined4 FUN_1034c800(void);
int FUN_1034c8d8(int *param_1,int param_2);
undefined4 FUN_1034db40(int param_1);
uint FUN_1034db7e(uint param_1);
undefined4 FUN_1034ddc8(undefined4 param_1,int param_2,undefined4 param_3);
uint FUN_1034dde2(uint param_1,byte *param_2,uint param_3);
void FUN_1034e002(void);
void FUN_1034e060(int param_1);
void FUN_1034e110(void);
void FUN_1034e2cd(int param_1);
void FUN_1034e389(void);
void FUN_1034e823(int param_1,int param_2,int param_3);
void FUN_1034ea59(int param_1,int param_2);
void FUN_1034ee0b(void);
uint FUN_1034ee4d(uint param_1,int param_2);
void FUN_1034ee6c(void);
void FUN_1034eed9(void);
void FUN_1034ef30(int param_1);
void FUN_1034efa8(int param_1);
void FUN_1034f00c(int param_1);
void FUN_1034f083(int *param_1);
void FUN_1034f26b(void);
void FUN_1034f2cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_1034f357(int param_1);
void FUN_1034f51e(int *param_1,int param_2,int param_3,int param_4);
void FUN_1034f713(undefined4 param_1,int param_2,int param_3);
void FUN_1034f724(undefined4 param_1,void *param_2);
void FUN_1034f72f(int *param_1,uint param_2);
void FUN_1034fb0b(int param_1,int param_2,uint param_3,int *param_4,uint *param_5,ushort *param_6);
void FUN_1034fede(void);
void thunk_FUN_10350a53(size_t param_1);
void FUN_1034fef5(void);
void FUN_1034ff0d(void);
void FUN_1034ff22(void);
void FUN_1034ff2b(void);
void __thiscall std::ios_base::_Tidy(ios_base *this);
void __cdecl std::ios_base::_Addstd(ios_base *param_1);
void __cdecl std::ios_base::_Ios_base_dtor(ios_base *param_1);
_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this);
_Lockit * __thiscall std::_Lockit::_Lockit(_Lockit *this,int param_1);
void FUN_10350081(void);
void __thiscall std::_Fac_node::~_Fac_node(_Fac_node *this);
void __Deletegloballocale(int *param_1);
void __cdecl tidy_global(void);
undefined4 FUN_103500ee(void);
void __cdecl std::locale::_Setgloballocale(void *param_1);
void __cdecl std::locale::_Locimp::_Locimp_dtor(_Locimp *param_1);
void __Fac_tidy(void);
void __cdecl std::locale::facet::facet_Register(facet *param_1);
void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1);
_Locimp * __thiscall std::locale::_Locimp::_Locimp(_Locimp *this,bool param_1);
void __thiscall std::locale::_Locimp::~_Locimp(_Locimp *this);
void * __thiscall std::locale::_Locimp::`scalar_deleting_destructor'(_Locimp *this,uint param_1);
_Locimp * __cdecl std::locale::_Init(void);
void __cdecl std::_Locinfo::_Locinfo_ctor(_Locinfo *param_1,char *param_2);
void FUN_1035039e(void);
void FUN_103503dd(void);
int __cdecl __Tolower(int param_1,_Ctypevec *param_2);
_Ctypevec * __cdecl __Getctype(_Ctypevec *__return_storage_ptr__);
int __cdecl __Toupper(int param_1,_Ctypevec *param_2);
uint __Stoulx(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
_Collvec __cdecl __Getcoll(void);
uint __Stolx(byte *param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
float10 __Stofx(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
float10 FUN_10350907(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4);
float10 thunk_FUN_10350907(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4);
bool thunk_FUN_10357afc(void);
void FUN_10350978(undefined4 param_1);
void FUN_10350983(undefined4 param_1);
void FUN_1035098e(undefined4 param_1);
void FUN_10350999(undefined4 param_1);
void __cdecl _Atexit(_func_void *param_1);
void FUN_103509e9(void);
bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this);
void FUN_10350a53(size_t param_1);
void __cdecl _free(void *_Memory);
void * __cdecl _memset(void *_Dst,int _Val,size_t _Size);
void * __cdecl _memcpy(void *_Dst,void *_Src,size_t _Size);
void __cdecl _free(void *_Memory);
void * __cdecl _memmove(void *_Dst,void *_Src,size_t _Size);
void __fastcall __security_check_cookie(int param_1);
int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size);
void _JumpToContinuation(void *param_1,EHRegistrationNode *param_2);
void FID_conflict:_CallMemberFunction1(undefined4 param_1,code *UNRECOVERED_JUMPTABLE);
void _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2);
undefined4 FID_conflict:___CxxFrameHandler3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int __cdecl _CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7);
_EXCEPTION_DISPOSITION __cdecl TranslatorGuardHandler(EHExceptionRecord *param_1,TranslatorGuardRN *param_2,void *param_3,void *param_4);
_s_TryBlockMapEntry * __cdecl _GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5);
undefined4 * __CreateFrameInfo(undefined4 *param_1,undefined4 param_2);
undefined4 __IsExceptionObjectToBeDestroyed(int param_1);
void __FindAndUnlinkFrame(void *param_1);
void * __cdecl _CallCatchBlock2(EHRegistrationNode *param_1,_s_FuncInfo *param_2,void *param_3,int param_4,ulong param_5);
void __alloca_probe(void);
uint * FUN_10352cb0(uint *param_1,uint *param_2);
uint * FUN_10352cc0(uint *param_1,uint *param_2);
short * FUN_10352da8(short *param_1,short *param_2);
char * __cdecl _strchr(char *_Str,int _Val);
char * __cdecl _strrchr(char *_Str,int _Ch);
wchar_t * __cdecl _wcschr(wchar_t *_Str,wchar_t _Ch);
wchar_t * __cdecl _wcsrchr(wchar_t *_Str,wchar_t _Ch);
size_t __cdecl _strlen(char *_Str);
char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count);
int FUN_103530d4(short *param_1);
wchar_t * __cdecl _wcsncpy(wchar_t *_Dest,wchar_t *_Source,size_t _Count);
int __cdecl _sprintf(char *_Dest,char *_Format,...);
int __cdecl _sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...);
void __thiscall type_info::~type_info(type_info *this);
void * __thiscall type_info::`scalar_deleting_destructor'(type_info *this,uint param_1);
bool __thiscall type_info::operator==(type_info *this,type_info *param_1);
void FUN_10353203(void);
exception * __thiscall std::exception::exception(exception *this,char **param_1);
void __thiscall std::exception::exception(exception *this,char **param_1,int param_2);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
void __thiscall exception::~exception(exception *this);
void FUN_103532f5(void);
void FUN_1035330e(exception *param_1);
void FUN_10353326(void);
void FUN_10353331(byte param_1);
void FUN_1035334d(byte param_1);
errno_t __cdecl _memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void __CxxThrowException@8(undefined4 param_1,byte *param_2);
void __cdecl _free(void *_Memory);
void FUN_103534b4(void);
void FUN_103534ec(undefined4 param_1);
void __cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_103535f2(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
void FUN_10353616(void);
errno_t __cdecl _memmove_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
lconv * __cdecl _localeconv(void);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,localeinfo_struct *param_1);
__uint64 __cdecl strtoxq(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
longlong __cdecl __strtoi64(char *_String,char **_EndPtr,int _Radix);
ulonglong __cdecl __strtoui64(char *_String,char **_EndPtr,int _Radix);
void __cfltcvt_init(void);
void __cdecl __fpmath(int param_1);
void * __cdecl _memchr(void *_Buf,int _Val,size_t _MaxCount);
void * FUN_10353b3d(void *param_1);
undefined4 FUN_10353b5c(undefined4 param_1);
_onexit_t __cdecl __onexit(_onexit_t _Func);
void FUN_10353c7a(void);
int __cdecl _atexit(_func_4879 *param_1);
void __cdecl __amsg_exit(int param_1);
void FUN_10353cb6(void);
void __cdecl ___crtExitProcess(int param_1);
void FUN_10353cf1(void);
void FUN_10353cfa(void);
void FUN_10353d03(undefined4 *param_1);
void __initterm_e(undefined4 *param_1,undefined4 *param_2);
undefined4 __get_osplatform(int *param_1);
undefined4 __get_winmajor(undefined4 *param_1);
int __cdecl __cinit(int param_1);
void FUN_10353e40(int param_1,int param_2,int param_3);
void FUN_10353f0d(void);
void FUN_10353f22(undefined4 param_1);
void __cdecl __exit(int _Code);
void __cdecl __cexit(void);
void __cdecl __init_pointers(void);
void FUN_10353f9f(ulong param_1);
int __cdecl _rand(void);
undefined8 __allrem(uint param_1,uint param_2,uint param_3,uint param_4);
longlong __allshl(void);
void FUN_103540af(undefined4 param_1);
undefined4 FUN_103540b9(undefined4 param_1);
int __cdecl __callnewh(size_t _Size);
__time64_t __cdecl __time64(__time64_t *_Time);
undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3);
FILE * __cdecl __fsopen(char *_Filename,char *_Mode,int _ShFlag);
void FUN_103543a0(void);
FILE * __cdecl _fopen(char *_Filename,char *_Mode);
FILE * __cdecl __wfsopen(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag);
void FUN_10354479(void);
FILE * __cdecl __wfopen(wchar_t *_Filename,wchar_t *_Mode);
longlong __allmul(uint param_1,int param_2,uint param_3,int param_4);
undefined8 __alldiv(uint param_1,uint param_2,uint param_3,uint param_4);
errno_t __cdecl __gmtime64_s(tm *_Tm,__time64_t *_Time);
tm * __cdecl __gmtime64(__time64_t *_Time);
undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4);
undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4);
void __cdecl __freea(void *_Memory);
void FUN_103548f3(void);
void FID_conflict:__store_num(int param_1);
undefined4 FUN_1035498c(undefined4 param_1,int *param_2,undefined4 param_3,int param_4);
void FUN_10354d72(_locale_t param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,int param_6);
int __Strftime_l(char *param_1,uint param_2,char *param_3,int param_4,int *param_5,localeinfo_struct *param_6);
size_t __cdecl _strftime(char *_Buf,size_t _SizeInBytes,char *_Format,tm *_Tm);
errno_t FUN_1035539b(tm *param_1,uint *param_2);
tm * __cdecl FID_conflict:__localtime64(__time32_t *_Time);
size_t __cdecl _strcspn(char *_Str,char *_Control);
undefined4 __CRT_INIT@12(undefined4 param_1,int param_2,int param_3);
undefined4 _V6_HeapAlloc(uint param_1);
void FUN_10355a0c(void);
void * __cdecl _malloc(size_t _Size);
void __EH_prolog3(int param_1);
void __EH_prolog3_catch(int param_1);
void __EH_epilog3(void);
void ___freetlocinfo(void *param_1);
void ___addlocaleref(int param_1);
int ___removelocaleref(int param_1);
void __copytlocinfo_nolock(void);
int * __updatetlocinfoEx_nolock(void);
pthreadlocinfo __cdecl ___updatetlocinfo(void);
void FUN_10355e73(void);
void __cdecl sync_legacy_variables_lk(void);
void __cdecl __free_locale(_locale_t _Locale);
void FUN_10355f5f(void);
void __strcats(char *param_1,rsize_t param_2,int param_3);
undefined4 ___lc_strtolc(char *param_1,char *param_2);
void ___lc_lctostr(char *param_1,rsize_t param_2,char *param_3);
char * __setlocale_get_all(void);
void __expandlocale(char *param_1,char *param_2,rsize_t param_3,undefined2 *param_4,undefined4 *param_5);
void __setlocale_set_cat(int param_1);
void __setlocale_nolock(int param_1);
char * __cdecl _setlocale(int _Category,char *_Locale);
void FUN_10356a71(void);
void FUN_10356a7d(void);
void FUN_10356aae(void);
int __cdecl __crtLCMapStringA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8,int param_9);
int __cdecl ___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError);
ushort * __cdecl ___pctype_func(void);
int __cdecl __isupper_l(int _C,_locale_t _Locale);
int __cdecl _isupper(int _C);
int __cdecl __islower_l(int _C,_locale_t _Locale);
int __cdecl _islower(int _C);
int __cdecl __isdigit_l(int _C,_locale_t _Locale);
int __cdecl _isdigit(int _C);
int __cdecl __isspace_l(int _C,_locale_t _Locale);
int __cdecl _isspace(int _C);
int __cdecl ___init_ctype(threadlocinfo *_LocInfo);
UINT __cdecl ____lc_codepage_func(void);
uint * ____lc_handle_func(void);
void * __cdecl __malloc_crt(size_t _Size);
void * __cdecl __calloc_crt(size_t _Count,size_t _Size);
void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize);
void * __cdecl __recalloc_crt(void *_Ptr,size_t _Count,size_t _Size);
int FUN_103575a5(int param_1);
undefined * FUN_103575e0(void);
undefined * FUN_103575f3(void);
void FUN_10357606(undefined4 param_1);
int __cdecl __tolower_l(int _C,_locale_t _Locale);
int __cdecl _tolower(int _C);
float10 FUN_10357762(byte *param_1,undefined4 *param_2,localeinfo_struct *param_3);
void FUN_1035787d(undefined4 param_1,undefined4 param_2);
void FUN_1035789b(byte param_1);
undefined4 ___TypeMatch(byte *param_1,byte *param_2,uint *param_3);
void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_10357a23(void);
void ___DestructExceptionObject(int *param_1);
int ___AdjustPointer(int param_1,int *param_2);
bool FUN_10357afc(void);
uchar __cdecl IsInExceptionSpec(EHExceptionRecord *param_1,_s_ESTypeList *param_2);
void __cdecl CallUnexpected(_s_ESTypeList *param_1);
void * __cdecl CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,_s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7);
void FUN_10357cf7(void);
char ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4);
void ___BuildCatchObject(int param_1,int param_2,uint *param_3,int param_4);
void __cdecl CatchIt(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,_s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11);
void __cdecl FindHandlerForForeignException(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8);
void __cdecl FindHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,EHRegistrationNode *param_8);
undefined4 ___InternalCxxFrameHandler(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8);
void __cdecl _abort(void);
undefined4 xtoa_s(uint param_1,uint param_2,int param_3);
errno_t __cdecl __itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
void __cdecl fastzero_I(undefined1 (*param_1) [16],uint param_2);
undefined1 * __VEC_memzero(undefined1 *param_1,undefined4 param_2,uint param_3);
void FUN_1035883b(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 * __VEC_memcpy(undefined4 *param_1,undefined4 *param_2,uint param_3);
void __cdecl ___report_gsfailure(void);
undefined4 FUN_10358aa9(void);
undefined4 FUN_10358b15(void);
void __encoded_null(void);
undefined4 FUN_10358b8c(void);
int FUN_10358c03(void);
void __cdecl __mtterm(void);
void FUN_10358c72(int param_1,int param_2);
void FUN_10358d28(void);
undefined4 * FUN_10358d31(void);
_ptiddata __cdecl __getptd(void);
void __freefls@4(void *param_1);
void FUN_10358ecc(void);
void FUN_10358ed8(void);
void __cdecl __freeptd(_ptiddata _Ptd);
int __cdecl __mtinit(void);
void __cdecl terminate(void);
void __cdecl unexpected(void);
void __cdecl _inconsistency(void);
void __initp_eh_hooks(void);
void __CallSettingFrame@12(undefined4 param_1,undefined4 param_2,int param_3);
int __cdecl __flsbuf(int _Ch,FILE *_File);
void __cdecl write_char(void);
void __cdecl write_multi_char(undefined4 param_1,int param_2);
void FUN_10359373(FILE *param_1,byte *param_2,localeinfo_struct *param_3,wchar_t *param_4);
int __vsnprintf_helper(code *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6);
int __cdecl __vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList);
void __cdecl type_info::_Type_info_dtor(type_info *param_1);
void FUN_10359ebe(void);
int __cdecl _strcmp(char *_Str1,char *_Str2);
errno_t __cdecl _strcpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
void FUN_10359fbd(int param_1);
void __cdecl __FF_MSGBANNER(void);
int __cdecl ___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address);
void FUN_1035a2f0(undefined4 param_1);
undefined4 ___heap_select(void);
int __cdecl __heap_init(void);
void __cdecl __heap_term(void);
int __cdecl __mtinitlocks(void);
void __cdecl __mtdeletelocks(void);
void FUN_1035a4c1(int param_1);
int __cdecl __mtinitlocknum(int _LockNum);
void FUN_1035a590(void);
void __cdecl __lock(int _File);
undefined4 ___sbh_heap_init(void);
void thunk_FUN_1035a636(void);
void FUN_1035a636(int param_1);
void ___sbh_free_block(uint *param_1,int param_2);
undefined4 * ___sbh_alloc_new_region(void);
int ___sbh_alloc_new_group(int param_1);
undefined4 ___sbh_resize_block(uint *param_1,int param_2,int param_3);
int * ___sbh_alloc_block(uint *param_1);
void __SEH_prolog4(undefined4 param_1,int param_2);
void __SEH_epilog4(void);
void FUN_1035b125(void);
undefined4 FUN_1035b12d(void);
void __cdecl setSBCS(threadmbcinfostruct *param_1);
void __cdecl setSBUpLow(threadmbcinfostruct *param_1);
pthreadmbcinfo __cdecl ___updatetmbcinfo(void);
void FUN_1035b3d6(void);
int __cdecl getSystemCP(int param_1);
void FUN_1035b459(undefined4 param_1,int param_2);
int __cdecl __setmbcp(int _CodePage);
void FUN_1035b793(void);
undefined4 ___initmbctable(void);
int __cdecl __isctype_l(int _C,int _Type,_locale_t _Locale);
undefined8 __aulldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
void __cdecl __forcdecpt_l(char *_Buf,_locale_t _Locale);
void __cdecl __cropzeros_l(char *_Buf,_locale_t _Locale);
void __cdecl __fassign_l(int flag,char *argument,char *number,_locale_t param_4);
void __shift(void);
undefined4 __cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6);
void __cftoe_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6);
errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps);
errno_t __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,localeinfo_struct *param_6);
undefined4 __cftof2_l(int param_1,size_t param_2,char param_3,localeinfo_struct *param_4);
void __cftof_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5);
void __cftog_l(double *param_1,undefined1 *param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6);
errno_t __cdecl __cfltcvt_l(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps,_locale_t plocinfo);
errno_t __cdecl __cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps);
void __initp_misc_cfltcvt_tab(void);
void __setdefaultprecision(void);
undefined4 __ms_p5_test_fdiv(void);
void __ms_p5_mp_test_fdiv(void);
size_t __cdecl __msize(void *_Memory);
void FUN_1035c52a(void);
void __RTC_Initialize(void);
BOOL __cdecl __ValidateImageBase(PBYTE pImageBase);
PIMAGE_SECTION_HEADER __cdecl __FindPESection(PBYTE pImageBase,DWORD_PTR rva);
BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget);
void FUN_1035c6bb(void);
undefined4 FUN_1035c6bc(int param_1,undefined4 param_2);
void __initp_misc_winsig(undefined4 param_1);
uint __cdecl siglookup(uint param_1);
_PHNDLR __cdecl ___get_sigabrt(void);
int __cdecl _raise(int _SigNum);
void FUN_1035ca03(void);
void FUN_1035ca3f(undefined4 param_1);
void FUN_1035ca49(undefined4 param_1);
undefined4 ___crtInitCritSecNoSpinCount@8(undefined4 param_1);
undefined4 ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2);
void __local_unwind4(uint *param_1,int param_2,uint param_3);
void FUN_1035cbfe(int param_1);
void __fastcall _EH4_CallFilterFunc(code *param_1);
void __fastcall _EH4_TransferToHandler(code *UNRECOVERED_JUMPTABLE);
void __fastcall _EH4_GlobalUnwind(undefined4 param_1);
void __fastcall _EH4_LocalUnwind(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined * FUN_1035cc7b(void);
void FUN_1035cd8e(int param_1,int param_2);
void FUN_1035cdbc(uint param_1);
void FUN_1035cdf2(int param_1,int param_2);
undefined4 * FUN_1035ce1c(char *param_1,char *param_2,int param_3,undefined4 *param_4);
undefined4 * FUN_1035d0bc(void);
void FUN_1035d1e3(void);
FILE * __cdecl __wopenfile(wchar_t *_Filename,wchar_t *_Mode,int _ShFlag,FILE *_File);
tm * __cdecl ___getgmtimebuf(void);
errno_t __cdecl __get_daylight(int *_Daylight);
errno_t __cdecl __get_dstbias(long *_Daylight_savings_bias);
undefined4 FUN_1035d528(undefined4 *param_1);
undefined4 * FUN_1035d55c(void);
undefined4 * FUN_1035d562(void);
undefined4 * FUN_1035d568(void);
undefined * FUN_1035d56e(void);
void FUN_1035d574(void);
void FUN_1035d823(void);
int __cdecl cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9);
bool __isindst_nolock(void);
void __cdecl ___tzset(void);
void FUN_1035dca6(void);
int __cdecl __isindst(tm *_Time);
void FUN_1035dce7(void);
int __cdecl ___ascii_stricmp(char *_Str1,char *_Str2);
int __cdecl __stricmp_l(char *_Str1,char *_Str2,_locale_t _Locale);
int __cdecl __stricmp(char *_Str1,char *_Str2);
int __cdecl __isleadbyte_l(int _C,_locale_t _Locale);
int __cdecl _isleadbyte(int _C);
uint __alloca_probe_16(void);
uint __alloca_probe_8(void);
int __cdecl __ioinit(void);
void __cdecl __ioterm(void);
int __cdecl __setenvp(void);
void __cdecl parse_cmdline(undefined4 *param_1,byte *param_2,int *param_3);
int __cdecl __setargv(void);
LPVOID __cdecl ___crtGetEnvironmentStringsA(void);
void __cdecl ___security_init_cookie(void);
uint __get_lc_time(void);
void ___free_lc_time(undefined4 *param_1);
int __cdecl ___init_time(threadlocinfo *_LocInfo);
void ___free_lconv_num(undefined4 *param_1);
int __cdecl ___init_numeric(threadlocinfo *_LocInfo);
void ___free_lconv_mon(int param_1);
int __cdecl ___init_monetary(threadlocinfo *_LocInfo);
errno_t __cdecl _strcat_s(char *_Dst,rsize_t _SizeInBytes,char *_Src);
errno_t __cdecl _strncpy_s(char *_Dst,rsize_t _SizeInBytes,char *_Src,rsize_t _MaxCount);
bool _TranslateName(int param_1,int param_2,undefined4 *param_3);
void _ProcessCodePage(void);
undefined4 _TestDefaultCountry(short param_1);
int _LcidFromHexString(void);
int _GetPrimaryLen(void);
void _CountryEnumProc@4(void);
void _TestDefaultLanguage(uint param_1,int param_2);
void _LangCountryEnumProc@4(void);
void _LanguageEnumProc@4(void);
void _GetLcidFromLangCountry(void);
void _GetLcidFromLanguage(void);
BOOL __cdecl ___get_qualified_locale(LPLC_STRINGS _LpInStr,UINT *_LpCodePage,LPLC_STRINGS _LpOutStr);
int __cdecl __crtGetStringTypeA_stat(localeinfo_struct *param_1,ulong param_2,char *param_3,int param_4,ushort *param_5,int param_6,int param_7,int param_8);
BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,int _Code_page,BOOL _BError);
int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
char * __cdecl _strpbrk(char *_Str,char *_Control);
void ___ansicp(undefined4 param_1);
void ___convertcp(int param_1,int param_2,char *param_3,uint *param_4,int param_5,undefined4 param_6);
void * __calloc_impl(uint param_1,uint param_2,undefined4 *param_3);
void FUN_10360025(void);
void * __cdecl _realloc(void *_Memory,size_t _NewSize);
void FUN_1036018b(void);
void * FUN_10360262(void *param_1,uint param_2,uint param_3);
FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale);
int __cdecl _ValidateRead(void *param_1,uint param_2);
undefined4 FUN_10360392(void);
undefined4 __get_sse2_info(void);
void __global_unwind2(undefined4 param_1);
void __local_unwind2(int param_1,uint param_2);
undefined4 __NLG_Notify1(void);
void __NLG_Notify(ulong param_1);
void FUN_10360584(void);
longlong __cdecl __lseeki64_nolock(int _FileHandle,longlong _Offset,int _Origin);
longlong __cdecl __lseeki64(int _FileHandle,longlong _Offset,int _Origin);
void FUN_10360719(void);
int __cdecl __write_nolock(int _FileHandle,void *_Buf,uint _MaxCharCount);
int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount);
void FUN_10360dbb(void);
void __cdecl __getbuf(FILE *_File);
int __cdecl __isatty(int _FileHandle);
int __cdecl __fileno(FILE *_File);
bool FUN_10360e94(void);
errno_t __cdecl __wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
errno_t __cdecl _wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh);
void __cdecl write_string(int param_1);
undefined4 FUN_10361a1e(undefined4 param_1,undefined4 param_2,uint param_3);
int __cdecl __set_error_mode(int _Mode);
int __cdecl __crtGetLocaleInfoW_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,int param_6);
void ___crtGetLocaleInfoW(localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,int param_6);
int __cdecl __crtGetLocaleInfoA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,int param_6);
int __cdecl ___crtGetLocaleInfoA(_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData);
int __cdecl FID_conflict:__atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
int __cdecl FID_conflict:__atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);
errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt);
void ___dtold(uint *param_1,uint *param_2);
STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes);
undefined8 __alldvrm(uint param_1,uint param_2,uint param_3,uint param_4);
ulonglong __aullshr(void);
errno_t __cdecl __controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask);
undefined4 FUN_10362608(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,byte param_5);
errno_t __cdecl FID_conflict:__sopen_helper(char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure);
void FUN_10362dff(void);
errno_t __cdecl __sopen_s(int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode);
int __cdecl __mbsicmp_l(uchar *_Str1,uchar *_Str2,_locale_t _Locale);
int __cdecl __mbsicmp(uchar *_Str1,uchar *_Str2);
int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
undefined4 FUN_103631f8(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,byte param_5);
errno_t __cdecl FID_conflict:__sopen_helper(char *_Filename,int _OFlag,int _ShFlag,int _PMode,int *_PFileHandle,int _BSecure);
void FUN_103639f0(void);
errno_t __cdecl __wsopen_s(int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale);
int __cdecl __wcsicmp(wchar_t *_Str1,wchar_t *_Str2);
int __cdecl _wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount);
long __cdecl _atol(char *_Str);
char * __cdecl __getenv_helper_nolock(char *param_1);
int __cdecl __iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4);
int __cdecl __ismbblead(uint _C);
int __cdecl __strnicmp_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
INTRNCVT_STATUS __cdecl __ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D);
INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F);
void FUN_10364959(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int *param_8);
int __cdecl __set_osfhnd(int param_1,intptr_t param_2);
int __cdecl __free_osfhnd(int param_1);
intptr_t __cdecl __get_osfhandle(int _FileHandle);
int __cdecl ___lock_fhandle(int _Filehandle);
void FUN_1036521f(void);
void __cdecl __unlock_fhandle(int _Filehandle);
int __cdecl __alloc_osfhnd(void);
void FUN_1036531d(void);
void FUN_103653e0(void);
wint_t __cdecl __putwch_nolock(wchar_t _WCh);
int __cdecl __mbtowc_l(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
int __cdecl _mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes);
ulong __cdecl strtoxl(localeinfo_struct *param_1,char *param_2,char **param_3,int param_4,int param_5);
long __cdecl _strtol(char *_Str,char **_EndPtr,int _Radix);
void FUN_10365829(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6);
uint __hw_cw(void);
uint ___hw_cw_sse2(void);
uint __cdecl __control87(uint _NewValue,uint _Mask);
int __cdecl __chsize_nolock(int _FileHandle,longlong _Size);
int FUN_103668a3(uint param_1,byte *param_2,byte *param_3);
int __cdecl __close_nolock(int _FileHandle);
long __cdecl __lseek_nolock(int _FileHandle,long _Offset,int _Origin);
int __cdecl __setmode_nolock(int _FileHandle,int _Mode);
undefined4 FUN_103670f3(undefined4 *param_1);
wint_t __cdecl __towlower_l(wint_t _C,_locale_t _Locale);
int __cdecl __mbsnbicoll_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount);
int __cdecl ___wtomb_environ(void);
int __cdecl __crtGetStringTypeW_stat(localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,int param_6,int param_7);
void ___crtGetStringTypeW(localeinfo_struct *param_1,ulong param_2,wchar_t *param_3,int param_4,ushort *param_5,int param_6,int param_7);
int __cdecl ___ascii_strnicmp(char *_Str1,char *_Str2,size_t _MaxCount);
void ___mtold12(char *param_1,int param_2,uint *param_3);
void __cdecl ___initconout(void);
void ___set_fpsr_sse2(uint param_1);
void FUN_103678bb(undefined4 *param_1);
int __cdecl __crtLCMapStringW_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,wchar_t *param_4,int param_5,wchar_t *param_6,int param_7,int param_8);
int __cdecl ___crtLCMapStringW(LPCWSTR _LocaleName,DWORD _DWMapFlag,LPCWSTR _LpSrcStr,int _CchSrc,LPWSTR _LpDestStr,int _CchDest);
int __cdecl __crtCompareStringA_stat(localeinfo_struct *param_1,ulong param_2,ulong param_3,char *param_4,int param_5,char *param_6,int param_7,int param_8);
int __cdecl ___crtCompareStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page);
int __cdecl __strnicoll_l(char *_Str1,char *_Str2,size_t _MaxCount,_locale_t _Locale);
int __cdecl findenv(uchar *param_1);
undefined4 * __cdecl copy_environ(void);
undefined4 FUN_103680f3(undefined4 *param_1,int param_2);
char * __cdecl __strdup(char *_Src);
uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale);
uchar * __cdecl __mbschr(uchar *_Str,uint _Ch);
void FUN_10368470(undefined4 param_1,int *param_2);
void FUN_10368550(undefined4 param_1,int *param_2);
undefined4 FUN_10368630(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10368650(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 * FUN_10368670(undefined4 param_1,int param_2);
undefined4 * FUN_10368720(undefined4 param_1,int param_2);
undefined4 FUN_103687d0(undefined4 param_1,undefined4 param_2);
undefined4 FUN_103687f0(undefined4 param_1,undefined4 param_2);
void FUN_10368810(short *param_1);
void FUN_10368840(undefined4 *param_1,int param_2,undefined4 param_3);
void FUN_103689e0(undefined4 *param_1,int param_2,basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_3);
undefined4 FUN_10368b80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_10368ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined * FUN_10368c80(void);
undefined * FUN_10368cf0(void);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *FUN_10369420(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1);
basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *FUN_103694e0(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1,char *param_2);
void FUN_10369610(basic_string<char,std::char_traits<char>,std::_DebugHeapAllocator<char>_> *param_1,undefined4 param_2);
void FUN_103697e0(void);
void FUN_103697f0(void);
void FUN_10369820(void);
void FUN_10369920(void);
void FUN_10369950(int param_1,char *param_2);
void FUN_103699d0(uint param_1,char *param_2);
void FUN_10369a50(undefined4 param_1);
void FUN_10369af0(int *param_1);
void FUN_10369ba0(void);
void FUN_10369d26(void);
char * __cdecl __get_sys_err_msg(int m);
char * __cdecl _strerror(char *_ErrMsg);
undefined * FUN_10369db6(void);
undefined * FUN_10369dbc(void);
void FUN_10371950(void);
void FUN_10371960(void);
void FUN_10371970(void);
void FUN_10371980(void);
void FUN_10371990(void);
void FUN_103719a0(void);
void FUN_103719b0(void);
void FUN_103719c0(void);
void FUN_103719d0(void);
void FUN_103719e0(void);
void FUN_103719f0(void);
void FUN_10371a00(void);
void FUN_10371a10(void);
void FUN_10371a20(void);
void FUN_10371a30(void);
void FUN_10371a50(void);
void FUN_10371a70(void);
void FUN_10371a90(void);
void FUN_10371ab0(void);
void FUN_10371ac0(void);
void FUN_10371ad0(void);
void FUN_10371ae0(void);
void FUN_10371af0(void);
void FUN_10371b00(void);
void FUN_10371b10(void);
void FUN_10371b20(void);
void FUN_10371b30(void);
void FUN_10371b40(void);
void FUN_10371b50(void);
void FUN_10371b60(void);
void FUN_10371b70(void);
void FUN_10371b80(void);
void FUN_10371b90(void);
void FUN_103731f0(void);
void FUN_10373200(void);
void FUN_10373210(void);
void FUN_10373220(void);
void FUN_10373230(void);
void FUN_10373240(void);
void FUN_10373250(void);
void FUN_10373260(void);
void FUN_10373270(void);
void FUN_10373280(void);
void FUN_10373290(void);
void FUN_103732a0(void);
void FUN_103732b0(void);
void FUN_103732c0(void);
void FUN_103732d0(void);
void FUN_103732e0(void);
void FUN_103732f0(void);
void FUN_10373300(void);
void FUN_10373310(void);
void FUN_10373320(void);
void FUN_10373330(void);
void FUN_10373340(void);
void FUN_10373350(void);
void FUN_10373360(void);
void FUN_10373370(void);
void FUN_10373380(void);
void FUN_10373390(void);
void FUN_103733a0(void);
void FUN_103733b0(void);
void FUN_103733c0(void);
void FUN_103733e0(void);
void FUN_103733f0(void);
void FUN_10373400(void);
void FUN_10373410(void);
void FUN_10373420(void);
void FUN_10373430(void);
void FUN_10373440(void);
void FUN_10373450(void);
void FUN_10373460(void);
void FUN_10373470(void);
void FUN_10373480(void);
void FUN_10373490(void);
void FUN_103734a0(void);
void FUN_103734b0(void);
void FUN_103734c0(void);
void FUN_103734f0(void);
void FUN_10373500(void);
void FUN_10373510(void);
void FUN_10373520(void);
void FUN_10373530(void);
void FUN_10373540(void);
void FUN_10373550(void);
void FUN_10373560(void);
void FUN_10373570(void);
void FUN_10373580(void);
void FUN_10373590(void);
void FUN_103735a0(void);
void FUN_103735b0(void);
void FUN_103735c0(void);
void FUN_103735d0(void);
void FUN_103735e0(void);
void FUN_103735f0(void);
void FUN_10373600(void);
void FUN_10373610(void);
void FUN_10373620(void);
void FUN_10373630(void);
void FUN_10373640(void);
void FUN_10373650(void);
void FUN_10373660(void);
void FUN_10373670(void);
void FUN_10373680(void);
void FUN_10373690(void);
void FUN_103736a0(void);
void FUN_103736b0(void);
void FUN_103736c0(void);
void FUN_103736d0(void);
void FUN_103736e0(void);
void FUN_103736f0(void);
void FUN_10373700(void);
void FUN_10373710(void);
void FUN_10373720(void);
void FUN_10373730(void);
void FUN_10373740(void);
void FUN_10373750(void);
void FUN_10373760(void);
void FUN_10373770(void);
void FUN_10373780(void);
void FUN_10373790(void);
void FUN_103737a0(void);
void FUN_103737b0(void);
void FUN_103737c0(void);
void FUN_103737d0(void);
void FUN_103737e0(void);
void FUN_103737f0(void);
void FUN_10373800(void);
void FUN_10373810(void);
void FUN_10373820(void);
void FUN_10373830(void);
void FUN_10373840(void);
void FUN_10373850(void);
void FUN_10373860(void);
void FUN_10373870(void);
void FUN_10373890(void);
void FUN_103738a0(void);
void FUN_103738b0(void);
void FUN_103738c0(void);
void FUN_103738d0(void);
void FUN_103738e0(void);
void FUN_103738f0(void);
void FUN_10373900(void);
void FUN_10373910(void);
void FUN_10373920(void);
void FUN_10373930(void);
void FUN_10373940(void);
void FUN_10373950(void);
void FUN_10373960(void);
void FUN_10373970(void);
void FUN_10373990(void);
void FUN_103739c0(void);
void FUN_103739f0(void);
void FUN_10373a20(void);
void FUN_10373a40(void);
void FUN_10373a60(void);
void FUN_10373ad0(void);
void FUN_10373ae0(void);
void FUN_10373af0(void);
void FUN_10373b00(void);
void FUN_10373b10(void);
void FUN_10373b20(void);
void FUN_10373b30(void);
void FUN_10373b40(void);
void FUN_10373b50(void);
void FUN_10373b60(void);
void FUN_10373b70(void);
void FUN_10373b80(void);
void FUN_10373b90(void);
void FUN_10373ba0(void);
void FUN_10373bb0(void);
void FUN_10373bc0(void);
void FUN_10373bd0(void);
void FUN_10373be0(void);
void FUN_10373bf0(void);
void FUN_10373c00(void);
void FUN_10373c10(void);
void FUN_10373c20(void);
void FUN_10373c30(void);
void FUN_10373c40(void);
void FUN_10373c50(void);
void FUN_10373c60(void);
void FUN_10373c70(void);
void FUN_10373c80(void);
void FUN_10373c8f(void);
void FUN_10373db0(void);
void FUN_10373dc0(void);
void FUN_10373dd0(void);
void FUN_10373de0(void);
void FUN_10373df0(void);
void FUN_10373e00(void);
void FUN_10373e10(void);
void FUN_1037b000(void);

