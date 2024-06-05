#include<iostream>
#include<stdlib.h> // provide a declaration of 'malloc'
using namespace std;

struct node
{
	int val;
	struct node* next;
};

struct node* insert(int x, struct node* position_head, struct node* current_position)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->val = x;
	if (position_head == NULL && current_position == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = NULL;
		current_position->next = new_node;
	}
	
	return new_node;
}

void display(struct node* p)
{
	while(p != NULL)
	{
		cout<<"The value in given address is: "<<p->val<<endl;
		p = p->next;
	}
}

void search_node(struct node* p, int x)
{
	int flag = 0;
	while(flag == 0 && p != NULL)
	{
		if( x == p->val)
		{
			flag = 1;
		}
		p = p->next;
	}
	
	if(flag == 1)
		cout<<"Element found!\n";
	else
		cout<<"Element not found!\n";
}


int main()
{
	struct node* Head = NULL;
	struct node* End = NULL;
	
	int n = 10, x;
	for(int i=1; i<=n; i++)
	{
		if(Head == NULL)
		{
			Head = insert(i*9, Head, End);
			End = Head;
		}
		else
		{
			End = insert(i*9, Head, End);
		}
	}
	
	display(Head);
	
	cout<<"Enter a value to search it in given List.";
	cin>>x;
	search_node(Head, x);
	
	return 0;
}
