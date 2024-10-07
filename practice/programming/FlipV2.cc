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
    vector<int>ans;
    if(!A.size()) return ans;
    int a=1,b=1,sum=0,m=0,x=1,n=0,max_sum=-1;
    for(int i=0;i<A.size();i++){
        if(A[i]=='0'){sum+=1; n=1;}
        else {sum+=-1; m=1;}
        if(sum<0){
            sum=0;
            x=i+2;
            continue;
        }
        if(sum>max_sum){
            a = x;
            b = i+1;
            max_sum=sum;
        }
    }
    if(!m) {a=1; b=A.size();}
    if(!n) return ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}    


int main()
{
    vector<int> test;
    
    Solution objA;

    test = objA.flip("1101010001");

    for(int i=0; i<test.size(); i++)
    {
        cout<<test[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}
