#include "opencv2/opencv.hpp"

#include <iostream> 
#include <ctime>


using namespace cv;  
using namespace std;  

#pragma region 

static void on_trackbar( int, void* ){

}
int main(int, char**)  {  
    int nCurtime = 0;

    cv::namedWindow("camera1", 1);

	createTrackbar("low threshold", "camera1", 0, 1000, on_trackbar);
	createTrackbar("high threshold", "camera1", 0, 1000, on_trackbar);

	setTrackbarPos("low threshold", "camera1", 50);
	setTrackbarPos("high threshold", "camera1", 150);
     
    cv::VideoCapture cap(0);  
    if (!cap.isOpened())  
        printf("어 안열렸어. \n");  
        
    cv::Mat frame; 
    int nLow_canny = 50;
    int nHeigh_canny = 150;

    for(;;){  
        cap >> frame;  
        
        cv::putText( frame, "Fps", cv::Point(10, 50), , );

        imshow("camera1", frame);  
        if ( waitKey(20) >= 0 ) break;  
    }
  
    return 0;  
}  
#pragma endregion