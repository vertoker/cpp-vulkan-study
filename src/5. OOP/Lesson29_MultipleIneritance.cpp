//
// Created by vertog on 20.01.2024.
//

#include "Lesson29_MultipleIneritance.h"
#include "iostream"

class A {
protected:
    unsigned value1;

public:
    A (unsigned &aValue1) {
        value1 = aValue1;
    }

    virtual void print() {
        std::cout << "Value 1 " << value1 << std::endl;
    }
};

class B : A {
protected:
    unsigned value2;

public:
    B (unsigned &aValue1, unsigned &aValue2) : A(aValue1) {
        value2 = aValue2;
    }

    void print() override {
        A::print();
        std::cout << "Value 2 " << value2 << std::endl;
    }
};

class C {
public:
    // this is pure virtual functions
    virtual void printInterface() const = 0;
};

class D : B, C {
protected:
    unsigned value3;

public:
    D (unsigned &aValue1, unsigned &aValue2, unsigned &aValue3) : B (aValue1, aValue2) {
        value3 = aValue3;
    }

    void printInterface() const override {
        std::cout << "Value " << value3 << std::endl;
    }

    void print() override {
        B::print();
        std::cout << "Value 3 " << value3 << std::endl;
    }
};

void Lesson29_MultipleIneritance::main() {
    unsigned v1 = 4;
    unsigned v2 = 7;
    unsigned v3 = 10;
    auto *d = new D(v1, v2, v3);

    d->print();
    d->printInterface();

    delete d;
}
