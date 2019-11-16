#include <pthread.h> 
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

#define COUNT_TRIGGER 10 
#define COUNT_LIMIT 12 
 
int count = 0; 
int thread_ids[3] = {0,1,2}; 
pthread_mutex_t count_mutex; 
pthread_cond_t count_cv; 
   
void* add_count(void* t)  {
    char *bb = (char *)t;

    //intptr_t tid = (long) t;
    /* error point
    
    The error has nothing to do with the makefile. The bug is in the source, on the line shown by the error.

    On your platform, a pointer does not fit in an int. If you cast a pointer to an integer, you should probably 
    use intptr_t or uintptr_t from stdint.h which are guaranteed to be big enough.

    I don't know what TThread::Printf is, it's not standard. But the usual way to print a pointer address with 
    printf is to pass the pointer as void* and use the %p format specifier. This is likely to be the case with TThread::Printf as well.


    */
    for (int i = 0; i < COUNT_TRIGGER; ++i) { 
        pthread_mutex_lock(&count_mutex); 
        count++; //변수값 증가
        if (count == COUNT_LIMIT) { 
               pthread_cond_signal(&count_cv); 
        }
 
        pthread_mutex_unlock(&count_mutex); 
        sleep(1); 
    }
 
    pthread_exit(0); 
} 
void* watch_count(void* t) { 
    //int tid = (int) t; 
    uintptr_t tid = (int) t;
    pthread_mutex_lock(&count_mutex); 
    if (count < COUNT_LIMIT) { 
        pthread_cond_wait(&count_cv, &count_mutex); 
    }
    pthread_mutex_unlock(&count_mutex); 
    pthread_exit(0); 
}

int main (int argc, char* argv[]) { 
    int tid1 = 1, tid2 = 2, tid3 = 3;
    char aa[10] = { 0, };
    pthread_t threads[3]; 
    pthread_attr_t attr; 
 
    pthread_mutex_init(&count_mutex, 0); 
    pthread_cond_init (&count_cv, 0); 
 
    pthread_attr_init(&attr); 
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE); 
    pthread_create(&threads[0], &attr, watch_count, NULL); 
    pthread_create(&threads[1], &attr, add_count, aa); 
    pthread_create(&threads[2], &attr, add_count, NULL); 
 
    for (int i = 0; i < 3; ++i) { 
        pthread_join(threads[i], 0); 
    } 
 
    pthread_attr_destroy(&attr); 
    pthread_mutex_destroy(&count_mutex); 
    pthread_cond_destroy(&count_cv); 
    return 0; 
}  