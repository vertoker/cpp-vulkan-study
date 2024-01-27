//
// Created by vertog on 27.01.2024.
//

#include "Lesson42_Arrays.h"

#include "iostream"
// include array
#include "array"

// std::array it's a usual container under a standard array
void Lesson42_Arrays::main() {
     std::array<int, 5> a1 { }; // init default 0 array, just allocate memory
     a1.fill(4); // which you can fill like that
     std::array<int, 5> a2 {1, 2, 3, 4, 5}; // standard init
     std::array<int, 5> a3 {1, 2, 3}; // standard not full init
     //std::array<int, 5> a4 {1, 2, 3, 4, 5, 6}; // ypu can't init array with bigger than this
    std::array<int, 0> a4 { }; // you can init empty array

     for (int n : a1)
         std::cout << n << "\t";
     std::cout << std::endl;
     for (int n : a2)
         std::cout << n << "\t";
     std::cout << std::endl;

     // array is empty or not
     std::cout << a1.empty() << std::endl;
     std::cout << a4.empty() << std::endl;
}
