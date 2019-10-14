#include <iostream>
#include <thread>

// c11 中的线程使用
std::thread::id main_thread_id = std::this_thread::get_id();

void hello(void);
void pause_thread(const int&);

int main() {

    std::thread t(hello);
    // 可以并发执行的线程数量(不准确)
    std::cout << t.hardware_concurrency() << std::endl;
    // 可以滨发展新的数量 (不准确)
    std::cout << "native_handle " << t.native_handle() << std::endl;
    t.join();
    std::thread a(hello);
    a.detach();

    std::cout << "Spawing 5 threads ..." << std::endl;
    std::thread threads[5];
    for(auto i= 0; i< 5; i++) {
        threads[i] = std::thread(pause_thread, i+1);
    }
    std::cout << "Done spawning threads. now waiting for them to join:" << std::endl;
    for (auto &thread: threads) {
        thread.join();
    }
    std::cout << "All threads joined!" << std::endl;
    return 0;
}

void hello(void) {
    std::cout << "hello Concurent afterloe \n";
    if (main_thread_id == std::this_thread::get_id()) {
        std::cout << "This is main thread!";
    } else {
        std::cout << "This is not the main thread. \n";
    }
}

void pause_thread(const int& n) {
    std::this_thread::sleep_for(std::chrono::seconds(n));
    std::cout << "pasuse of " << n << " second ended." << std::endl;
}

