#include<iostream>
using namespace std;
class node
{
	public:
		int info;
		node * link;
}*head=NULL;
node create()
{
	int data;
	node * ptr;
	ptr=head;
	node *temp;
	cout<<"\nEnter the data : ";
	cin>>data;
	temp=new node;
	if(head==NULL)
	{
		head=temp;
		temp->info=data;
		temp->link=NULL;
	}
	else
	{
		temp->info=data;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
			ptr->link=temp;
			temp->link=NULL;
	}
}
node display()
{
	node *ptr;
	ptr=head;
	cout<<"\nElement are : ";
	while(ptr!=NULL)
		{
			cout<<ptr->info<<" ";
			ptr=ptr->link;
		}
}
node count()
{
	node *ptr;
	int a[40],b[40],k=0,c=1;
	ptr=head;
	while(ptr!=NULL)
		{
			    if(ptr->info==ptr->link->info && ptr!=NULL)
			    {
			    	c++;
				}
				else
				{
					a[k]=c;
					b[k]=ptr->info;
					k++;
					c=1;
					cout<<ptr->info;
				}
		ptr=ptr->link;	
		}
		for(int i=0;i<k;i++)
		{
			cout<<b[k]<<" occurs "<<a[k]<<" times\n";
		}
}	

main()
{
	while(4>3)
	{
		system("cls");
		char w ='a';
		int x=1;
		cout<<"\n1.Create\n2.Display\n3.Count\nYour Choice : ";
		cin>>x;
		if(x==1)
		create();
		else if(x==2)
		display();
		else if(x==3)
		count();
		cout<<"\n";
		cin>>w;
	}
}
