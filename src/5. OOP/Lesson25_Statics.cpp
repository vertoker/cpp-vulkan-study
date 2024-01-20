//
// Created by vertog on 20.01.2024.
//

#include "Lesson25_Statics.h"
#include "iostream"

class Person {
private:
    // you can't define static not initialized
    //static unsigned counter;

    // use inline and initialize static members
    // (or just through constructor)
    static inline unsigned counter = 0;
public:
    void addCounter() {
        counter++;
    }

    static void print() {
        std::cout << counter << std::endl;
    }
};

void Lesson25_Statics::main() {
    Person tom;
    Person kostya;

    tom.addCounter();
    kostya.addCounter();
    Person::print();
}
