#include <iostream>

#define MIN(a, b) (a<b ? a:b)

int main() {
    
    auto a = 10, b = 223;
    std::cout << "this min is " << MIN(a, b) << std::endl;

    return 0;
}

