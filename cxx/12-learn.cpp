#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int= 0, int= 0);
    virtual int area(void) = 0; // 动态链接, 纯虚函数。必须由子类实现，否则会报错
};

class Rectangle: public Shape {
public:
    Rectangle(int= 0, int=0);
    int area(void);
};

class Triangle: public Shape {
public:
    Triangle(int= 0, int= 0);
    int area(void);
};

int main() {

    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(22, 8);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();

    return 0;
}

int Rectangle::area(void) {
    cout << "矩形面积" << endl;
    return this->height * this->height;
}

int Triangle::area(void) {
    cout << "三角形面积" << endl;
    return this->height * this->height / 2;
}

Shape::Shape(int a, int b) {
    this->width = a;
    this->height = b;
}

Rectangle::Rectangle(int a, int b): Shape(a, b) {}

Triangle::Triangle(int a, int b): Shape(a, b) {}
