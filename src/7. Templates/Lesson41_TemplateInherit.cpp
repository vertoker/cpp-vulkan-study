//
// Created by vertog on 27.01.2024.
//

#include "Lesson41_TemplateInherit.h"

#include <utility>
#include "iostream"

template <typename T>
class Person17 {
protected:
    T id;
    std::string name;

public:
    Person17(T id, std::string name) : id(id), name(std::move(name)) { }
    virtual void print() const {
        std::cout << "Id: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
};

template <typename T>
class Employee : Person17<T> {
private:
    std::string company;

public:
    Employee(T id, std::string name, std::string company)
    : Person17<T>(id, name), company(std::move(company)) { }

    void print() const override {
        Person17<T>::print();
        std::cout << Person17<T>::name << " works in " << company << std::endl;
    }
};

class Employee2 : Person17<unsigned > {
private:
    std::string company;

public:
    Employee2(unsigned id, std::string name, std::string company)
    : Person17<unsigned>(id, std::move(name)), company(std::move(company)) { }

    void print() const override {
        Person17<unsigned>::print();
        std::cout << Person17<unsigned>::name << " works in " << company << std::endl;
    }
};

void Lesson41_TemplateInherit::main() {
    Employee<unsigned> bob {123, "Bob", "Google"};
    Employee2 bob2 {123, "Bob2", "Google"};
    bob.print();
    bob2.print();
}
