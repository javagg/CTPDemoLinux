#include <stdint.h>
#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif

struct event_flag
{
    pthread_mutex_t mutex;
    pthread_cond_t  condition;
    unsigned int    flag;
};

typedef int32_t DWORD;
typedef struct event_flag *HANDLE;
typedef int BOOL;
typedef const char * LPCTSTR;


#define INFINITE 0

HANDLE CreateEvent(void *lpEventAttributes, BOOL bManualReset, BOOL bInitialState, void *lpName);
DWORD WaitForSingleObject(HANDLE hEvent, DWORD dwMilliseconds);
BOOL ResetEvent(HANDLE hEvent);
BOOL SetEvent(HANDLE hEvent);

#ifdef __cplusplus
}
#endif
