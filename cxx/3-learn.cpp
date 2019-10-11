#include <iostream>
// 引用c类库
#include <ctime>
#include <cstdlib>

int main() {

    // auto 必须赋值。。。
    auto i = 0, j = 0;
    srand((unsigned)time(NULL));
    for (; i< 10; i++) {
        j = rand();
        std::cout<< "random number is " << j << std::endl;
    }

    return 0;
}
