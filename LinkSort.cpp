#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *link;
}*head=NULL;
node insert()
{
	node *temp,*ptr;
	int data1;
	cin>>data1;
	temp =new node;
	temp->data=data1;
	if(head==NULL)
	{
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
		temp->data=data1;
		ptr->link=temp;
		temp->link=NULL;
	}
}
node sort()
{
	node *temp,*ptr;
	temp=head;
	ptr=head;
	int i=0,j=0,c=0,a,b;
	while(temp!=NULL)
	{
		 c++;
		 temp=temp->link;
	}
	cout<<c;
	ptr=NULL;
	temp=head;
	int swapped;
/*do
{
	swapped=0;
	temp=head;
	while(temp->link != ptr)
	{
		if((temp->data)>(temp->link->data))
		{
			temp->data=(temp->data)+(temp->link->data)-(temp->link->data=temp->data);
			swapped=1;
		}
		temp=temp->link;
	}
	ptr=temp;
}while(swapped);
}*/
while(i<c-1)
{
	temp=head;
	while(temp->link != ptr)
	{
		if((temp->data)>(temp->link->data))
		{
			temp->data=(temp->data)+(temp->link->data)-((temp->link->data)=temp->data);
		}
		temp=temp->link;
	}
	ptr=temp;	
	i++;
}
}
node disp()
{
	node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->link;
	}
}
main()
{
	for(int i=0;i<5;i++)
	insert();
	cout<<"\n";
	disp();
	sort();
	cout<<"\n";
	disp();
}
