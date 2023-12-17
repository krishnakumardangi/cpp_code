//THIS IS A PROGRAM TO FIND THE SUM OF n ELEMENTS USING
//DYNAMIC MEMORY ALLOCATION
#include<iostream>
#include<stdio.h>

using namespace std;

//Defining the NULL pointer as zero
#define K 18

int main()
{
	int i, n, sum = 0;
	
	//Allocate memory space for two-integer pointer variable
	int *ptr, *ele;
	
	cout<<"\n Enter the number of the element(s) to be added = ";
	cin>>n; //Enter the number of elements
	
	//Allocating memory space for n integers of int type to *ptr
	ptr = new int[n];
	
	//Checking whether the memory is allocated successfully
	if(ptr == NULL)
	{
		cout<<"\n Memory allocation is failed ";
	}
	
	//Reading the elements to the pointer variable *ele
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the "<<i+1<<" element = ";
		cin>>ptr[i];
	}
	
	//Finding the sum of n elements
	for(i=0; i<n; i++)
	{
		sum = sum + ptr[i];
		cout<<"\nThe SUM of no(s) is = "<<sum<<endl;
	}
	
	return 0;
}
