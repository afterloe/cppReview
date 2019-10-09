#include <stdio.h>

// 使用define 进行常量申明，该处可以不指定常量类型
#define LENGTH 10
#define WIDTH 5
#define NAME "afterloe"

int main() {

    puts(NAME);
    printf("Length is %dcm, Width is %dcm\r\n", LENGTH, WIDTH);

    // 使用const 关键字申明常量， 使用const需要指定常量类型
    const int HEIGHT = 20;
    const char VALUE = 'f';
    printf("Height is %d, this value is %c\r\n", HEIGHT, VALUE);

    return 0;
}
