#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

int main() {
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));
	circle(img, Point(256, 256), 150, Scalar(50, 120, 40), FILLED);
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
	line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);
	putText(img, "Conrad Bekondo", Point(137, 262), FONT_HERSHEY_PLAIN, 1.75, Scalar(0, 69, 255), 2);
	imshow("Generated image", img);
	cv::waitKey(0);
	return 0;
}