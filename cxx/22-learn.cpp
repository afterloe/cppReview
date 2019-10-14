#include <iostream>
#include <pthread.h>

#define NUM_THREAD 5

struct thread_data {
    int thread_id;
    char *message;
};

void* PrintHello(void*);

int main() {

    pthread_t threads[NUM_THREAD];
    struct thread_data td[NUM_THREAD];
    int rc, i;

    for(i= 0; i< NUM_THREAD; i++) {
        std::cout<< "main() create thread <- " << i << std::endl;
        td[i].thread_id = i;
        td[i].message = (char*)"joe~ message";
        rc = pthread_create(&threads[i], NULL, PrintHello, (void*)&td[i]);
        if (0 != rc) {
            std::cout << "create thread fail, code -> " << rc << std::endl;
            exit(-1);
        }
    }

    pthread_exit(NULL);

    return 0;
}

void* PrintHello(void* arg) {
    struct thread_data *td = (struct thread_data*) arg;

    std::cout << "ThreadID -> " << td->thread_id;
    std::cout << "\t";
    std::cout << "ThreadMsg -> " << td->message;
    std::cout << std::endl;

    pthread_exit(NULL);
}
