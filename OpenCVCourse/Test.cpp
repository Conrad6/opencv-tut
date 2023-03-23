#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

void images();
void videos();
void webcam();

void main() {
	webcam();
}

void webcam() {
	cv::VideoCapture capture(0);
	cv::Mat img;
	while (true) {
		capture.read(img);
		cv::imshow("Webcam", img);
		cv::waitKey(1);
	}
}

void videos() {
	std::string path = "Resources/video.mp4";
	cv::VideoCapture capture(path);
	cv::Mat img;
	while (true) {
		capture.read(img);
		cv::imshow("Videos", img);
		cv::waitKey(75);
	}
}

void images() {
	std::string path = "Resources/test.jpg";
	cv::Mat img = cv::imread(path);
	cv::imshow("Images", img);
	cv::waitKey(0);
}