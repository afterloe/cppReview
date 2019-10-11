#include <iostream>

// 这里对默认参数进行 赋值
int sum(int, int = 200);

int main() {

    auto a = 100;
    std::cout << "this value is " << sum(a) << std::endl;
    std::cout << "this value is " << sum(a, 33) << std::endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
