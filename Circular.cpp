#include<iostream>
using namespace std;
class node
{
	public:
		int info;
		node *link;
}*head=NULL;
node create()
{
	int data;
	cout<<"\nEnter the data : ";
	cin>>data;
	node *ptr,*temp;
	ptr=head;
	temp=new node;
	temp->info=data;
	if(head==NULL)
	{
		head=temp;
		temp->link=head;
	}
	else
	{
		while(ptr->link!=head)
		{
			ptr=ptr->link;
		}
		ptr->link=temp;
		temp->link=head;
	}
}
node display()
{
	node *show;
	show=head;
	cout<<"\nCircular List is here : ";
	while(show->link!=head)
	{
		cout<<show->info<<" ";
		show=show->link;
	}
	cout<<show->info;
}
main()
{
	int n;
	cout<<"\nEnter the no. of elements : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		create();
	}
	cout<<"\n";
	display();
}
