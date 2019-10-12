#include <iostream>
#include <typeinfo>

// 函数模板
template <typename T> inline T const& Max(T const&, T const&);

int main() {

    auto i = 30, j = 44;
    std::cout << "Max value is " << Max(i, j) << std::endl;

    auto k = 23.23, l = 19.45;
    std::cout << "Max value is " << Max(k, l) << std::endl;

    auto m = "afterloe", n = "joe";
    std::cout << typeid(m).name() << std::endl;
    std::cout << "Max value is " << Max(m, n) << std::endl;
    return 0;
}

template <typename T> inline T const& Max(T const& a, T const& b) {
    return a < b ? b: a;
}
