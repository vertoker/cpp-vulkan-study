//
// Created by vertog on 24.01.2024.
//

#include "Lesson38_Templates.h"
#include "iostream"

// // // // // //
template<typename T> // better to write like this, in 2 lines
T add(T, T); // first prototype
// // // // // //

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T* max(T* a, T* b) {
    return *a > *b ? a : b;
}

// here's actually uses max overload with different parameters
template<typename T>
// decltype(auto) is a magical replacer of a return type, which declare a type by compiler automatically
// but be careful with that: if you mistake, it's going to be a scary mistake (really be careful)
decltype(auto) max(const T* array, int &size) {
    if (size == 0)
        throw std::out_of_range("Empty array");

    const T* current = &array[0]; // starts with a first element,
    // I'm using a pointer for skip malloc operation

    for (unsigned i {1}; i < size; i++) {
        // if next element bigger than current
        if (array[i] > *current)
            current = &array[i]; // setup pointer to the current
    }

    return current;
}

// ypu can declare not types in the parameters
template <typename T, unsigned N> void print(const T& value)
{
    for (unsigned i {}; i < N; i++)
        std::cout << value << std::endl;
}

void Lesson38_Templates::main() {

    std::cout << "int: " << add(4, 5) << std::endl;
    std::cout << "double: " << add(4.4, 5.5) << std::endl;
    std::cout << "string: " << add(std::string("hel"), std::string("lo")) << std::endl;

    int a = 5, b = 4;
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    double c = 3, d = 4;
    std::cout << "max: " << *max(&c, &d) << std::endl;
    std::cout << "max: " << *max<double>(&c, &d) << std::endl; // explicit type correction

    double e[] {1, 2, 3, 4, 5, 1, 8, 2};
    int eSize = std::size(e);

    std::cout << "max: " << *max(e, eSize) << std::endl;

    print<double, 5>(c);
}

template<typename T> T add(T a, T b) {
    return a + b;
}