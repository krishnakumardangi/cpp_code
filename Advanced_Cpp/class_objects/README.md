# Class and Objects

### Learning Objective
* Classes
* Objects
* Encapsulation
* Data Abstraction
* Examples


## Introduction
1) What is Class?
* Class is created using a keyword class
* It holds data and functions
* Class links the code and data
* The data and functions of the class are called as members of the class.

2) What is Objects?
* Objects are variables
* They are the copy of a class
* Each off them has Properties and Behavior
* Properties are defined through data elements
* behavior is defined through member functions called methods.

## Syntax
```
class class-name
{
    public/private/protected:
    Data members
    Member functions
}
```

## Access Specifiers
* Public specifier: The public specifier allows the data to be accessed outside the class. A public member can be used anywhere in the program.
* Private specifier: The members declared as private cannot be accessed outside the class. Private member can be used only by the members of the class.
* Protected specifier: Protected members cannot be accessed from outside the class. They can be accessed by a derived class.

## Scope Resolution Operator (::)
* It is used to access hidden data
* To access the variable or function with the same name we use " :: " scope operator.
* Suppose the local variable and the global variable have the same name, then the local variable gets the priority.
* We can access the gloable variable using the " :: " scope operator.

## Examples
```
#include <iostream>
using namespace std;
class square
{
    int x;    // private 
    public:
    int area(int);
};  // data and function get bind in class this is called Encapsulation

int square :: area (int a)
{
    x = a;
    return x*x;
}

int main()
{
    square objA;
    cout<<"The area of square whose side length 4 unit is "<<objA.area(4)<<"\n"<<endl;
    
    return 0;
}
```
