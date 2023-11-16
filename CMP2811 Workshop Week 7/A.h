#pragma once
#include <string>

using namespace std;

class A
{
private: //private and protected work
    string name;

public:
    A(string name);
    A(const A& a);
    void setName(string name); // calls A::setName in ClassA.cpp
    void printName() const; // calls A::printName in ClassA.cpp

};

