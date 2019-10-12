#include <fstream>
#include <iostream>

using namespace std;

const char name[] = "tmp.data";
void writefile(void);
void readfile(void);

int main() {

    writefile();
    readfile();
    return 0;
}

void readfile(void) {
    char data[100];
    ifstream infile;
    infile.open(name);
    cout << "read value is: " << endl;
    infile >> data;
    cout << data << endl;

    infile.close();
}

void writefile(void) {
    char data[100];

    ofstream outfile;
    outfile.open(name);
    
    // 获取输入内容
    cout << "write some thing" << endl;
    cout << "enter you name: ";
    cin.getline(data, 100);

    // 输入到文件
    outfile << data << endl;

    // 关闭文件
    outfile.close();

}
