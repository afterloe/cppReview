#include <stdio.h>

int main() {

    int var = 20;
    int *addr;

    addr = &var;

    printf("Address of var variable: %p\r\n", &var); // 输出var的内存地址
    printf("Address stored in addr variable: %p\r\n", addr); // 输出指针变量中的存储地址
    printf("Value of *addr variavle: %d\r\n", *addr); // 使用指针访问

    return 0;
}
