#include <opencv2/opencv.hpp>
using namespace cv;

class MyRect {
public:
	MyRect();
	~MyRect();
	MyRect(cv::Rect& temp):myRc(temp) {};

	bool operator<(MyRect& rect) {
		return this->myRc.x < rect.myRc.x ? true : false;
	}

	MyRect operator = (MyRect& rect) {
		this->myRc = rect.myRc;
		return *this;
	}

	cv::Rect getRect() {
		return myRc;
	}

private:
	Rect myRc;
};