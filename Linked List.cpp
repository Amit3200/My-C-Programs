#include<iostream>
using namespace std;
struct node
{
	int number;//data
	node *next;//pointer to next reference
};
bool isEmpty(node *head);//1st element
char menu();
void insertF(node *&head,node *&last,int number);
void insert(node *&head,node *&last,int number);
void remove(node *&head,node *&last);
void showlist(node *current);
void insertF(node *&head,node *&last,int number);
bool isEmpty(node *head)
{
	if(head==NULL) //checks if list is empty
	return true;
	else
	return false;
}
char menu()
{
char choice;
cout<<" Menu ";
cout<<"\n1.Add";	
cout<<"\n2.Remove";
cout<<"\n3.Show";
cin>>choice;
return choice;
}
void insertf(node *&head,node *&last,int number)
{
	node *temp=new node;//creating pointer 
	temp->number=number;//assigning number
	temp->next=NULL;//setting next element to NULl
	head=temp;//AS FIRST ELEMENT
	last=temp;//BOTH ARE SAME
}
void insert(node *&head,node *&last,int number)
{
	if(isEmpty(head)) //checking if empty
	insertf(head,last,number);//adding first if true
	else//else we would add more
	{
	node *temp=new node;//creating pointer 
	temp->number=number;//assigning number
	temp->next=NULL;//setting next element to NULl
	last->next=temp;
	last=temp;
	}
	
}
void remove(node *&head,node *&last)
{
	if(isEmpty(head))
	cout<<"\nThe list is empty";
	else if(head==last)
	{
		delete head;
		head==NULL;
		last==NULL;
	}
	else
	{
	node *temp=head;
	head=head->next;
	delete temp;
    }
}
void showlist(node *current)
{
	if(isEmpty(current))
	cout<<"\nThe list is empty";
	else
	{
	cout<<"\nThe list contains : ";
	while(current!=NULL)	
	{
		cout<<current->number<<" ";
		current=current->next;
	}
	}
}
int main()
{
	node *head=NULL;//list is empty
	node *last=NULL;//list is empty
	char choice;
	int number;
	do {
	choice=menu();
	switch(choice)
	{
	case '1':cout<<"Enter the number : ";
	cin>>number;
	insert(head,last,number);
	break;
	case '2':
		remove(head,last);
		break;
	case '3':
		showlist(head);
		break;
	}
	}while(choice!='4');
	return 0;
}
