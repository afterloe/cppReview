#include <iostream>

class Box {
    double *width;
public:
    double length;
    friend void printWidth(Box);
    void setWidth(double*);
    Box(const Box &);
    ~Box();
    Box();
};

void printWidth(Box);

int main() {

    []{
        Box box;
        auto width = 23.00;
        box.setWidth(&width);
        printWidth(box);
    }();

    std::cout<< "匿名函数" << std::endl;
    return 0;
}

Box::Box() {
    std::cout << "构造" << std::endl;
    this->width = new double;
}

Box::Box(const Box &obj) {
    this->width = new double;
    *(this->width) = *obj.width;
    std::cout << "拷贝" << std::endl;
}

Box::~Box() {
    std::cout << "析构" << std::endl;
    delete this->width;
}

void Box::setWidth(double *width) {
    *(this->width) = *width;
}

void printWidth(Box box) {
    std::cout << "Width of Box:" << *box.width << std::endl;
}
