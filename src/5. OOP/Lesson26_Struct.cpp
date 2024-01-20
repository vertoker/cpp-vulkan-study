//
// Created by vertog on 20.01.2024.
//

#include "Lesson26_Struct.h"
#include "iostream"

// struct is value type variable
// use only for data storage, not for logic
// for logic use classes

// it has different name: aggregate classes
struct Person3 {
    Person3(std::string &aName, unsigned aAge) {
        name = aName;
        age = aAge;
    }

    void print() const {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }

private:
    std::string name;
    unsigned age;
};

void Lesson26_Struct::main() {
    std::string name = "Kostya";
    unsigned age = 20;
    auto *person = new Person3(name, age);

    person->print();

    delete person;
}
