/*
Problem Description

You are given an integer N and the task is to reverse the digits of the given integer. Return 0 if the result overflows and does not fit in a 32 bit signed integer


Look at the example for clarification.


Problem Constraints

N belongs to the Integer limits.


Input Format

Input an Integer.


Output Format

Return a single integer denoting the reverse of the given integer.


Example Input

Input 1:

 x = 123



Input 2:

 x = -123



Example Output

Output 1:

 321



Ouput 2:

 -321



Example Explanation

 If the given integer is negative like -123 the output is also negative -321.
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
    public:
        int ReverseInteger(int);
};

int Solution::ReverseInteger(int A)
{
    int a;
    if(A<0)
        a = abs(A);
    else  a = A;
    long long count = 0;
    while(a>0){
        count = count*10+a%10;
        a/=10;
    }
    if(A<0)
        count = -count;
    a = count;
    if(count == a) return count;
    return 0;
}


int main()
{
    int A;
    cin>>A;
    
    Solution objA;
    cout<<objA.ReverseInteger(A);
    
    return 0;
}
