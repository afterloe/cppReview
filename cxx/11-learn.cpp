#include <iostream>
#include <string>

class Animal {
    char * name;
    int * age;
    bool * sex;
public:
    void say(void);
    Animal(void);
    ~Animal(void);
};

class Dog: public Animal {
    char* color;
public:
    void setName(char* name);
};

inline std::string sex2word(bool);

int main() {
    std::cout << "Hello world" << std::endl;
    Dog dog;
    char name[6] = "pabiJ";
    dog.setName(name);
    dog.say();
    return 0;
}

inline std::string sex2word(bool b) {
    return b? "公的":"母的";
}

Animal::Animal(void) {
    this->name = new char;
    this->age = new int;
    this->sex = new bool;
    *(this->age) = 10;
    *(this->sex) = true;
}

Animal::~Animal(void) {
    delete this->name;
    delete this->age;
    delete this->sex;
}

void Animal::say(void) {
    std::cout << "my name is " << *(this->name) << std::endl;
    std::cout << "i'm " << *(this->age) << " years old" << std::endl;
    std::cout << "i'm " << sex2word(*(this->sex)) << std::endl;
}

void Dog::setName(char* name) {
}
