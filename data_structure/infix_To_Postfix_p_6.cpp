//THIS PROGRAM IS TO COVERT THE INFIX TO POSTFIX EXPRESSION
//AND IT IS IMPLEMENTATION USING ARRAYS

#include<iostream>
#include<string.h>

using namespace std;

//Defining the maximum size of the stack
#define MAXSIZE 100

//A class initialised with public and private variables and functions
class STACK_ARRAY
{
	int stack[MAXSIZE];
	int Top;
	public:
		//constructor is called and Top pointer is initialised to –1
		//when an object is created for the class
		STACK_ARRAY()
		{
			Top= -1;
		}
		void push(char);
		char pop();
		int prec(char);
		void Infix_Postfix();
};

//This function will add/insert an element to Top of the stack
void STACK_ARRAY::push(char item)
{
	//if the top pointer already reached the maximum allows size then
	//we can say that the stack is full or overflow
	if (Top == MAXSIZE - 1)
	{
	cout<<"\nThe Stack Is Full";
	}
	//Otherwise an element can be added or inserted by
	//incrementing the stack pointer Top as follows
	else
	{
		stack[++Top] = item;
	}
}

//This function will delete an element from the Top of the stack
char STACK_ARRAY::pop()
{
	char item = '#';
	//If the Top pointer points to NULL, then the stack is empty
	//That is NO element is there to delete or pop
	if (Top == -1)
		cout<<"\nThe Stack Is Empty. Invalid Infix expression";
	//Otherwise the top most element in the stack is poped or
	//deleted by decrementing the Top pointer
	else
		item = stack[Top--];
	return(item);
}

//This function returns the precedence of the operator
int STACK_ARRAY::prec(char symbol)
{
	switch(symbol)
	{
		case '(':
			return(1);
		case ')':
			return(2);
		case '+':
		case '-':
			return(3);
		case '*':
		case '/':
		case '%':
			return(4);
		case '^':
			return(5);
		default:
			return(0);
	}
}

//This function will return the postfix expression of an infix
void STACK_ARRAY::Infix_Postfix()
{
	int len, priority;
	char infix[MAXSIZE], postfix[MAXSIZE], ch;
	cout<<"\n\nEnter the infix expression = ";
	cin>>infix;//Inputting the infix notation
	//Finding length of the string
	len = strlen(infix);
	//At the end of the string inputting a parenthesis ‘)’
	infix[len++] = ')';
	push('(');//Parenthesis is pushed to the stack
	for(int i = 0,j = 0; i < len; i++)
	{
		switch(prec(infix[i]))
		{
			//Scanned char is '(' push to the stack
			case 1:
				push(infix[i]);
				break;
			//Scanned char is ')' pop the operator(s) and add to
			//the postfix expression
			case 2:
				ch=pop();
				while(ch != '(')
				{
					postfix[j++]=ch;
					ch=pop();
				}
				break;
			//Scanned operator is +,- then pop the higher or
			//same precedence operator to add postfix before
			//pushing the scanned operator to the stack
			case 3:
				ch=pop();
				while(prec(ch) >= 3)
				{
					postfix[j++]=ch;
					ch=pop();
				}
				push(ch);
				push(infix[i]);
				break;
			//Scanned operator is *,/,% then pop the higher or
			//same precedence operator to add postfix before
			//pushing the scanned operator to the stack
			case 4:
				ch=pop();
				while(prec(ch) >= 4)
				{
					postfix[j++]=ch;
					ch=pop();
				}
				push(ch);
				push(infix[i]);
				break;
			//Scanned operator is ^ then pop the same
			//precedence operator to add to postfix before
			//pushing the scanned operator to the stack
			case 5:
				ch=pop();
				while(prec(ch) == 5)
				{
					postfix[j++]=ch;
					ch=pop();
				}
				push(ch);
				push(infix[i]);
				break;
			//Scanned char is a operand simply add to the
			//postfix expression
			default:
				postfix[j++]=infix[i];
				break;
		}
	//Printing the postfix notation to the screen
	cout<<"\nThe Postfix expression is = ";
	for(int i = 0;i < j; i++)
		cout<<postfix[i];
	}
	/*//Printing the postfix notation to the screen
	cout<<"\nThe Postfix expression is = ";
	for(int i = 0;i < strlen(postfix); i++)
		cout<<postfix[i];*/
}

int main()
{
	char choice;
	STACK_ARRAY ip;
	do
	{
		ip.Infix_Postfix();//Calling the infix to postfix function
		cout<<"\n\nDo you want to continue (Y/y) = ";
		cin>>choice;
	}while(choice == 'Y' || choice == 'y');
}
