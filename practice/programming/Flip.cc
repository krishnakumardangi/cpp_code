/*

*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
    public:
        vector<int> flip(string);
};

vector<int> Solution::flip(string A) 
{
    vector<int> ans;
    bool flag = true;
    int n=A.size();
    vector<int> arr(n);
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]=='0')
        {
            arr[i]=1; 
            flag=false;
        }
        else
            arr[i]=-1;
    }
    if(flag) return ans;
    int currentsum=0;
    int maxsum = 0;
    int left=0;
    int right=0;
    ans.resize(2);
    for(int i=0; i<n; i++)
    {
        currentsum+=arr[i];
       
        if(currentsum>maxsum)
        {
            maxsum = currentsum;
            right = i;
            ans[0]=left+1;
            ans[1]= right+1;
        }
       
        if(currentsum<0)
        {
            currentsum=0;
            left = i+1;
        }
    }
   
   
    return ans;
}    


int main()
{
    vector<int> test;
    
    Solution objA;

    test = objA.flip("010");

    for(int i=0; i<test.size(); i++)
    {
        cout<<test[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}
