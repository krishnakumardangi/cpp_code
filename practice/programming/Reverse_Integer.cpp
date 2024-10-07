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
    int flag = 0;
    if(A<0)
        flag = 1;
    int a = abs(A);
    string na, an;
    na = to_string(a);
    an = to_string(a);
    for(int i=0; i<na.size(); i++)
    {
        an[na.size()-1-i] = na[i];
    }
    int ans;
    ans = stoi(an);
    if(flag==0)
        return ans;
    else
        return -ans;
}


int main()
{
    int A;
    cin>>A;
    
    Solution objA;
    cout<<objA.ReverseInteger(A);
    
    return 0;
}
