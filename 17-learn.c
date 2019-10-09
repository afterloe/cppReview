/**
 * 回调函数
 */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// 函数申明
int getValue(void); // 其中void 可省略
void populate_array(int*, size_t, int (*)(void)); // 申明带有回调函数的函数申明

int main() {

    int arr[SIZE], i;
    populate_array(arr, SIZE, &getValue);

    for(i= 0; i< SIZE; i++) {
        printf("arr[%d]: %d \r\n", i, arr[i]);
    }
    printf("\r\n");

    return 0;
}

void populate_array(int* arr, size_t size, int (*next)(void)) {
    for (size_t i= 0; i< size; i++) {
        arr[i] = next(); // 函数调用
    }
}

// void 可省略
int getValue(void) {
    return rand();
}
