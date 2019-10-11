#include <iostream>
#include <string>

class Box {
public:
    std::string name;
    std::string version;
    void speak(void); // 版本说明函数申明
    void setInnerVersion(int);
    Box(std::string, std::string, int); // 构造函数
    Box(const Box &); // 拷贝构造函数
    Box(); // 构造函数重载
    ~Box(); // 析构函数
private:
    int innerVersion;
    int *n;
};

int main() {

    Box cityworks;
    cityworks.name = "city in a box";
    cityworks.version = "3.5";

    std::cout << cityworks.name << " | " << cityworks.version << std::endl;
    cityworks.speak();
    cityworks.setInnerVersion(13);
    cityworks.speak();

    Box zoneBox = Box("zone in a box", "1.4", 11);
    zoneBox.setInnerVersion(15);
    zoneBox.speak();

    Box leechBox = Box(zoneBox);
    leechBox.name = "leechBox";
    leechBox.speak();
    leechBox.setInnerVersion(23);
    leechBox.speak();
    zoneBox.speak();
    return 0;
}

void Box::speak() {
    std::cout<< "my name is " << name; // 可以直接这样写，也可以用this指针代替
    std::cout<< " version is "<< this->version;
    std::cout<< " innerVersion is " << this->innerVersion;
    std::cout<< " n is " << *n;
    std::cout << std::endl;
}

void Box::setInnerVersion(int v) {
    this->innerVersion = v;
    this->n = &v;
}

Box::Box() {
    innerVersion = 0;
    this->name = "Box";
    this->version = "1.0";
    this->n = new int;
    std::cout << "execute this "<< std::endl;
}

Box::Box(std::string name, std::string version, int innerVersion)
    :name(name), version(version), innerVersion(innerVersion) {
// 等同于上面的写法
}

Box::~Box() {
    std::cout << this->name << " 回收内存辣鸡" << std::endl;
    delete n; // 回收内存
}

Box::Box(const Box &box) {
    n = box.n;
    name = box.name;
    version = box.version;
    innerVersion = box.innerVersion;
}
