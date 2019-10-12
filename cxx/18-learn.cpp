#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

namespace Stack {

template <class T> class Stack {
    vector<T> elems;
public:
    void push(T const&);
    void pop(void);
    T const& top(void);
    bool empty(void);
};

template <class T> void Stack<T>::push(T const& elem) {
    this->elems.push_back(elem);
}

template <class T> void Stack<T>::pop(void) {
    if (this->elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }

    return this->elems.pop_back();
}

template <class T> T const& Stack<T>::top(void) {
    if (this->elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }

    return elems.back();
}

template <class T> bool Stack<T>::empty(void) {
    return this->elems.empty();
}
}

int main() {
    std::cout << "Hello world" << std::endl;
    try {
        Stack::Stack<int> intStack;
        Stack::Stack<string> strStack;

        intStack.push(1);
        std::cout<< intStack.top() << std::endl;
        
        strStack.push("hello");
        std::cout<< strStack.top() << std::endl;
        strStack.pop();
        strStack.pop();

    } catch(exception const& ex) {
        std::cerr << "Exception caught: " << ex.what() << std::endl;
        return -1;
    }
    return 0;
}

