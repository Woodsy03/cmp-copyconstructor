#include <iostream>
#include "ClassA.h"

int main() {
    A* a1 = new A("a"); 
    a1->setName("IamA"); // sets name of object a1
    A a2 = *a1;  
    delete a1; 
    a2.printName(); // prints name of copied object a2
}