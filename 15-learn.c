#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10
int* getRandom();

int main() {

    int *p;
    int i;

    p = getRandom();
    for (i= 0; i< SIZE; i++) {
        printf("*p[%d]: %d \r\n", i, *(p+i));
    }
    return 0;
}

int* getRandom() {

    static int r[SIZE];
    int i;
    // 初始化 随机数发生器， 配合产生随机数序列
    srand((unsigned)time(NULL));
    for (i= 0; i< SIZE; i++) {
        r[i] = rand();
    }

    return r;
}
