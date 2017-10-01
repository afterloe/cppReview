/**
 * create by afterloe input a,b get sum
 */
#include<stdio.h>

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
