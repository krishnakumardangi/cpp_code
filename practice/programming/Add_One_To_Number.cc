// This program can one handle till the length of Array upto 15.
/*
Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer. For example: 
for this problem, following are some good questions to ask :

    Q : Can the input have 0's before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
    A : For the purpose of this question, YES
    Q : Can the output have 0's before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
    A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.



Problem Constraints
1 <= |A| <= 106
0 <= Ai <= 9


Input Format

First argument is an array of digits.


Output Format

Return the array of digits after adding one.


Example Input

Input 1:

[1, 2, 3]



Example Output

Output 1:

[1, 2, 4]
*/
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

vector<int> plusOne(vector<int> &A) 
{
    // Start writing your code here.
    long long nuRe = 0;
    int n = A.size();
    for(int i=0;i<n; i++)
    {
        nuRe = pow(10, n-1-i)*A[i] + nuRe;
    }
    vector<int> finalA;
    nuRe = nuRe + 1;
    int Nu = 0;
    while(nuRe!=0)
    {
        finalA.push_back(nuRe%10);
        nuRe = nuRe/10;
        Nu++;
    }
    vector<int> temp;
    for(int i=0;i<Nu; i++)
    {
        temp.push_back(finalA[Nu-i-1]);
    }
    return temp;
}


int main()
{
    vector<int> arr;
    int x, n;
    cout<<"Enter size of initial Array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    vector<int> result;
    result = plusOne(arr);
    cout<<"Initial Array look like: \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Finally Array look like: \n";
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<"\n";
    return 0;
}      
