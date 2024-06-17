# Polymorphism

### Learning Objective
* Polymorphism
* Virtual Function
* Through an Example


## Introduction to Polymorphism
* Polymorphism is the ability to take different forms.
* It is the mechanism to use a function with same name in different ways.

## Types of Polymorphism
* Polymorphism
	* Compile Time
		* Function Overloading (In C++, we can use two functions having the same name if they have different parameters (either types or number of arguments).)
		* Operator Overloading (In C++, we can overload an operator as long as we are operating on user-defined types like objects or structures.)
	* Run Time
		* Virtual Functions



## Virtual Functions
* virtual function is the member function of a class.
* It can be overriden in its derived class.
* It is declared with virtual keyword.
* Virtual function call is resolved at run-time.


## Examples

* Example 1: virtual function
```
#include <iostream>
using namespace std;

class Parallelogram
{
    protected:
		int width, height, ar;
	public:
		void set_values(int a, int b)
		{
			width = a; height = b;
		}
		virtual int area()
		{
			ar = width*height;
			cout<<"Area of parallelogram is "<<ar<<"\n";
		}
};

class Reactangle : public Parallelogram
{
	public:
		int area()
		{
			ar = width*height;
			cout<<"Area of rectangle is "<<ar<<"\n";
		}
};

class Triangle : public Parallelohram
{
	public:
		int area()
		{
			ar = width*height/2;
			cout<<"Area of trianle is "<<ar<<"\n";
		}
};

int main()
{
	Parallelogram *parallel, p;
	Reactange rect;
	Triangle trgl;
	
	parallel = &p;
	parallel -> set_values(3,2);
	parallel -> aera();

	parallel = &rect;
	parallel -> set_values(3,2);
	parallel -> aera();

	parallel = &trgl;
	parallel -> set_values(3,2);
	parallel -> aera();

	return 0;
}
```
