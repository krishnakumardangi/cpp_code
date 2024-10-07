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
#include<cmath>
#include<algorithm>
using namespace std;

class Solution
{
    public:
        vector<int> solve(int );
};

vector<int> Solution::solve(int A)
{
    vector<int> factors;

    for (int i = 1; i*i <= A; i++) 
    {
        if (A % i == 0) 
        {
            factors.push_back(i);

            if (i != sqrt(A)) 
            {
                factors.push_back(A / i);
            }
        }
    }

    sort(factors.begin(), factors.end());

    return factors; 
}


int main()
{
    int n;
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
