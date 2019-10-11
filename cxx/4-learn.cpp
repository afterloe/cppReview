#include <iostream>
#include <ctime>
#include <cstdlib>

const int SIZE = 10;

void generatorArr(int*);
void sortArr(int*);
void printfArr(int*);

int main() {
    int arr[SIZE];
    generatorArr(arr);
    std::cout << "原始数组" << std::endl;
    printfArr(arr);
    sortArr(arr);
    std::cout << "排序后" << std::endl;
    printfArr(arr);
    return 0;
}

void generatorArr(int* arr) {
    srand((unsigned) time(NULL));
    auto index = 0;
    for(; index< SIZE; index++) {
        arr[index] = rand();
    }
}

void printfArr(int arr[]) {
    for (auto i= 0; i< SIZE; i++) {
        std::cout<< arr[i] << " ";
    }
    std::cout << std::endl;
}

void sortArr(int* arr) {
    auto i = 0;
    for(;i< SIZE; i++) {
        for(auto j= 0; j< i+1; j++) {
            if (arr[j] > arr[i]) {
                arr[j] = arr[i] + arr[j];
                arr[i] = arr[j] - arr[i];
                arr[j] = arr[j] - arr[i];
            }
        }
    }
}
