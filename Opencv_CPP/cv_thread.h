#include "opencv2/opencv.hpp"

#include <pthread.h>
#include <mutex>

#include <iostream>
class CV_THREAD{

    public:
        CV_THREAD();
        
    private:
        pthread_t cam_thread;
        pthread_mutex_t cam_mutex_lock;

        

}