# Friend Function

### Learning Objectives
* Friend function
* Examples


## Introduction to Friend function
* The private data is not accessible outside the class
* To access the private data we use friend function
* A friend function is not a member function of the class
* Friend function can be invoked without using an object
* The argument passed in the friend function is used as its object

* Declaration
```
friend return_type function_name(class_name object)
```

## Example
* Example 1: Friend function
```
#include <iostream>
using namespace std;

class frnd
{
	private:
		int a, b;
	public:
		void input()
		{
			cout<<"Enter the value of a and b\n";
			cin>>a>>b;
		}

	friend int compute(frnd f1);
};

int compute(frnd f1)
{
	int x = f1.a + f1.b;
	return x;
}

int main()
{
	frnd f;
	f.input();
	cout<<"The result is: "<<compute(f)<<"\n";
	
	return 0;
}
```
