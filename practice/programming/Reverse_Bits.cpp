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


// Incomplete

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

unsigned int Solution::reverse(unsigned int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string temp="\0";
    while(b>0)
    {
        temp = to_string(b%2) + temp;
        b=b/2;
    }
    cout<<temp<<endl;
    string ans="00000000000000000000000000000000\0";
    string add="\0";
    if(temp.size()!=32)
    {
        for(int i=0; i<(32-temp.size()); i++)
        {
            add = add + "0";
        }
        add = add + temp;
    }
    for(int i=0; i<32; i++)
    {
        ans[32-i-1] = add[i];
    }
    cout<<ans<<endl;
    return stoll(ans);
}

    


int main()
{
    unsigned int A;
    cin>>A;
    Solution objA;
    cout<<objA.reverse(A)<<endl;
   
    return 0;
}
