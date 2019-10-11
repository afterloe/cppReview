#include <stdio.h>

int main() {

    char str[20];
    puts("input str without 20.");

    // gets()是不安全的，因为给了一个buffer后并没有通知系统buffer的大小，并且也不知道输入内容多少，容易造成输入内容超出缓冲区
    // 引起程序崩溃， 使用fgets可以避免该类问题。
    fgets(str, 20, stdin);

    printf("you input value is :");
    puts(str);
    return 0;
}
