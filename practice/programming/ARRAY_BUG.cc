/*
The following code is supposed to rotate the array A by B positions.

So, for example,


A : [1 2 3 4 5 6]
B : 1

The output :

[2 3 4 5 6 1]

However, there is a small bug in the problem. Fix the bug and submit the problem.

Answer: modulo operator was missing after (i + B).
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    private:
        int k;
    public:
        vector<int> rotateArray(vector<int> & , int);

};

//vector<int> Solution(vector<int> &A, int B) 
vector<int> Solution :: rotateArray(vector<int> &A, int B) 
{
	vector<int> ret; 
	for (int i = 0; i < A.size(); i++) {
		ret.push_back(A[(i + B)%A.size()]);
	}
	return ret; 
}


int main()
{
    int B = 4;
    vector<int> K;
    for(int i = 0; i < 10; i++)
    {
        K.push_back(i*9);
    }
    
    Solution objA;
    vector<int> rotate;
    rotate = objA.rotateArray(K, B);
    
    for(int i = 0; i < 10; i++)
    {
        cout<<rotate[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}
