/**************************************************************
In this exercise, you need to define a Template Class type function index_of_largest that will generalize the function such that it finds maximum value index for both int and double type array input values.

The function code for finding the index of the largest value in an array:

Takes two values:

    Array of values
    Size of array

Note: All values in the array will be distinct

Sample Input

int array[] = {4, 2, 10, 13, 2}
double array[] = {2.4, 5.2, 3.1, 1.5}

Sample Output

// You have to return the index
3
1
***************************************************************/
#include <iostream>
using namespace std;


// Your code goes here
template <class T>
T index_of_largest(T *x, int y)
{
    int indexMax = 0;
    T iVal = 0;
    for(int i=0; i<y; i++)
    {
        if(iVal<x[i])
        {
            indexMax = i;
            iVal = x[i];
        }
    }
    return indexMax;
}



int main()  
{
    int n;
    cout<<"Enter size of first array (int) and then enter integers: ";
    cin>>n;
    int arr_int[n];
    for(int i = 0; i < n; i++){
        cin>>arr_int[i];
    }
    int res = index_of_largest<int>(arr_int, n);
    cout<<res<<endl;
    
    cout<<"Enter size of first array (double) and then enter double (rational number): ";
    cin>>n;
    double arr_double[n];
    for(int i = 0; i < n; i++){
        cin>>arr_double[i];
    }
    res = index_of_largest<double>(arr_double, n);
    cout<<res<<endl;
    return 0;
}
