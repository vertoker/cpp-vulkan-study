//
// Created by vertog on 31.01.2024.
//

#include "Lesson66_Functions.h"
#include "iostream"

class IdCounter {
private:
    unsigned id;

public:
    unsigned operator()() {
        return ++id;
    }
};

class SomeClassObject {
public:
    void operator()(const std::string& message) const {
        std::cout << message << std::endl;
    }
    int operator()(const int& x, const int& y) const {
        return x + y;
    }
};

void Lesson66_Functions::main() {
    SomeClassObject print {};
    print("Wait what");
    print("Wait what 2");

    SomeClassObject sum {};
    print(std::to_string(sum(4, 5)));

    IdCounter counter {};
    print(std::to_string(counter()));
    print(std::to_string(counter()));
    print(std::to_string(counter()));
}
