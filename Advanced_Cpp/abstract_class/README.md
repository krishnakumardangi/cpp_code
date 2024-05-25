# Abstract Class and Pure virtual function in C++

### Learning Objectives
* Abstract class
* Pure virtual function
* Examples


## Abstract Class
* Abstract class is always a base class
* It contains atleast one pure virtual function
* We cannont create an instance of abstract class


## Pure Virtual Function
* A pure virtual function is a function with no body
* It is nit defined in the base class
* It is declared as:
	- ``` virtual void virtualfunctionname()=0 ```
* A derived class must oerride the function
* Otherwise compiler will give an error
* It is upto a derived class to implement the function


## Examples
* Example 1: abstract.cpp
```
#include <iostream>
using namespace std;

class abstractinterface
{
	public:
	virtual void numbers() = 0;
	void input();
	int a, b;
};

void abstractinterface:: input()
{
	cout<<"Enter two numbers "<<endl;
	cin>>a>>b;
}

class add : public abstractinterface
{
	public:
	void numbers()
	{
		int sum;
		sum = a + b;
		cout<<"Sum is "<<sum<<"\n";
	}
};

class sub : public abstractinterface
{
	public:
	void numbers()
	{
		int diff;
		diff = a - b;
		cout<<"Difference is "<<diff<<"\n";
	}
};

int main()
{
	add obj1;
	obj1.input();
	obj1.numbers();
	sub obj2;
	obj2.input();
	obj2.numbers();

	return 0;
}
```
