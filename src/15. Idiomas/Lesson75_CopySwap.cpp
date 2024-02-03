//
// Created by vertog on 03.02.2024.
//

#include "Lesson75_CopySwap.h"
#include "iostream"

template<typename T>
class SomeObject {
private:
    T* data;
    unsigned size;

public:
    explicit SomeObject(unsigned size) : size(size) {
        data = new int[size];
        std::cout << "Called constructor" << std::endl;
    }
    ~SomeObject() {
        delete[] data;
        std::cout << "Called destructor" << std::endl;
    }

    // equal operator
    SomeObject& operator=(const SomeObject& obj) {
        SomeObject copy {obj}; // create copy of an object
        if (this != &obj)
            swap(obj);
        return *this;
    }

    void swap(SomeObject& obj) noexcept {
        std::swap(data, obj.data);
        std::swap(size, obj.size);
    }

    void printArray() {
        if (!data) return;
        for (unsigned i = 0; i < size; i++) {
            std::cout << data[i] << std::endl;
        }
    }
};

void Lesson75_CopySwap::main() {
    // Idea of idiom os simple
    // 1. Create object copy
    // 2. Modify copy. The original object does not touch
    // 3. If modifying is being success, then replace (swap) copy top the original object
    // If it's not, create throw exception or something

    SomeObject<int> value1 {5};
    SomeObject<int> value2 {5};


}
