/**
 * create by afterloe input a,b get sum
 * about this variable in this example
 */
#include<stdio.h>

// 函数外定义变量 x，y
int x, y;

int addTwoNum() {
    // 函数内申明变量 x,y 为外部变量， extern
    // 关键字用于指定，否则还是相当于内部变量申明
    extern int x, y;
    x = 3;
    y = 12;
    return x+y;
}

int main() {
    int value = addTwoNum();
    printf("add Value is %d\r\n", value);
    return 0;
}
