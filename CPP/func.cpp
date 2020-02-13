#include <pthread.h>
#include <iostream>
#include <unistd.h>

extern int i;

void* fun(void *data){
    pid_t pid = getpid();
    pthread_t tid = pthread_self();

    char *thread_name = (char*) data;

    while(i<5){
        std::cout<< "name : " << thread_name << 
                    " pid : " << (unsigned int)pid << 
                    " tid : " << (unsigned int)tid <<
                    " i :  " << i << "\n";
        i++;
        sleep(1);
    }
}