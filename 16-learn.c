#include<stdio.h>

int max(int, int);
int min(int, int);
int difference(int, int);

int main() {

    int (*p)(int, int) = &max;
    int a, b, c, maxNum, minNum;

    printf("input three numbers, with space \r\n");
    scanf("%d %d %d", &a, &b, &c);
    maxNum = p(a, b);
    maxNum = p(maxNum, c);
    printf("max value is %d \r\n", maxNum);

    // & 其实可以省略
    p = min;
    minNum = p(p(a, b), c);
    printf("min value is %d \r\n", minNum);

    p = difference;
    printf("difference value is %d \r\n", p(maxNum, minNum));

    return 0;
}

int max(int x, int y) {
    return x > y ? x: y;
}

int min(int x, int y) {
    return x > y ? y: x;
}

int difference(int x, int y) {
    return x > y ? x - y: y -x;
}
