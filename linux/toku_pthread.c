#define _GNU_SOURCE 1
#include <toku_pthread.h>

int toku_pthread_yield(void) {
    return pthread_yield();
}
