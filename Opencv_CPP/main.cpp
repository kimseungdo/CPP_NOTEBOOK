#include "opencv2/opencv.hpp"

#include <iostream> 
#include <ctime>

#include <pthread.h>
#include <mutex>

using namespace cv;  
using namespace std;  
/*
#pragma region 

void check_ocl_system(){
	if (!ocl::haveOpenCL()) {
		cout << "error : can't not use OpenCL system." << endl;
	}

	// 컨텍스트 생성
	ocl::Context context;
	if (!context.create(ocl::Device::TYPE_GPU)) {
		cout << "error : Do not create context." << endl;
	}

	// GPU 장치 정보
	cout << context.ndevices() << " GPU device (s) detected " << endl;
	for (size_t i = 0; i < context.ndevices(); i++) {
		ocl::Device device = context.device(i);
		cout << " - Device " << i << " --- " << endl;
		cout << " Name : " << device.name() << endl;
		cout << " Availability : " << device.available() << endl;
		cout << "Image Support : " << device.imageSupport() << endl;
		cout << " OpenCL C version : " << device.OpenCL_C_Version() << endl;
	}

}
static void on_trackbar( int, void* ){

}

int main(int, char**)  {  
    check_ocl_system();

    int nCurtime = 0;
    cv::VideoCapture cap(0);  
    if (!cap.isOpened())  
        printf("No Camera. \n");  
        
    cv::Mat frame; 
    int nLow_canny = 50;
    int nHeigh_canny = 150;
    
    
    for(;;){  
        cap >> frame;  
        
        //cv::putText( frame, "Fps", cv::Point(10, 50), , );
        cv::imshow("camera1", frame);  
        if ( waitKey(20) >= 0 ) break;  
    }
  
    return 0;   
}  
#pragma endregion

*/
#pragma region2

pthread_t cam_thread;
pthread_mutex_t cam_mutex_lock;

cv::VideoCapture cv_cap;
cv::Mat frame; 

void* Capture_thread(void* arg){
    for(;;){
        Mat tempFrame;
        cv_cap >> tempFrame;

        pthread_mutex_lock(&cam_mutex_lock);
        frame = tempFrame;
        pthread_mutex_unlock(&cam_mutex_lock);
    }
}

int main(void){
    cv_cap.open(0);

    pthread_create(&cam_thread, NULL, Capture_thread, NULL); //
    pthread_mutex_init(&cam_mutex_lock, NULL); //mutex init

    for(;;){
        Mat nowFrame, grayFrame;

        pthread_mutex_lock(&cam_mutex_lock);
        nowFrame = frame;
        pthread_mutex_unlock(&cam_mutex_lock);

        if(nowFrame.empty())
            continue;

        cvtColor( nowFrame, grayFrame, COLOR_BGR2GRAY);
        imshow("in", nowFrame);
        imshow("out", grayFrame);

        if(cv::waitKey(20) == 27){
            int ret = pthread_cancel(cam_thread);
            int status;
            if(ret == 0){
                ret = pthread_join(cam_thread, (void**)&status);
                if(ret == 0)
                    cout<< "thread exit" << status << endl;
                else
                    cout<< "error thread exit" << ret << endl;
                
                break;
            
            }
        }
    }
    return 0;
}
#pragma endregion2