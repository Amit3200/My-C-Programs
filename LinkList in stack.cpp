#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *link;
}*head=NULL;
int top=0;
int push(int max,int top)
{
	int ol;
	cout<<"\nEnter the element : ";
	cin>>ol;
	if(top==max)
	{
		cout<<"Over Flow Occured";
	}
	else
	{
		node *temp;
		if(head==NULL)
		{
			temp=new node;
			temp->data=ol;
			cout<<"\n"<<ol<<" is added to stack";
			temp->link=NULL;
			head=temp;
		}
		else
		{
		temp=new node;
		temp->data=ol;
		temp->link=head;
		head=temp;	
		}
		top=top+1;
	}
	return top;
}
node display()
{
	node *ptr;
	ptr=head;
	cout<<"\nStack is here : ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->link;
	}
	
}
int pop(int top)
{
	if(top==0)
	{
		cout<<"\nUnder Flow Occured";
	}
	else
	{
		node *temp,*ptr;
		int i;
		ptr=head;
		for(i=0;i<1;i++)
		{
			ptr=ptr->link;
		}
		temp=head;
		cout<<"\n";
		cout<<temp->data<<" is popped";	
		temp->link=ptr;
		head=ptr;
		top=top-1;
	}
	return top;
			
}
int main()
{
	int r;
	int max;
	cout<<"\nEnter the size of max :";
	cin>>max;
	char t='a';
	while(t!='q')
	{
	system("cls");
	cout<<"1.Insert\n2.Delete\n";
	cin>>r;
	int k;
	switch(r)
	{
		
	case 1:
	k=push(max,top);
	top=k;
	break;
	case 2:
	k=pop(top);
	top=k;
	break;
	case 3:
	display();
	break;	
	}	
	cout<<"\nEnter the quit menu : ";
	cin>>t;	
	}
}
