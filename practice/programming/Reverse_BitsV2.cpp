/*
Problem Description

Reverse the bits of an 32 bit unsigned integer A.


Problem Constraints

0 <= A <= 232


Input Format

First and only argument of input contains an integer A.


Output Format

Return a single unsigned integer denoting the decimal value of reversed bits.


Example Input

Input 1:

 0

Input 2:

 3



Example Output

Output 1:

 0

Output 2:

 3221225472
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
    public:
        unsigned int reverse(unsigned int );
};

 
unsigned int Solution::reverse(unsigned int A) {
    // We will make the LSBs of A, the MSBs of result
    int result = 0;
    for(int i = 0; i < 32; i++){
        result = result << 1; // Left shifting result to make space for the LSB of A
        result |= A&1; // Adding LSB of A to result
        A = A >> 1; // Right shifting A to get 2nd LSB of A
    }
    return result;
}


int main()
{
    unsigned int A;
    cin>>A;
    Solution objA;
    cout<<objA.reverse(A)<<endl;
   
    return 0;
}
