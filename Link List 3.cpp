#include<iostream>
using namespace std;
struct node
{
	node *link;  //next linker
	int num;    //value
}p;
main()
{
	int n,i,k;
	cout<<"\nEnter the size of n               : ";
	cin>>n;
	node *head=NULL;
	node *last=NULL;
	for(i=0;i<n;i++)
	{
	node *temp=new node;
	cout<<"\nEnter the Value to enter in list  : ";
	cin>>k;
	temp->num=k;
	temp->link=NULL;
	last->link=temp;
	last=temp;
	}
	node *q;
	for(q=head;q!=NULL;q=q->link)
	{
		cout<<q->num;
		cout<<"\n";
	}
	
}
