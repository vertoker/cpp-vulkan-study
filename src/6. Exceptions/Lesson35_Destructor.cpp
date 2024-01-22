//
// Created by vertog on 22.01.2024.
//

#include "Lesson35_Destructor.h"
#include "iostream"
#include "memory"

class Person5 {
public:
    Person5() {
        std::cout << "Constructor" << std::endl;
    }
    ~Person5() {
        std::cout << "Destructor" << std::endl;
    }

    void print() {
        throw "Error";
    }
};

void Lesson35_Destructor::main() {
    //auto *ptr = new std::unique_ptr<Person5>(new Person5());
    //ptr->reset();

    auto *tom = new Person5();
    try {
        Person5 tom2 {};
        //auto *tom = new Person5(); // auto destructor will not call
        // if you declare a pointer to the item, only with safe initialization
        // work auto destructor, because it's auto deletes after exception

        // throws "Error"; // this won't call destructor
        tom2.print(); // this will cause error
    }
    catch (const char* error) {
        std::cout << error << std::endl;
        // if you want destructor to a pointer,
        // you need to call deleting manually
        delete tom;
    }
}
