#include <iostream>

using namespace std;

inline int Max(int, int);

int main() {

    cout << "Max(22, 40) "<< Max(22, 40) << endl;
    cout << "Max(122, 30) "<< Max(122, 30) << endl; 
    return 0;
}

inline int Max(int x, int y) {
    return x > y ? x:y;
}
