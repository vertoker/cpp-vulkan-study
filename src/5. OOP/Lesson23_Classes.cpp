//
// Created by vertog on 19.01.2024.
//

#include "Lesson23_Classes.h"
#include "iostream"

class Person {
    // friend is an access modifier that allows method to modify private functions
    friend void setAge(Person& person, unsigned &age);
private:
    const std::string name;
    unsigned age;

    // mutable allow you to create not readonly variable, but in const context
    // I think it's broken, has normal usage in minimal solutions
    mutable unsigned age2;

    void externPrintPrivate();

public:
    unsigned getAge() const { return age; }
    std::string getName() { return name; }
    const std::string* getPName() { return &name; }

    void addYear(){
        age++;
    }

    Person() : name({}) { // it'd define like that because name is const
        //name = nullptr;// can't define variable with null for a pointer, causes error
        age = 0;
        age2 = 0;
    }
    Person(std::string &p_name, unsigned &age) : name(p_name) { // inherit constructor
        // this is an inner link to the self
        this->age = age;
        //this.age = age; // that line is not allowed
        age2 = 0;

        // can return this
        // remember linq? use that for
        //return *this;
    }

    // Ypu can delete default constructor
    // Useful for singleton
    //Person() = delete;

    // you can also delete default copy constructor
    // interesting: why?
    //Person(const Person &p) = delete;

    // override default internal copy constructor
    Person(const Person &p) : name(p.name)
    {
        age = p.age;
        age2 = 0;
    }
    // You can default
    ~Person() {

        std::cout << "Called Destructor" << std::endl;
    }

    void printAboutSelf() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
    void externPrint();
    void externPrintConst() const;
    // can do that also with constructor or (and) private
};

void Person::externPrint() {
    std::cout << "Yes: " << age << std::endl;
}
void Person::externPrintConst() const {
    std::cout << "Yes const: " << age << std::endl;
    // From here you can also call const methods
    // And edit mutable

    age2 = 5;
}

void Person::externPrintPrivate() {

}

void setAge(Person &person, unsigned &age) {
    person.age = age;
}

void Lesson23_Classes::main() {
    std::string name = "Kostya";
    unsigned age = 20;
    auto person = new Person(name, age);

    person->printAboutSelf();// pointer

    Person person2; // it calls default parameterless constructor
    Person *ptr; // define nullptr variable
    ptr = new Person(name, age);

    ptr->printAboutSelf();

    // copy constructor (internal c++ method)
    // this is not pointer copy
    auto person3 = person2;

    std::cout << "Equals: " << (&person3 == &person2) << std::endl;

    const Person* person4 = new Person(name, age);

    //person4.addYear(); // error
    person4->externPrintConst(); // but you can call const functions
    setAge(person2, age);

    delete person;
    delete ptr;
    //delete &person3; // can't do that
    delete person4;
}
