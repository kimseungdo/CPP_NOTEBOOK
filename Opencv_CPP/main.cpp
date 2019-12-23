#include "opencv2/opencv.hpp"
#include <iostream>  
  
using namespace cv;  
using namespace std;  

#pragma region 
int main(int, char**)  {  

    VideoCapture cap(0);  
    if (!cap.isOpened())  
        printf("어 안열렸어. \n");  
  
    Mat frame;  
    namedWindow("camera1", 1);  
   
    for (;;) {  
        cap >> frame;  
        imshow("camera1", frame);  
        if (waitKey(20) >= 0) break;  
    }  
  
    return 0;  
}  
#pragma endregion


