#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
// 375 x 500
int main() {
	std::string path = "Resources/test.jpg";
	cv::Mat img, imgResized, imgCrop;
	img = cv::imread(path);
	resize(img, imgResized, Size(), 1.5, 1.5);
	Rect roi(0, 0, 150, 250);
	imgCrop = img(roi);
	std::cout << img.size;
	imshow("OpenCVCourse", img);
	imshow("Img resized", imgResized);
	imshow("Img crop", imgCrop);
	cv::waitKey(0);
	return 0;
}