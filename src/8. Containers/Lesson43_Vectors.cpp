//
// Created by vertog on 27.01.2024.
//

#include "Lesson43_Vectors.h"

#include "iostream"
// include vector
#include "vector"

void Lesson43_Vectors::main() {

    // std::vector or std::array
    // Use std::array for constexpr arrays, and std::vector for non-constexpr arrays.
    // (constexpr - constant expression, calculates on a compilation step)

    std::vector<int> v1;                 // empty vector
    std::vector<int> v2(v1);             // vector v2 - copy of vector v1
    std::vector<int> v3 = v1;            // vector v3 - copy of vector v1
    std::vector<int> v4 (5);          // vector v4 consist of 5 numbers, each equals 0 (do not specify)
    std::vector<int> v5 (5, 2); // vector v5 consist of 5 numbers, each equals 2
    std::vector<int> v6 {1, 2, 4, 5};    // vector v6 contains 1, 2, 4, 5
    std::vector<int> v7 = {1, 2, 3, 5};  // vector v7 contains 1, 2, 3, 5

    // also look at differences between brackets and initializations
    std::vector<int> v11 (5); // length = 5, consists of 0 (default value)
    std::vector<int> v12 {1}; // length = 1, consists of 1
    std::vector<int> v13 (5, 2); // length = 5, consists of 2
    std::vector<int> v14 {5, 2}; // length = 2, consists of 5 and 2

    // std::vector<int> v{5, "hi"}; // not valid, except only one type


    // READ
    std::vector<int> numbers {1, 2, 3, 4, 5};
    std::vector<int> numbers2 {1, 2, 3, 4, 5};

    int first = numbers.front(); // get a first element of a vector
    int last = numbers.back();   // get the last element of a vector
    int second = numbers[1];     // get index element of vector
    std::cout << "first: " << first << std::endl;
    std::cout << "second: " << second << std::endl;
    std::cout << "last: " << last << std::endl;

    numbers[0] = 6;  // set value by index
    for(int n : numbers)
        std::cout << n << "\t"; // 6  2  3  4  5
    std::cout << std::endl;


    // WRITE
    numbers.resize(6); // you can resize vector
    // it allocates memory for a new capacity with that size

    for(int n : numbers)
        std::cout << n << "\t"; // 6  2  3  4  5  0
    std::cout << std::endl;



    numbers.push_back(10); // you can add to the end of the vector new element
    // it copies and place in a new memory place

    for(int n : numbers)
        std::cout << n << "\t"; // 6  2  3  4  5  0  10
    std::cout << std::endl;



    numbers.emplace_back(20); // do the as push_back, but differently
    // it doesn't copy value and place into the new item memory place
    // it creates new item directly in the place, where it should be
    // it's more optimized that push_back, but doesn't work every time

    // ADVICE: use emplace_back if you can, elsewhere use push_back

    for(int n : numbers)
        std::cout << n << "\t"; // 6  2  3  4  5  0  10  20
    std::cout << std::endl;



    numbers.pop_back();

    for(int n : numbers)
        std::cout << n << "\t"; // 6  2  3  4  5  0  10
    std::cout << std::endl;



    auto i1 = numbers.begin();
    numbers.insert(i1, 20);

    for(int n : numbers)
        std::cout << n << "\t"; // 20  6  2  3  4  5  0  10
    std::cout << std::endl;



    numbers.clear();

    for(int n : numbers)
        std::cout << n << "\t"; //
    std::cout << std::endl;



    numbers.swap(numbers2);

    for(int n : numbers)
        std::cout << n << "\t"; // 1  2  3  4  5
    std::cout << std::endl;



    // size of vector
    std::cout << numbers.size() << std::endl;

    try
    {
        int n = numbers.at(10);
        //int n = numbers[10]; // equivalent above method
    }
    catch (std::out_of_range e)
    {
        std::cout << "Incorrect index" << std::endl;
    }

    std::vector<int> v21 {1, 2, 3};
    std::vector<int> v22 {1, 2, 3};
    std::vector<int> v23 {3, 2, 1};

    bool v1v2 = v21 == v22;   // true
    bool v1v3 = v21 != v23;   // true
    bool v2v3 = v22 == v23;   // false

    std::cout << v1v2 << std::endl;
    std::cout << v1v3 << std::endl;
    std::cout << v2v3 << std::endl;
}
