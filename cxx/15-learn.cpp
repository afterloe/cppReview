#include <iostream>
#include <exception>
using namespace std;

struct MyException: public exception {
    const char * what() const throw () {
        return "custom exception";
    }
};

int main() {
    try {
        throw MyException();
    } catch(MyException& e) {
        cout << "MyException caught" << endl;
        // whate 方法是异常类提供的一个公共方法， 返回差生异常的原因。
        cout << e.what() << endl;
    } catch(exception& e) {
        // 其他的异常
        cout << e.what() << endl;
    }

    return 0;
}


