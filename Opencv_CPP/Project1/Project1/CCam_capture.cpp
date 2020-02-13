#include "CCam_capture.h"

#include <iostream>

using namespace std;

CCam_capture::CCam_capture() {
	printf("cam up");
}
CCam_capture::~CCam_capture() {

}


void CCam_capture::Play() {
    cv::VideoCapture cap1(0);

    if (!cap1.isOpened())
        printf("첫번째 카메라를 열수 없습니다. \n");
    cout << cam_frame.reshape[1];
    for (;;) {
        cap1 >> cam_frame;
        cv::imshow("camera1", cam_frame);

        if (cv::waitKey(20) == 27) break; //ESC키 누르면 종료    
    }
}