/*
Problem Description
 
 
Given a number A, find all factors of A.


Problem Constraints
1 <= A <= 109


Input Format
The first argument is an integer A.


Output Format
Return an array of all factors of A.


Example Input
A = 6


Example Output
[1, 2, 3, 6]


Example Explanation
For the given A = 6, its factors are 1, 2, 3, and 6, hence returning an array of them.
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
    public:
        vector<int> solve(long int );
};

vector<int> Solution::solve(long int A)
{
    vector<int> ans;
    
    for(int i=1; i<=A; i++)
    {
        if(A%i==0)
        {
            ans.push_back(i);
        }
    }
    
    return ans;
}


int main()
{
    long int n;
    cin>>n;
    Solution objA;
    
    vector<int> ansR;

    ansR = objA.solve(n);
    
    for(int i=0; i<ansR.size(); i++)
    {
        cout<<ansR[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}
