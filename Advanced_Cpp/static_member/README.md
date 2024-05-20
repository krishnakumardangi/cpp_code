# Static Member in C++

## Learning Objectives
* Static Keyword
* static variable
* Static function
* Through an example


## Intriduction to Static
* Static variables are initialized to zero before the first object is created.
* One one copy of the static variable exists for the whole program.
* All the objectcs will share that variable
* It will remain in the memory till the end of the program.


## Static functions
* A static fintion may be called by itself without depending on any object.
* To access a static function we use,
```classname :: staticfunction();```


## Examples

### Examples 1
```
#include <iostream>
using namespace std;

class statex
{
    private:
        int x;
    public:
        static int sum;
        statex()
        {
            x = sum++;
        }
        static void stat()
        {
            cout<<"Result is: "<<sum<<"\n";
        }
        void number()
        {
            cout<<"Number is: "<<x<<"\n";
        }
};

int statex :: sum;

int main()
{
    statex o1, o2, o3;
    o1.number();
    o1.number();
    o1.number();
    statex::stat();
    cout<<"Now static var sum is"<<o1.sum<<"\n";
    
    return 0;
}
```


