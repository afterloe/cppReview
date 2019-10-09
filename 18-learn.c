#include <stdio.h>
#include <string.h>

int main() {

    // c 字符串申明
    char greeting[30] = {'H', 'e', 'l', 'l', 'o', '\0'};
    puts(greeting);

    // 也可以使用这种方式
    char me[] = "afterloe";
    puts(me);

    char copy[12];
    // strcpy 实现 字符串2 复制到 字符串1
    strcpy(copy, me); // 注意，复制的字符串长度足够，否则会出现 abort的异常。
    puts(copy);

    // strcat 实现将字符串2 连接到字符串1 的末尾
    strcat(greeting, me); // 注意，字符串连接需要 第一个字符串长度足够，否则会出现 abort的异常。
    puts(greeting);
    // strleng 返回字符串的长度， 结果为lu (32位 无符号整数)进行，而不是d
    printf("leng of greeting is %lu \r\n", strlen(greeting));

    return 0;
}
