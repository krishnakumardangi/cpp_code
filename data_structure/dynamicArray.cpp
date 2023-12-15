#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"How many numbers will you type?\n";
	cin>>n;
	int *arr = new int(n);
	cout<<"Value at index 0: "<<arr[0]<<endl;
	cout<<"Enter "<<n<<" numbers.\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"You typed: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete [] arr;
	return 0;
}
