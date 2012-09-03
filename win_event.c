#include "win_event.h"
#include <pthread.h>

HANDLE CreateEvent(void *lpEventAttributes, BOOL bManualReset, BOOL bInitialState, void *lpName) {
    return 0;
}

DWORD WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds) {
    return 0;
}
BOOL ResetEvent(HANDLE hEvent) {
    return 0;
}
BOOL SetEvent(HANDLE hEvent) {
    return 0;
}
