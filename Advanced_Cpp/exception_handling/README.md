# Exception Handling

### Learning Objectives
* Exception Handling
* Examples


## Introduction to Exception
* An exception is a problem that arises during the execution of a program.
* It is a run-time error that a program may detect.


## Introduction to Exception Handling
* The response given to the problems occured during the execution of the program.
* Exception handling allows program to contiue execution.
* Helps identifying the problem.
* Terminates the program in a controlled manner.


## Types of Exceptions
* try
* catch
* throw


## Syntax
```
throw;
try
{              //try block starts
.............
}              // try block ends
catch(arg)
{              // catch block starts
.............  
}              // catch block ends
```


## Examples
* Examples 1: Exception handling
```
#include <iostream>
using namespace std;

double division(int a, int b)
{
	if(b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a/b);
}

int main()
{
	int x, y;
	double z;
	
	cout<<"Enter value of x and y\n";
	cin>>x>>y;
	
	try
	{
		z = division(x, y);
		cout<<z<<"\n";
	}
	catch (const char* msg)
	{
		cout<<msg<<endl;
	}

	return 0;
}
```
