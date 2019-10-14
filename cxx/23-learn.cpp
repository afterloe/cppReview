#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREAD 5
void* wait(void*);

int main() {

    int rc, i;
    pthread_t threads[NUM_THREAD];
    pthread_attr_t attr;
    void* status;

    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
    
    for(i= 0; i< NUM_THREAD; i++) {
        cout << "mian(): create thread " << i << endl;
        rc = pthread_create(&threads[i], NULL, wait, (void*) &i);
        if (0 != rc) {
            cout<< "creat thread fail." << endl;
            exit(-1);
        }
    }

    pthread_attr_destroy(&attr);
    for(i= 0; i< NUM_THREAD; i++) {
        rc = pthread_join(threads[i], &status);
        if (0 != rc) {
            cout << "unable to join," << rc << endl;
        }
        cout << "Main: complete thread id: " << i;
        cout << " exiting with status: " << status << endl;
    }

    cout << "Main program exiting." << endl;
    pthread_exit(NULL);

    return 0;
}

void* wait(void* arg) {
    int tid = *((int*) arg);
    sleep(1);
    cout << "Sleeping in thread" << endl;
    cout << "Thread with id: " << tid << " ...exiting" << endl;
    pthread_exit(NULL);
}
