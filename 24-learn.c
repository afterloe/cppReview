#include <stdio.h>
#include <stdarg.h>

double average(int, ...);

int main() {

    printf("avg is %f \n", average(12, 23, 44, 20, 4, 2, 3, 4, 5));
    printf("avg is %f \n", average(333, 55, 80, 103, 5, 10, 15));
    return 0;
}

double average(int num,...) {
    va_list valist;
    double sum = 0.0;
    int i;

    va_start(valist, num);
    for(i= 0; i< num; i++) {
        sum += va_arg(valist, int);
    }
    va_end(valist);

    return sum/num;
}
