#include<iostream>
using namespace std; 

int main( ) 
{
	int  s[3][3];
	int  i, j;
	cout<<"\n2D Array Input:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\ns["<<i<<"]["<<j<<"]=  ";
			cin>>s[i][j];
		}
	}
	
	cout<<"\nThe 2-D Array is:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	}
	return 0; 
}
