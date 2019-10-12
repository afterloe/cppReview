#include <iostream>

using namespace std;

double division(int, int);

int main() {
    auto x = 5, y = 0;
    try {
        cout << division(5, 0) << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }
    return 0;
}

double division(int a, int b) {
    if (0 == b) {
        throw "Division by zero condition!";
    }
    return a/b;
}
