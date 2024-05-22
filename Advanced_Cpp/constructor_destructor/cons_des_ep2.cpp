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

Addition :: Addition ()
{
    cout<<"I am default constructor.\n";
}

Addition :: ~Addition()
{
    cout<<"Memory Deallocation\n";
}

int main()
{
    Addition objA;   // Default Constructor
    //int x;
    //x = objA.add(2,5);
    cout<<"2 + 5 = "<<objA.add(2,5)<<"\n";

    return 0;

}
