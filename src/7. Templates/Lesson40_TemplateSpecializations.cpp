//
// Created by vertog on 25.01.2024.
//

#include "Lesson40_TemplateSpecializations.h"
#include "iostream"

//template <typename T, typename K> class Person19;

// Template source
template <typename T>
class Person18 {
private:
    T id;
    std::string name;

public:
    Person18(std::string name) : name(std::move(name)) {

    }

    void setId(T value) { id = value; }
    void print() {
        std::cout << "ID - " << id << "\nName - " << name << std::endl;
    }
};

// Template source
template <typename T, typename K>
class Person19 {
private:
    T id;
    K id2;
    std::string name;

public:
    Person19(std::string name) : name(std::move(name)) {

    }

    void setId(T value) { id = value; }
    void setId2(K value) { id2 = value; }
    void print() {
        std::cout << "Id: " << id << std::endl;
        std::cout << "Id2: " << id2 << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
};

// Full specialization by unsigned type
// That class overrides the original class when you create
// an object that class with unsigned type
template <>
class Person18<unsigned> {
private:
    static inline unsigned count {};
    unsigned id;
    std::string name;

public:
    Person18(std::string name) : name(std::move(name)) {
        id = ++count;
    }

    void print() const {
        std::cout << "Id: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
};

// Partial specialization by unsigned type
// That class also overrides the original class when you create an object
// But in that time, you can declare only one of the types and other do not touch
template <typename K>
class Person19<unsigned, K> {
private:
    static inline unsigned count {};
    unsigned id;
    K id2;
    std::string name;

public:
    Person19(std::string name) : name(std::move(name)) {
        id = ++count;
    }

    void print() const {
        std::cout << "Id: " << id << std::endl;
        std::cout << "Id2: " << id2 << std::endl;
        std::cout << "Name: " << name << std::endl;
    }
};

void Lesson40_TemplateSpecializations::main() {
    Person18<unsigned> tom {"Tom"};
    Person18<unsigned> sam {"Sam"};
    tom.print();
    sam.print();

    Person18<std::string> bob {"Bob"};
    bob.setId("id12345");
    bob.print();

    Person19<unsigned, unsigned> tom2 {"Tom2"};
    Person19<unsigned, unsigned> sam2 {"Sam2"};
    tom.print();
    sam.print();

    Person19<std::string, unsigned> bob2 {"Bob"};
    bob2.setId("id12345");
    bob2.print();
}
