#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    vector<int> Xv;
    cout<<"Enter the same number of array which one backspace: ";
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        Xv.push_back(temp);
    }
    cout<<"Enter the position of array [0-based] which element you want to delete: ";
    int k;
    cin>>k;
    Xv.erase(Xv.begin()+k);  // Xv.erase(Xv.begin+1, Xv.begin()+5)
    sort(Xv.begin(), Xv.end());
    for(int i=0; i<n-1; i++)
    {
        cout<<Xv[i]<<endl;
    }
    return 0;
}
