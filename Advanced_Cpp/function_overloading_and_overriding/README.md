# Function Overloading and Overriding in C++

### Learnig objective
* Function Overloading
* Function Overriding
* Examples


## Introduction to Function overloading
* Function Overloading means two or more functions can have same name.
* The number of arguments and the data-type of the arguments will be different.
* When a function is called it is selected based on the argument list.


## Difference b/w Overloading and Overriding
* Overloading can occur without inheritance.
* Overriding occurs when one class is inherit from another.
* In overloading the arguments and the return-type must differ.
* in overriding the arguments and the return-type must be same.
* in overloading the function name is same, But it behaves differently depending on the arguments passed to them.
* In overriding the functin name is same. Derived class function can perform differnt operations from the base class.


## Examples

* Example 1: Overloading
```
#include <iostream>
using namespace std;

int add(int a, int b, int c)
{
    return (a + b + c);
}

float add(float d, float e)
{
    return (d + e);
}

int main()
{
    int add(int, int, int);
    float add(float, float);
    int a, b, c;
    float d, e, sum;
    
    cout<<"Enter three integers\n";
    cin>>a>>b>>c;
    sum = add(a, b, c);
    cout<<"Sum of integers is: "<<sum<<endl;
    
    cout<<"Enter two floating point numbers\n";
    cin>>d>>e;
    sum = add(d, e);
    cout<<"Sum of floating point numbers is: "<<sum<<"\n";
    
    return 0;
}
```

* Example 2: Overriding
```
#include <iostream>
using namespace std;

class arithmetic
{
    protected:
        int a, b, sum, sub, mul, div;
    public:
        void values(int x, int y)
        {
            a = x, b = y;
		}
		virtual int operations()
		{
			sum = a + b;
            cout<<"Addition of two numbwrs is: "<<sum<<"\n";
		}
};

class Subtract: public arithmetic
{
	public:
		int operations()
		{
			sub = a - b;
			cout<<"Product of two numbers is: "<<sub<<"\n";
		}
};

class Multiply: public arithmetic
{
	public:
		int operations()
		{
			mul = a*b;
			cout<<"Product of two numbers is: "<<mul<<"\n";
		}
};

class Divide : public arithmetic
{
	public:
		int operations()
		{
			div = a/b;
			cout<<"Division of two numbers is: "<<div<<"\n";
		}
};

int main()
{
	aritmetic *aruth, p;
    Subtract subt;
	Multiply mult;
	Divide divid;
	
	arith = &p;
	arith->values(30, 12);
	aruth->operations();
	
	arith = &subt;
	arith->values(42, 5);
	aruth->operations();

	arith = &mult;
	arith->values(6, 5);
	aruth->operations();
	
	arith = &divid;
	arith->values(65, 12);
	aruth->operations();


	return 0;
}
```
