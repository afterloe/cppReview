#include <stdio.h>

/**
指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。
 */
int main() {

    // 申明一个指向指针的指针
    int var, *ptr, **pptr;

    var = 3000;

    // 获取ptr的地址
    ptr = &var;

    // 获取*ptr的地址
    pptr = &ptr;

    // 输出获取内容
    printf("Value of var = %d\r\n", var);
    printf("Value availabel at *ptr = %d\r\n", *ptr);
    printf("Value availabel at **pptr = %d\r\n", **pptr);

    return 0;
}
