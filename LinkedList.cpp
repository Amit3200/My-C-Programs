#include<iostream>
using namespace std;
class node
{
	public:
		int info;
		node *link;
}*head=NULL;
node insert()
{
	int data;
	cout<<"\nEnter the data   : ";
	cin>>data;
	node *temp,*ptr;
	temp=new node;
	if(head==NULL)
	{
	temp->info=data;
	temp->link=NULL;
	head=temp;
	}
	else
	{
		ptr=head;
	while(ptr->link!=NULL)
	{
	ptr=ptr->link;
	}
	temp->info=data;
	ptr->link=temp;
	temp->link=NULL;
	}
}
node display()
{
	node *ptr;
	ptr=head;
	cout<<"Printing the Items   : ";
	if(head==NULL)
	{
		cout<<"\nEmpty List is here";
	}
	else
	{
	while(ptr!=NULL)
	{
		cout<<ptr->info<<" ";
		ptr=ptr->link;
	}
}
}
node beg()
{
	node *ptr,*temp;
	int data;
	cout<<"\nEnter the data   : ";
	cin>>data;
	temp=new node;
	if(head==NULL)
	{
	cout<<"\nList is empty\n";
	}
	else
	{
		temp->info=data;
		temp->link=head;
		head=temp;
	}
}
node end()
{
	node *ptr,*temp;
	int data;
	cout<<"\nEnter the data   : ";
	cin>>data;
	ptr=head;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	temp=new node;
	temp->info=data;
	temp->link=NULL;
	ptr->link=temp;
}
node search()
{
     node *ptr;
     int data;
     cout<<"\nEnter the number to search : ";
     cin>>data;
     ptr=head;
     int p=0,c=0;
     while(ptr!=NULL)
     {
      if(ptr->info==data)
        {
        p=1;
        break;	
        }	
        c++;
        ptr=ptr->link;
    }
	if(p==1)
	cout<<"\nFound the element at : "<<c+1;	
	else
	cout<<"\nNot Found";
}
node swapper()
{
	node *temp,*ptr;
	temp=head;
	int t;
	int i;
	ptr=head->link;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	temp->info=temp->info+ptr->info-(ptr->info=temp->info);
}
main()
{
	char endme='a';
	while(endme='q')
	{
	int ch;
	system("cls");
	cout<<"\n1.Insert";
	cout<<"\n2.Insert at end";
	cout<<"\n3.Insert at beg";
	cout<<"\n4.Search";
	cout<<"\n5.Display"<<"\n";
	cout<<"\n6.Swapper"<<"\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			insert();
			break;
		case 2:
			end();
			break;
		case 5:
			display();
			break;
		case 3:
			beg();
			cout<<"\n";
			display();
			break;
		case 4:
			search();
		    break;
		case 6:
			swapper();
			display();
			break;
	}
	cin>>endme;
    }
}
