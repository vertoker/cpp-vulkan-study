//
// Created by vertog on 17.01.2024.
//

#include "Lesson18_FunctionsRecursion.h"
#include "iostream"

unsigned long long factorial(unsigned);
unsigned long long fibonacci(unsigned);

void sort(int *numbers, const size_t &size);
void sort_internal(int *numbers, size_t &start, size_t &end, size_t &current);
void swap(int *numbers, const size_t &first, const size_t &second);

void Lesson18_FunctionsRecursion::main() {
     unsigned n = 5;
     unsigned m = 10;
     auto result = factorial(n);
     auto fib = fibonacci(m);
     std::cout << result << std::endl;
     std::cout << fib << std::endl;

    int nums[] {3, 0, 6, -2, -6, 11, 3};
    sort(nums, std::size(nums));
    for (auto num: nums)
        std::cout << num << "\t";
    std::cout << std::endl;
}

unsigned long long factorial(unsigned n)
{
    if (n > 1)
        return n * factorial(n - 1);
    return 1;
}
unsigned long long fibonacci(unsigned n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void sort(int *numbers, const size_t &size) {
    size_t start = 0;
    size_t current = 0;
    size_t end = size - 1;
    sort_internal(numbers, start, end, current);
}

void sort_internal(int *numbers, size_t &start, size_t &end, size_t &current) {
    current = start;
    for (size_t i = current + 1; i <= end; i++) {
        if (numbers[i] < numbers[current]){
            swap(numbers, ++current, i);
        }
    }
    swap(numbers, start, current);
    if (current > start) { // left
        end = current - 1;
        sort_internal(numbers, start, end, current);
    }
    if (end > current + 1) { // right
        start = current + 1;
        sort_internal(numbers, start, end, current);
    }
}
void swap(int *numbers, const size_t &first, const size_t &second) {
    int temp = numbers[first];
    numbers[first] = numbers[second];
    numbers[second] = temp;
}