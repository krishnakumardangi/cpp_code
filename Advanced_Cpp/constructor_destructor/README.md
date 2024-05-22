# Constructor and Destructor

* Constructors
* Types of constructors
* Destrcutors
* Some examples


## Introduction to Constructors

* Constructor is a member function
* It has the same name as the class name
* Constructors cannot return values
* It is automatically called when an object is created


### Types of constructors
* Parameterized Constructors
* Copy Constructors
* Default Constructors


## Introduction to Destructors

* Destructors are used to deallocate memory
* They are called when an object is destroyed
* A destructor takes no arguments and has no return types


## Example

* Example 1:

```
#include <iostream>
using namespace std;

class Addition
{
    int a, b;
    public:
    Addition (int, int);
    ~Addition();
    int add()
    {
        return (a+b);
    }
};

Addition :: Addition (int x, int y)
{
    a = x;
    b = y;
}

Addition :: ~Addition()
{
    cout<<"Memory Deallocation\n";
}

int main()
{
    Addition objA(2,5);   # Parameterized Constructor
    cout<<"2 + 5 = "<<objA.add()<<"\n";
    
    return 0;

}
```

* Example 2:

```
#include <iostream>
using namespace std;

class Addition
{
    public:
    //int a, b;
    Addition ();
    ~Addition();
    int add(int a, int b)
    {
        return (a+b);
    }
};

Addition :: Addition (int x, int y)
{
    cout<<"I am default constructor.\n";
}

Addition :: ~Addition()
{
    cout<<"Memory Deallocation\n";
}

int main()
{
    Addition objA;   # Default Constructor
    //int x;
    //x = objA.add(2,5);
    cout<<"2 + 5 = "<<objA.add(2,5)<<"\n";
    
    return 0;

}
```


