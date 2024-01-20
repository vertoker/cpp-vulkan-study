//
// Created by vertog on 20.01.2024.
//

#include "Lesson28_Inheritance.h"
#include "iostream"


//class Person final { // add specifier final, and you block class to inheritance self
class Person {
protected:
    const std::string name;
    unsigned age;

public:
    Person(std::string &aName, unsigned &aAge) : name(aName){
        age = aAge;
    }
    // With copy constructor works the same
    // And destructor too

    // with virtual you can virtualize method
    void print() { // why I can't define virtual
        std::cout << "Name: " << name << "\tAge:" << age << std::endl;
    }
};

class Employee : Person {
private:
    std::string company;

public:
    Employee(std::string &aName, unsigned &aAge, std::string &aCompany) : Person(aName, aAge) {
        company = aCompany;
    }

    // You can make gettable and settable fields with access here (protected and private) to everyone (public)
    using Person::name;

    // and then override it
    void print() {
        Person::print();// but also call it from method
        std::cout << "Company: " << company << std::endl;
        // here is you can see direct access to the protected field
        std::cout << "Name: " << Person::name << std::endl;
    }
};

void Lesson28_Inheritance::main() {
    std::string name = "Kostya";
    unsigned age = 20;
    std::string company = "Novatrans";

    auto *person = new Person(name, age);
    person->print();

    auto *employee = new Employee(name, age, company);
    employee->print();

    delete person;
    delete employee;
}
