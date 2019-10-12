#include <iostream>

using namespace std;

class Line {
public:
    int getLength(void);
    Line(int);
    Line(const Line &);
    ~Line(void);
private:
    int *ptr;
};

void display(Line);

int main() {

    Line line(10);
    display(line);

    Line line2 = line; // 这里也是用了拷贝函数
    display(line2);

    return 0;
}

Line::Line(int len) {
    cout<< "调用构造函数" << endl;
    this->ptr = new int;
    *(this->ptr) = len;
}

Line::Line(const Line &obj) {
    cout << "调用拷贝构造函数" << endl;
    this->ptr = new int;
    *(this->ptr) = *obj.ptr;
}

Line::~Line(void) {
    cout << "释放内存" << endl;
    delete this->ptr;
}

int Line::getLength(void) {
    return *(this->ptr);
}

void display(Line obj) {
    cout << "Line 长度为" << obj.getLength() << endl;
}
