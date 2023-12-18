#include<iostream>

using namespace std;

int dynamicMA_of_an_element()
{
	int *ptr1;
	ptr1 = new int(10);
	
	cout<<"This is the stored value "<<*ptr1<<endl;
	
	return 0;
}

int dynamicMA_of_Array()
{
	int *ptr2;
	ptr2 = new int[5];
	
	cout<<"Fill this array:\n";
	
	for(int i=0; i<5; i++)
	{
		cout<<"The element no. "<<i+1<<" to be entered :";
		cin>>ptr2[i];
	}
	
	for(int i=0; i<5; i++)
	{
		cout<<"The element no. "<<i+1<<" is :"<<ptr2[i]<<endl;
	}
	

	return 0;
}

int main()
{
	dynamicMA_of_an_element();
	
	dynamicMA_of_Array();
	
	return 0;
}
