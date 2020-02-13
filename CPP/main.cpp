#include <pthread.h>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int i=0;
void* fun(void *data);

int main(void){
    pthread_t p_thread_name[2];
    int nThread_id, nStatus;
    char p1[] = "pthread 1";
    char p2[] = "pthread 2"; 
    char pm[] = "pthread main";

    sleep(1);

    nThread_id = pthread_create(&p_thread_name[0], NULL, fun, (void*)p1);
    if(nThread_id != 0){
        perror("thread create error");
        exit(0);
    }
    nThread_id = pthread_create(&p_thread_name[1], NULL, fun, (void*)p2);
    if(nThread_id != 0){
        perror("thread create error");
        exit(0);
    }
    fun((void*)pm);

    pthread_join(p_thread_name[0], (void**)&nStatus);
    cout<< "p_thread_name[0] exit" << endl;
    pthread_join(p_thread_name[1], (void**)&nStatus);
    cout<< "p_thread_name[1] exit" << endl;
    
    return 0;
}