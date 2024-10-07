/*
Problem Description
 
 

An integer interval [X, Y] (for integers X < Y) is a set of all consecutive integers from X to Y, including X and Y.

You are given a 2D array A with dimensions N x 2, where each row denotes an interval.

Find the minimum size of a set S such that for every integer interval Z in A, the intersection of S with Z has a size of at least two.


Problem Constraints
1 <= N <= 105
1 <= A[i][0] < A[i][1] <= 109


Input Format
The first argument is a 2D integer array A.


Output Format
Return a single integer denoting the minimum size of S.


Example Input
Input 1:

A = [[1, 3], [1, 4], [2, 5], [3, 5]]

Input 2:

A = [[1, 2], [2, 3], [2, 4], [4, 5]]



Example Output
Output 1:

3

Output 2:

5



Example Explanation
Explanation 1:

Consider the set S = {2, 3, 4}.  For each interval, there are at least 2 elements from S in the interval.
Also, there isn't a smaller size set that fulfills the above condition.
Thus, we output the size of this set, which is 3.

Explanation 2:

An example of a minimum sized set is {1, 2, 3, 4, 5}.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct element
{
    int val;
    int intV;
    int event;  // 0-start of interval and 1-end of iinterval
};

bool customComparator(const element & A, const element & B)
{
    return A.val<=B.val;
}

bool checkInList(const vector<int> &B, int pointVal)
{
    for(int i=0; i<B.size(); i++)
    {
        if(B[i]==pointVal)
        {
            return false;
        }
    }
    return true;
}


int Set_Intersection(vector<vector<int>> &A)
{
    int n=A.size();
    vector<element> list(2*n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            list[2*i+j].val = A[i][j];
            list[2*i+j].intV = i;
            if(j==0)
                list[2*i+j].event = 0;
            else
                list[2*i+j].event = 1;
        }
    }
    sort(list.begin(), list.end(), &customComparator);
    
    vector<int> ansS;
    for(int i=0; i<2*n; i++)
    {
        if(list[i].event == 1)
        {
            if(checkInList(ansS, list[i].val))
                ansS.push_back(list[i].val);
            if(checkInList(ansS, list[i].val-1))
                ansS.push_back(list[i].val-1);
        }
    }
    return ansS.size();
}


int main(int nuArg, char** arguments)
{
    vector<vector<int>> setA = {{1, 3}, {1, 4}, {2, 5}, {3, 5}};
    cout<<"The set is given to function: \n";
    for(int i=0; i<setA.size(); i++)
    {
        cout<<"["<<setA[i][0]<<","<<setA[i][1]<<"]"<<endl;
    }

    int s=0;

    s = Set_Intersection(setA);

    cout<<"The value of S is: "<<s<<endl;


    return 0;
}
