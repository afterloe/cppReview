#include <iostream>

// 关于二维数组的 内存申请/回收的案例
// 如果是对象内存分配，这是直接分配的
int main() {
    
    int **p;
    int i, j;
    p = new int* [5];
    for (i= 0; i< 5; i++) {
        // 申请一组内存
        p[i] = new int [10];
    }

    for (i= 0; i< 5; i++) {
        for(j= 0; j< 10; j++) {
            p[i][j] = j*i;
        }
    }

    for (i= 0; i< 5; i++) {
        for(j= 0; j< 10; j++) {
            if(0 == j) {
                std::cout << std::endl;
            }
            std::cout << p[i][j] << "\t";
        }
    }

    std::cout<< std::endl;

    for (i= 0; i< 5; i++) {
        // 回收一组内存
        delete [] p[i];
    }

    delete [] p;

    return 0;
}

