//
// Created by vertog on 03.02.2024.
//

#include "Lesson74_RAII.h"
#include "iostream"

class RandomArrayResource {
private:
    int* data;
    unsigned size;

    void randomizeArray() {
        for (unsigned i = 0; i < size; i++) {
            data[i] = (int)(i);
        }
    }

public:
    explicit RandomArrayResource(unsigned size) : size(size) {
        data = new int[size];
        randomizeArray();
        std::cout << "Called constructor" << std::endl;
    }
    ~RandomArrayResource() {
        if (!data) return;
        delete[] data;
        std::cout << "Called destructor" << std::endl;
    }

    void printArray() {
        if (!data) return;
        for (unsigned i = 0; i < size; i++) {
            std::cout << data[i] << std::endl;
        }
    }

    int* release() {
        int* array = data;
        data = nullptr;
        return array;
    }
};

void Lesson74_RAII::main() {
    // RAII - resource acquisition is initialization
    // means for resource you need control your memory
    // for creation/loading you must allocate memory in constructor
    // for forgetting/unloading you must deallocate memory in destructor

    RandomArrayResource randomArray {5};
    randomArray.printArray();

    RandomArrayResource randomArray2 {5};
    auto resource = randomArray2.release();

    for (unsigned i = 0; i < 5; i++) {
        std::cout << resource[i] << std::endl;
    }

    delete[] resource;
}
