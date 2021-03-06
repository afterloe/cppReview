﻿#include <iostream>
#include <opencv2/opencv.hpp>
#include "MyRect.h"

using namespace cv;
using namespace std;

/**
	数字识别和其他的计算机视觉相关应用都会分为两个步骤： POI抽取、 识别

	> POI抽取即将感兴趣的区域从原始图片中剥离。 步骤为 1. 灰度值；2. 二值化;
	> 识别即通过一些分类器将第一步中的结果进行分类，属于机器学习的一个典型应用。

	技术路线如下：
	1. 图像预处理
	2. 检测并勾勒轮廓
	3. 数字顺序整理
	4. 切割各个数字
	5. 遍历对比并识别
*/

void test_cv(string); // 测试cv函数
cv::Mat preprocess_pic(cv::Mat); // 图片预处理
cv::Mat findOutline(cv::Mat); // 搜索数字轮廓
void imgShow(cv::Mat);

int main()
{
    std::cout << "Hello World! afterloe \n"; 
//	std::string s; // 声明变量
//	std::cin >> s; // 获取输出内容
	// test_cv(s);

	const string path = "G:\\plc资料\\照片\\IMG_20190422_181056.jpg";
	cv::Mat p = preprocess_pic(cv::imread(path));
//	imgShow(p);
	p = findOutline(p);
	imgShow(p);
	return 0;
}

void test_cv(string path) {
	auto _s = cv::imread(path);
	cv::imshow("cv is done", _s);
	waitKey(0);
}

cv::Mat preprocess_pic(cv::Mat source) {
	cv::Mat grayImage, binImage;
	cv::cvtColor(source, grayImage, cv::COLOR_BGR2GRAY);
	// 阀值在148 ~ 160之间
	cv::threshold(grayImage, binImage, 150, 255, cv::ThresholdTypes::THRESH_BINARY_INV);
	return binImage;
}

cv::Mat findOutline(cv::Mat source) {
//	cv::Mat conImage = cv::Mat::zeros(source.size(), source.type());
	vector<vector<cv::Point>> contours;
	vector<cv::Vec4i> hierarchy;
	// 指定CV_RETR_EXTERNAL寻找数字的外轮廓
	cv::findContours(source, contours, hierarchy, cv::RetrievalModes::RETR_EXTERNAL,
		cv::ContourApproximationModes::CHAIN_APPROX_NONE);
	// 绘制
	cv::drawContours(source, contours, -1, (255, 255, 255));

//	vector<MyRect> sort_rect;
	vector<vector<cv::Point>>::iterator It;
	std::cout << contours.size();
	for (It = contours.begin(); It < contours.end(); It++) {
		cv::Point2f vertex[4];
		auto rect = cv::boundingRect(*It);
		vertex[0] = rect.tl();
		vertex[1].x = (float)rect.tl().x, vertex[1].y = (float)rect.br().y;
		vertex[2] = rect.br();
		vertex[3].x = (float)rect.br().x, vertex[3].y = (float)rect.tl().y;

		for (int j = 0; j < 4; j++) {
			cv::line(source, vertex[j], vertex[(j+1)%4], cv::Scalar(255,255,0), 1);
		}
//		auto tempRect = cv::boundingRect(*It);
//		sort_rect.push_back(tempRect);
	}

/*
	for (int i = 0; i < sort_rect.size(); i++) {
		for (int j = i + 1; j < sort_rect.size(); j++) {
			if (sort_rect[j] < sort_rect[i]) {
				auto temp = sort_rect[j];
				sort_rect[j] = sort_rect[i];
				sort_rect[i] = temp;
			}
		}

	}
*/
	return source;
}

void imgShow(cv::Mat source) {
	cv::namedWindow("效果图显示", 0); // 默认是1； 即全比例显示 0 - 适应屏幕进行缩放
	cv::imshow("效果图显示", source);
	waitKey(0);
}