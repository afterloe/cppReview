#include <iostream>
#include <pthread.h>

#define NUM_THREAD 5

void *PrintHello(void*);

int main() {

    pthread_t threads[NUM_THREAD];
    int indexes[NUM_THREAD];
    int rc, i, *ptr = indexes;
    for (i= 0; i< NUM_THREAD; i++) {
        std::cout << "main(): 创建线程, " << i << std::endl;
        indexes[i] = i;
        rc = pthread_create(&threads[i], NULL, PrintHello, (void*)ptr);
        ptr++;
        if (rc) {
            std::cout << "Error: 无法创建线程" << rc << std::endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);
    return 0;
}

void *PrintHello(void* arg) {
    int tid = *((int*) arg);
    std::cout << "Hello Runoob! id -> " << tid << std::endl;
    pthread_exit(NULL);
}
