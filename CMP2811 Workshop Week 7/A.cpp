#include "A.h"
using namespace std;

A::A(string name) : OutputStr(name) {} // initiates member variable of class A with the value of name

A::A(const A& )

void A::setName(string name) {
    OutputStr = name;
}

void A::printName() const {
    cout << " The object content is " << OutputStr; // console output
}