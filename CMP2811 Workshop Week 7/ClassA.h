#ifndef A_H 
#define A_H /// if not defined, defines guard
#include <string>

using namespace std; 

class A {
public:
    A(const string& name); // parameter required constructor, initialised object with member "name"
    A(const A& other); // new object copy
    ~A();
    void setName(const string& name);
    void printName() const;

private:
    string* name;
};

#endif
