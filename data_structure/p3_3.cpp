// Program to find factorial of a number, recursively

#include<iostream>

using namespace std;

int factorial(int n)
{
    if( n == 0)
    {
        // Factorial of zero is 0.
        return 0;
    }
    else if ( n == 1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    int n;
    
    cout<<"\nEneter the number: ";
    cin>>n;
    
    cout<<"\nThe factorial of "<<n<<" is: "<<factorial(n)<<endl;
    
    return 0;
}
