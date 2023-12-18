//THIS PROGRAM IS TO DEMONSTRATE THE OPERATIONS
//PERFORMED ON STACK & IS IMPLEMENTATION USING ARRAYS CODED

#include<iostream> 

using namespace std;

//Defining the maximum size of the stack
#define MAXSIZE 100

//A class initialized with public and private variables and functions
class STACK_ARRAY
{
	int stack[MAXSIZE];
	int Top;
	public:
	//constructor is called and Top pointer is initialized to –1
	//when an object is created for the class
	STACK_ARRAY()
	{
		Top= - 1;
	}
	int push();
	int pop();
	int traverse();
};


//This function will add/insert an element to Top of the stack
int STACK_ARRAY::push()
{
	int item;
	//if the top pointer already reached the maximum allowed size then
	//we can say that the stack is full or overflow
	if (Top == MAXSIZE - 1)
	{
		cout<<"\nThe Stack Is Full";
	}
	//Otherwise an element can be added or inserted by
	//incrementing the stack pointer Top as follows
	else
	{
		cout<<"\nEnter The Element To Be Inserted = ";
		cin>>item;
		stack[++Top]=item;
	}
	return 0;
}

//This function will delete an element from the Top of the stack
int STACK_ARRAY::pop()
{
	int item;
	//If the Top pointer points to NULL, then the stack is empty
	//That is NO element is there to delete or pop
	if (Top == - 1)
	{
		cout<<"\nThe Stack Is Empty";
	}
	//Otherwise the top most element in the stack is poped or
	//deleted by decrementing the Top pointer
	else
	{
		item=stack[Top--];
		cout<<"\nThe Deleted Element Is = "<<item;
	}
	return 0;
}

//This function to print all the existing elements in the stack
int STACK_ARRAY::traverse()
{
	int i;
	//If the Top pointer points to NULL, then the stack is empty
	//That is NO element is there to delete or pop
	if (Top == - 1)
	{
		cout<<"\nThe Stack is Empty";
	}
	//Otherwise all the elements in the stack is printed
	else
	{
		cout<<"\n\nThe Element(s) In The Stack(s) is/are...";
		for(i = Top; i>=0; i--)
		{
			cout<<"\n "<<stack[i];
		}
	}
	return 0;
}

int main()
{
	int choice;
	char ch;
	//Declaring an object to the class
	STACK_ARRAY ps;
	do
	{
		//A menu for the stack operations
		cout<<"\n1. PUSH";
		cout<<"\n2. POP";
		cout<<"\n3. TRAVERSE";
		cout<<"\nEnter Your Choice = ";
		cin>>choice;
		switch(choice)
		{
			case 1://Calling push() function by class object
				ps.push();
				break;
			
			case 2://calling pop() function
				ps.pop();
				break;
		
			case 3://calling traverse() function
				ps.traverse();
				break;
			
			default:
				cout<<"\nYou Entered Wrong Choice";
		}
		cout<<"\n\nPress (Y/y) To Continue = ";
		cin>>ch;
	}while(ch == 'Y' || ch == 'y');
	
	return 0;
}
