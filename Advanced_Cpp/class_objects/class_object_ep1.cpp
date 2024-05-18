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
