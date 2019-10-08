/**
 * create by afterloe input a,b get sum
 * about this variable in this example
 */
#include<stdio.h>

int x, y;

int add twonum() {
    extern int x, y;
    x = 3;
    y = 12;
    return x+y;
}

int main() {
 int max(int x, int y); // 函数声明

 int a,b;

 scanf("%d,%d", &a, &b); // 阻塞输入
 a = max(a,b);

 printf("the max number is %d", a);

 return 0;
}

/**
 * 函数实现
 */
int max(int x, int y) {
	return x > y ? x : y;
}
