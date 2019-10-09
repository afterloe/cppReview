#include <stdio.h>

int main() {

    int length = 23;

    // puts 的参数只能是 char 或其引用
    // 使用如下方式并不会报错并终止执行，只会弹出 带有waring的警告
//    puts(&length);

    // %p 输出内存地址
    printf("length addr is %p\r\n", &length);

    return 0;
}
