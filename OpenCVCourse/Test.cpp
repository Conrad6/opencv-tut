#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>


int main() {
	std::string path = "Resources/test.jpg";
	cv::Mat img = cv::imread(path);
	imshow("OpenCVCourse", img);
	cv::waitKey(0);
	return 0;
}