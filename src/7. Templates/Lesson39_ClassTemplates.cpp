//
// Created by vertog on 25.01.2024.
//

#include "Lesson39_ClassTemplates.h"

#include <memory>
#include "memory"
#include "iostream"

//template<class T> // it's the same, use typename
template<typename T>
//template<typename T, typename V> // you can declare several generios
class Person13 {
private:
    T id;
    std::string name;

public:
    Person13(T id, const std::string& name) {
        this->id = id;
        this->name = name;
    }

    void print() const {
        std::cout << "id = " << id << std::endl;
        std::cout << "name = " << name << std::endl;
    }

    void print2();

    // can create T second time, especially for method only
    template<typename T2=int> // can specify a T type by some another declared type,
    // and if you don't specify a type, it will use a declared type as default
    void print3();
};

template<typename T>
void Person13<T>::print2() {
    std::cout << "id2 = " << id << std::endl;
    std::cout << "name2 = " << name << std::endl;
}

template<typename T>
template<typename T2>
void Person13<T>::print3() {

}


void Lesson39_ClassTemplates::main() {
    auto ptrStr = std::make_shared<Person13<const char *>>("identificator", "Tom");
    auto ptrInt = std::make_shared<Person13<int>>(123, "Bob");
    auto ptrFloat = new Person13<float>(123, "Max");
    ptrStr->print();
    ptrInt->print();
    ptrFloat->print2();
    delete ptrFloat;
}
