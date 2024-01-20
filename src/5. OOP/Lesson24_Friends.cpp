//
// Created by vertog on 19.01.2024.
//

#include "Lesson24_Friends.h"
#include <iostream>
#include <utility>

class Auto; // объявление класса Auto, чтобы Person видел этот класс

class Person
{
private:
    const std::string name;

public:
    explicit Person(std::string p_name) : name(std::move(p_name))
    {

    }

    void drive(const Auto&);
    void setPrice(Auto&, unsigned);
};

class Auto
{
    friend class Person; // can setup friend classes
    friend void Person::drive(const Auto&);
    friend void Person::setPrice(Auto&, unsigned);

private:
    const std::string name;
    unsigned price;

public:
    // std::move is a utility header, which prefer being move value oved being copied
    Auto(std::string a_name, unsigned a_price) : name(std::move(a_name))
    {
        price = a_price;
    }
    void print()
    {
        std::cout << name << " : " << price << std::endl;
    }
};

void Person::drive(const Auto &car)
{
    std::cout << name << " drives " << car.name << std::endl;
}
void Person::setPrice(Auto &car, unsigned price)
{
    car.price = price;
}

void Lesson24_Friends::main() {
    Auto tesla {"Tesla", 5000};
    Person tom {"Tom"};

    Auto *tesla2 = new Auto("Tesla", 5000); // define pointer
    auto *tom2 = new Person("Tom"); // define pointer

    tom.drive(tesla);
    tom.setPrice(tesla, 8000);
    tesla.print();

    // reinterpret_cast is a type of casting operator
    // usually it converts a pointer to the data or link
    // it can cast in another type if an object declares that type in self
    //Auto& pTesla2 = reinterpret_cast<Auto&>(tesla2);

    //tom2->drive(tesla);
    //tom2->setPrice(pTesla2, 15000);
    //tesla2->print();

    // must delete
    delete tesla2;
    delete tom2;
}
