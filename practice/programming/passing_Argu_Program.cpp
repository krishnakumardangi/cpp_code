//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

int main(int numArg, char ** arguments)
{
    // numArg tells number of Argument passed to program including 'a.out' and arguments contains those values as string.
    cout<<"The number of argumrnt is passed to Program is: "<<numArg<<endl;
    
    int a;
    a = stoi(arguments[1]);
    //cin>>a;
    
    // Operation
    cout<<a/10<<endl;
    
    return 0;
}
