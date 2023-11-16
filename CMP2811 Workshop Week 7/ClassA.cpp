#include "ClassA.h"
#include <iostream>

// Constructor with string parameter
A::A(const std::string& name) {
    this->name = new std::string(name);
}

// Copy constructor
A::A(const A& TempStr) {
    name = new std::string(*TempStr.name);
}

// Copy assignment operator
A& A::operator=(const A& TempStr) {
    if (this != &TempStr) {
        delete name;
        name = new std::string(*TempStr.name);
    }
    return *this;
}

// Set the name
void A::setName(const std::string& name) {
    *(this->name) = name;
}

// Print the name
void A::printName() const {
    std::cout << *name << std::endl;
}

A::~A() { delete name; } // destructor