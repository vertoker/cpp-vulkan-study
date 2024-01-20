//
// Created by vertog on 20.01.2024.
//

#include "Lesson33_NestedClass.h"
#include "iostream"

class A {
public:
    int value1;
    class B {
    private:
        int value2;
    };

    void print(B &b) const {
        std::cout << value1 << std::endl;
    }
};

void Lesson33_NestedClass::main() {
    A a {};
    A::B b {};
    a.value1 = 23;
    a.print(b);
}
