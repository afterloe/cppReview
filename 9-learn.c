#include <stdio.h>

int main() {

    int *ptr = NULL; // 申明一个空指针

    // 千万不能执行如下语句，会引起程序中断
    // 出现 segmentation fault 的错误，因为指针赋值为NULL后，
    // 并没有分配对应的内存，这个内存是不存在的，所以强行访
    // 问是会出现异常。
//    printf("null ptr value is %d", *ptr);
    printf("null prt addr is %p\r\n", ptr); // 0x0

    // 空指针亦可用在if-else中
    if(!ptr) {
        puts("指针为空");
        printf("addr is %p\r\n", ptr);
    }

    int val = 22;
    ptr = &val;
    if (ptr) {
        puts("指针非空，执行这里");
        printf("ptr addr is %p, value is %d\r\n", ptr, *ptr);
    }

    return 0;
}
