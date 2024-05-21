# Inheritance

### Learning Objective
* Inheritance
* Types of Inheritance
* Examples


## Introduction to Inheritance
* When one object aquires the property of another it is called as inheritance
* It is the process of reusing the existing class without modifying them


## Types of Inheritance
* Single level inheritance
* Multiple level inheritance
* Hierarchical Inheritance
* Multilevel Inheritance
* Hybrid Inheritance


## Base class and Derived class
* The base class has its own properties and functionality
* It is also called as parent class
* It has the common qualities that all the objects can inherit
* The derived class is the child class
* Derived class inherits the properties and functionality of the base class


### Examples

* Example 1
```
#include <iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    char name[20];
    
    public:
    void input();
    void display();
};

void student :: input()
{
    cout<<"Enter Roll No: ";
    cin>>roll_no;
    cout<<"Enter Name;
    cin>>name;
}

void student :: display()
{
    cout<<"Roll no is: "<<roll_no<<"\n";
    cout<<"Name is: "<<name<<"\n";
}

class exam_inherit : public student
{
    private:
    int sub1;
    int sub2;
    int sub3;
    int total;
    
    public:
    void input_exam();
    void display_exam();
};

void exam_inherit :: input_exam()
{
    cout<<"Enter marks of subject1: ";
    cin>>sub1;
    cout<<"Enter marks of subject2: ";
    cin>>sub2;
    cout<<"Enter marks of subject3: ";
    cin>>sub3;
}

void exam_inherit :: display_exam()
{
    total = sub1 + sub2 + sub3;
    cout<<"Total is : "<<total<<"\n";
}

class grade : public exam_inherit
{
    private:
    int avg;
    
    public:
    void average();
};

void grade :: average()
{
    avg = total/3;
    cout<<"Average: "<<avg<<"\n";
}

int main()
{
    grade ex;
    ex.input();
    ex.input_exam();
    ex.display();
    ex.display_exam();
    ex.average();
    
    return 0;
}
```
