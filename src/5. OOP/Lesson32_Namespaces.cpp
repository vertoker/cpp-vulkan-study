//
// Created by vertog on 20.01.2024.
//

#include "Lesson32_Namespaces.h"
#include "iostream"

namespace coolNamespace {

    // nested namespaces
    namespace coolNamespace2 {

    }


    class Counter {
    private:
        int value;

    public:
        Counter(int val) {
            value = val;
        }

        void print() {
            std::cout << value << std::endl;
        }
    };
}

// Do not use using namespaces
using namespace coolNamespace;
using namespace coolNamespace::coolNamespace2;

// But use pseudonyms
using ctr = coolNamespace::Counter;

void Lesson32_Namespaces::main() {
    ctr counter {4};
    counter.print();
}
