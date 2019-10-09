#include <stdio.h>

#define SIZE 4

void fun1() {
    int var[] = {55, 43, 4, 13};
    int i, *ptr[SIZE];

    for (i =0; i< SIZE; i++) {
        ptr[i] = &var[i];
    }

    for (i =0; i< SIZE; i++) {
        printf("Value of var[%d] = %d \r\n", i, *ptr[i]);
    }
}

void fun2() {

    // 用一个指向字符的指针数组来存储一个字符串列表
    const char *names[] = {"afterloe", "joe", "grace", "yyy"};
    int i = 0;

    for (i =0; i< SIZE; i++) {
        printf("NO[%d] Char is %s\r\n", i, names[i]);
    }
}

int main() {

    fun1();
    fun2();
    return 0;
}
