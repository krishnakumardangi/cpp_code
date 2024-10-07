/*
Try the following example in the editor below.

You are given N integers in sorted order not necessarily distinct. Also, you are given Q queries. In each query, you will be given an integer X and you have to tell whether that integer is present in the array. If so, you have to tell at which index (leftmost) it is present and if it is not present, you have to tell the rightmost index at which the current integer can be inserted such that the array remains sorted.

NOTE: You are not required to insert the value in the array. Array is not changed at any point.

Input Format

First line contains an integer N.
Second line contains N space-separarted integer in sorted order.
Third line contains an integer Q, the number of queries. 
Each of the next Q lines contain a single integer X.

Output Format

For each query, print the index as described.

Sample Input

6
5 15 21 21 22 22
5
10
21
23
3
22

Sample Output

1
2
6
0
4
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n; 
    cout<<"Enter size of Vector: "; cin>>n;
    
    vector<int> v(n, 0);
    
    cout<<"Now enter "<<n<<" elements with one space.\n";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    int q;
    cout<<"Enter the number of quaries you want to raise: "; cin>>q;
    
    vector<int>::iterator lower;
    
    for(int i=0;i<q;i++)
    {
        int m;
        cout<<"Enter a single quary: "; cin>>m;
        cout<<"The index (0-based) is : ";
        lower = lower_bound(v.begin(), v.end(), m);
        cout<<lower-v.begin()<<endl;
    }
    cout<<endl;

    return 0;
}
