#include <iostream>
#include <pthread.h>

namespace thread {

#define NUM_THEAD 5

void* say_hello(void*); 

void* say_hello(void* arg) {
    std::cout << "Hello afterloe - " << arg << std::endl;
    return 0;
}

}

int main() {

    pthread_t tids[NUM_THEAD];
    for(auto i= 0; i< NUM_THEAD; i++) {
        int ret = pthread_create(&tids[i], NULL, thread::say_hello, NULL);
        if (0 != ret) {
            std::cout << "pthread_create error: error_code=" << ret << std::endl;
        }
    }

    pthread_exit(NULL);

    return 0;
}

