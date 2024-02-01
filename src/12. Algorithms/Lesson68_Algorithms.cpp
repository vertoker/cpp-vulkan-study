//
// Created by vertog on 01.02.2024.
//

#include <sstream>
#include "Lesson68_Algorithms.h"
#include "iostream"
#include "algorithm"
#include "vector"
#include "string"
#include "random"
#include "ranges"

template<typename InputIt>
std::string join(InputIt begin,
                 InputIt end,
                 const std::string & separator =", ",  // see 1.
                 const std::string & endstr = "")    // see 1.
{
    std::ostringstream ss;
    while (begin != end)
    {
        ss << separator;
        ss << *begin++;
    }
    ss << endstr;
    return ss.str();
}

std::string findValue(const int *begin, const int *end, const int value)
{
    auto result { std::find(begin, end, value) };
    if (result == end) return "Value not found";
    else return "Value found at position " + std::to_string(result - begin);
}
std::string findIf(const int *begin, const int *end, bool(*condition)(int))
{
    auto result { std::find_if(begin, end, condition) };
    if (result == end) return "Value not found";
    else return "Value found at position " + std::to_string(result - begin);
}
std::string copyIf(const int *begin, const int *end, bool(*condition)(int))
{
    auto size = end - begin;
    int *copyArrayStart = new int[size];
    auto copyArrayEnd = std::copy_if(begin, end, copyArrayStart, condition);

    std::string result;
    if (copyArrayStart == copyArrayEnd) result = "Value not found";
    else result = "Values " + join(copyArrayStart, copyArrayEnd);
    delete[] copyArrayStart;
    return result;
}

void Lesson68_Algorithms::main() {
    auto rng = std::default_random_engine { 234 };
    std::vector<std::string> messages { };
    int numbers[] { 8, 7, 1, 2, 6, 3, 5, 4 };
    int *begin { std::begin(numbers) };
    int *end { std::end(numbers) };

    // returns pointers

    // min and max
    messages.emplace_back(std::to_string(*std::min_element(begin, end)));
    messages.emplace_back(std::to_string(*std::max_element(begin, end)));

    // min max
    auto [min, max] = std::minmax_element(std::begin(numbers), std::end(numbers));
    messages.emplace_back(std::to_string(*min) + ' ' + std::to_string(*max));

    // find something, works not usually as I think
    messages.emplace_back(findValue(begin, end, 4));
    messages.emplace_back(findValue(begin, end, 12));

    // find something if condition with value was true
    auto even = [](int value) -> bool { return value % 2 == 0; };
    auto greaterThan10 = [](int value) -> bool { return value > 10; };
    messages.emplace_back(findIf(begin, end, even));
    messages.emplace_back(findIf(begin, end, greaterThan10));
    // also exists find_if_not

    // copy if apply to condition
    messages.emplace_back(copyIf(begin, end, even));
    messages.emplace_back(copyIf(begin, end, greaterThan10));

    // delete_if, using only for vector or dynamic array (or string)
    std::vector<int> numbers2 {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};

    auto iter = std::remove_if(numbers2.begin(), numbers2.end(), even);
    numbers2.erase(iter, numbers2.end());

    messages.emplace_back(join(numbers2.begin(), numbers2.end()));

    // sort
    std::sort(std::begin(numbers), std::end(numbers));
    messages.emplace_back(join(std::begin(numbers), std::end(numbers)));

    // sort
    std::shuffle(std::begin(numbers), std::end(numbers), rng);
    messages.emplace_back(join(std::begin(numbers), std::end(numbers)));
    
    // output
    for (auto& message : messages) {
        std::cout << message << std::endl;
    }
}
