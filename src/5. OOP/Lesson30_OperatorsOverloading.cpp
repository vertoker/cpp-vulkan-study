//
// Created by vertog on 20.01.2024.
//

#include "Lesson30_OperatorsOverloading.h"
#include "iostream"

/*
// binary operator
ReturnType operator Op(Type operand);
// unary operator
ClassType& operator Op();

// binary operator
ReturnType operator Op(const ClassType& left_operand, Type right_operand);
// alternative binary operator
ReturnType operator Op(Type left_operand, const ClassType& right_operand);
// unary operator
ClassType& operator Op(ClassType& operand);
 */

class Counter {
private:
    int value;
public:
    Counter(int Value) {
        value = Value;
    }
    void print() {
        std::cout << value << std::endl;
    }

    Counter& operator=(const Counter& counter)
    {
        if (&counter != this)
            value = counter.value;
        return *this;
    }

    // you can also delete default operator
    // Counter& operator=(const Counter& counter) = delete;

    Counter operator + (const Counter &aCounter) const {
        int result = value + aCounter.value;
        return *new Counter(result);
    }
    bool operator == (const Counter& counter) const
    {
        return value == counter.value;
    }
    Counter& operator += (const Counter& counter)
    {
        value += counter.value;
        return *this;
    }
    Counter operator - () const
    {
        return Counter{-value};
    }

    Counter& operator++ ()
    {
        value += 1;
        return *this;
    }
    Counter operator++ (int)
    {
        Counter copy {*this};
        ++(*this);
        return copy;
    }

    // you can define default realization
    //bool operator == (const Counter& counter) const = default;

    // you can define operator for type casting for every each unique type
    //operator OtherType() const;

    explicit operator int() const { // explicit is for only explicit casting
        return value;
    }

    // Indexing operator
    // enter parameters can be not unsigned and parameters may be several
    unsigned operator[](unsigned index) const
    {
        return index;
    }
};

void Lesson30_OperatorsOverloading::main() {
    Counter counter1 {6};
    Counter counter2 {6};
    auto counter3 = counter1 + counter2;

    counter3.print();
    std::cout << (counter1 == counter2) << std::endl;
}
