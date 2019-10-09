#include <stdio.h>

#define SIZE 5

/**
 * 指针的运算
 */
void fun1() {
    int var[] = {23, 23, 11, 5, 66};
    int i, *ptr;

    ptr = var;
    for (i =0; i< SIZE; i++) {
        printf("内存地址 var[%d]: %p\r\n", i, ptr);
        printf("存储值为 var[%d]: %d\r\n", i, *ptr);
        ptr++; // 指针移动到下一个位置
    }
}

/**
 *  指针的比较
 */
void fun2() {
    int var[] = {-11, 0, -23, -55, -79, -102};
    const int MAX = 6;
    int i, *ptr;
    i = 0;
    // 指针默认为 数组的第一个元素地址
    ptr = var;

    // 指针地址比较
    while(ptr <= &var[MAX-1]) {
        printf("Address of var[%d] = %p\r\n", i, ptr);
        printf("Value of var[%d] = %d\r\n", i, *ptr);

        ptr++;
        i++;
    }
}

int main() {

    fun1();
    fun2();
    return 0;
}
