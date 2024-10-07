/*
Problem Description
 
 
Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.

Note: This will be evaluated on the extra memory used. Try to minimize the space and time complexity.


Problem Constraints
1 <= N, M <= 1000
0 <= A[i][j] <= 1


Input Format
The first and the only argument of input contains a 2-d integer matrix, A, of size M x N.


Output Format
Return a 2-d matrix that satisfies the given conditions.


Example Input
Input 1:

[   [1, 0, 1],
    [1, 1, 1], 
    [1, 1, 1]   ]

Input 2:

[   [1, 0, 1],
    [1, 1, 1],
    [1, 0, 1]   ]



Example Output
Output 1:

[   [0, 0, 0],
    [1, 0, 1],
    [1, 0, 1]   ]

Output 2:

[   [0, 0, 0],
    [1, 0, 1],
    [0, 0, 0]   ]

*/

// Not most optimal

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
    public:
        void setZeros(vector<vector<int>> &);
};

void Solution::setZeros(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int nRow = A.size(), nCol = A[0].size();
    vector<int> colIndex;
    vector<int> rowIndex;
    bool flag=false;
    for(int i=0; i<nRow; i++)
    {
        flag = false;
        for(int j=0; j<nCol; j++)
        {
            if(A[i][j]==0)
            {
                colIndex.push_back(j);
                flag = true;
            }
        }
        if(flag)
        {
            rowIndex.push_back(i);
        }
    }
    //unique(colIndex.begin(), colIndex.end());
    for(int i=0; i<rowIndex.size(); i++)
    {
        for(int j=0; j<nCol; j++)
        {
            A[rowIndex[i]][j] = 0;
        }
    }
    
    for(int i=0; i<colIndex.size(); i++)
    {
        for(int j=0; j<nRow; j++)
        {
            A[j][colIndex[i]] = 0;
        }
    }

    for(int i=0; i<nRow; i++)
    {
        for(int j=0; j<nCol; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    cout<<"This is A.\n";
    vector<vector<int>> A {{0,1},{1,1}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    Solution objA;
    objA.setZeros(A);
   
    return 0;
}
