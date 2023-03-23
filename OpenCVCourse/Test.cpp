#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;

/// <summary>
/// Basic functions in Open CV
/// </summary>
/// <returns></returns>
int main() {
	std::string path = "Resources/test.jpg";
	cv::Mat img = cv::imread(path);
	cv::Mat imgGray, imgBlur, imgCanny, imgDilation, imgErode;

	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);
	Canny(imgBlur, imgCanny, 10, 75);
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(imgCanny, imgDilation, kernel);
	erode(imgDilation, imgErode, kernel);

	cv::imshow("Image Gray", imgGray);
	cv::imshow("Image Blur", imgBlur);
	cv::imshow("Image Canny", imgCanny);
	cv::imshow("Image Dilation", imgDilation);
	cv::imshow("Image Erode", imgErode);
	cv::imshow("Original Image", img);
	cv::waitKey(0);
	return 0;
}