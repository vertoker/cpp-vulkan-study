//
// Created by vertog on 30.01.2024.
//

#include "Lesson65_MoveOperatorEquals.h"
#include "iostream"
#include "memory"

class Message2 {
private:
    std::string msg;
    unsigned id;
    static inline unsigned counter;

public:
    Message2(const std::string& msg2){
        msg = msg2;
        id = counter++;
    }

    void print() {
        std::cout << "Message " << id << std::endl;
    }
};

void Lesson65_MoveOperatorEquals::main() {
    Message2 msg1 {"Hi 1"};
    Message2 msg2 {"Hi 2"};

    msg1.print();
    msg2.print();

    // lets create new unique ptr
    std::unique_ptr<int> ptr1 { std::make_unique<int>(123) };

    // and after that move it without malloc
    std::unique_ptr<int> ptr2 { std::move(ptr1) };
    // and it's make ptr1 = nullptr
}
