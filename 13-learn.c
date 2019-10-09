#include <stdio.h>
#include <time.h>

// 函数申明 - 获取一个指针
void getSeconds(unsigned long*);

int main() {

    unsigned long sec;

    getSeconds(&sec);
    printf("Number of seconds: %ld\r\n", sec);

    return 0;
}

void getSeconds(unsigned long *ptr) {

    // 为指针 指向的地址 进行赋值
    *ptr = time(NULL);
    return;
}
