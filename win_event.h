#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t DWORD;
typedef int HANDLE;
typedef int BOOL;
typedef const char * LPCTSTR;

#define INFINITE 0

HANDLE CreateEvent(void *lpEventAttributes, BOOL bManualReset, BOOL bInitialState, void *lpName);
DWORD WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
BOOL ResetEvent(HANDLE hEvent);
BOOL SetEvent(HANDLE hEvent);

#ifdef __cplusplus
}
#endif
