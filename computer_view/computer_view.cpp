#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

// string s = "E:/图片/C162AEE39955A410119FCC6FD1CEFBE993512960.jpg"; // 注释方式

int main()
{
    std::cout << "Hello World! afterloe \n"; 
	std::string s; // 声明变量 c11 之后推出的string
	std::cin >> s; // 获取输出内容
	auto source = cv::imread(s); // c11 之后，执行函数并自动判断类型
	cv::imshow("pic is", source);
	waitKey(0);
	return 0;
}