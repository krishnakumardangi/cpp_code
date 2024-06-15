#include <iostream>
using namespace std;

double division(int a, int b)
{
	if(b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a/b);
}

int main()
{
	int x, y;
	double z;
	
	cout<<"Enter value of x and y\n";
	cin>>x>>y;
	
	try
	{
		z = division(x, y);
		cout<<z<<"\n";
	}
	catch (const char* msg)
	{
		cout<<msg<<endl;
	}
	cout<<"Exception get handed successful!\n";
	
	return 0;
}
