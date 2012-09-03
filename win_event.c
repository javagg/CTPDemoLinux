#include "win_event.h"
#include <pthread.h>



struct event_flag* eventflag_create()
{
    struct event_flag* ev;
    ev = (struct event_flag*) malloc(sizeof(struct event_flag));

    pthread_mutex_init(&ev->mutex, NULL);
    pthread_cond_init(&ev->condition, NULL);
    ev->flag = 0;

    return ev;
}

void eventflag_wait(struct event_flag* ev)
{
    pthread_mutex_lock(&ev->mutex);

    while (!ev->flag)
        pthread_cond_wait(&ev->condition, &ev->mutex);

    ev->flag = 0;

    pthread_mutex_unlock(&ev->mutex);
}

void eventflag_set(struct event_flag* ev)
{
    pthread_mutex_lock(&ev->mutex);

    ev->flag = 1;

    pthread_mutex_unlock(&ev->mutex);

    pthread_cond_signal(&ev->condition);


//    pthread_mutex_lock(&ev->mutex);

//    ev->flag = 1;
//    pthread_cond_signal(&ev->condition);

//    pthread_mutex_unlock(&ev->mutex);
}

HANDLE CreateEvent(void *lpEventAttributes, BOOL bManualReset, BOOL bInitialState, void *lpName) {

    return eventflag_create();

}

DWORD WaitForSingleObject(HANDLE hEvent, DWORD dwMilliseconds) {
    eventflag_wait(hEvent);
    return 0;
}
BOOL ResetEvent(HANDLE hEvent) {
    return 0;
}
BOOL SetEvent(HANDLE hEvent) {
     eventflag_set(hEvent);
     return 1;
}
