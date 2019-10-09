#include <stdio.h>

// 函数申明
double getAverage(int *, int);

int main() {

    int balance[5] = { 100, 23, 69, 49, 32 };
    double avg;

    // 数组是一个天然的指针！
    avg = getAverage(balance, 5);
    printf("Average value is %f\n", avg);

    return 0;
}

// 函数实现
double getAverage(int *arr, int size) {

    int i, sum = 0;
    for(i=0; i< size; i++) {
        // 这里arr[i]，返回的就是一个int
        sum += arr[i];
    }

    // 对sum进行强制转换， 不强制转换其实也可以，
    return (double)sum/size;
}
