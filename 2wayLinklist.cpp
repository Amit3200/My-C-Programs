#include<iostream>
using namespace std;
class node
{
	public:
		int info;
		node *pre;
		node *link;
}*head=NULL,*tail=NULL;
node create()
{
	int data;
	node *temp,*ptr;
	cout<<"\nEnter the data : ";
	cin>>data;
	temp=new node;
	if(head==NULL)
	{
		temp->info=data;
		temp->link=NULL;
		temp->pre=NULL;
		head=temp;
	}
	else
	{
		ptr=head;
		temp->info=data;
		while(ptr->link!=NULL)
		{
		ptr=ptr->link;
		}
		ptr->link=temp;
		temp->pre=ptr;
		temp->link=NULL;
		//tail=temp;
	}
}
node display()
{
	node *ptr;
	ptr=head;
	cout<<"List  : ";
	while(ptr!=NULL)
	{
	//	cout<<ptr->pre<<" "<<ptr->info<<" "<<ptr<<"\n";
		cout<<ptr->info<<" ";
		ptr=ptr->link;
	}
}
node search()
{
	node *ptr;
	ptr=head;
	int data,f=0;
	cout<<"\nEnter the data : ";
	cin>>data;
	while(ptr!=NULL)
	{
		if(ptr->info==data)
		{
			f=0;
			cout<<"\nFound "<<ptr->info;
			cout<<"\nPrevious is "<<ptr->pre->info;
			break;
		}
		else{f=1;}
		ptr=ptr->link;
	}
	if(f==1)
	{
		cout<<"\nNot Found";
	}
	cout<<"\n";
	display();
}
main()
{
		while(4>3)
	{
		system("cls");
		char w ='a';
		int x=1;
		cout<<"\n1.Create\n2.Display\n3.Search\nYour Choice : ";
		cin>>x;
		if(x==1)
		create();
		else if(x==2)
		display();
		else if(x==3)
		search();
		cout<<"\n";
		cin>>w;
	}
}
