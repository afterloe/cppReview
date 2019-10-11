#include <iostream>
#include <ctime>
#include <cstring>

using namespace std;

int main()
{
    cout << "Hello world" << endl;
    time_t now = time(0);
    char* timeText = ctime(&now);
    cout<< "本地时间: " << timeText << endl;

    return 0;
}

