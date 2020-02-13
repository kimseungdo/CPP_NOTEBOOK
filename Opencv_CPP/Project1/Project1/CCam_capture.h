#pragma once
#include "opencv2/opencv.hpp"

class CCam_capture{

public:
	CCam_capture();
	virtual ~CCam_capture();

	//void Get_info();
	void Play();

private:
	cv::Mat cam_frame;
	cv::Mat gray_frame;
	cv::Mat canny_frame;
protected:


};

