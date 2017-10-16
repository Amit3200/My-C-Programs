#include<iostream>
using namespace std;
int push(int a[],int top,int add,int max)
{
	if(max==top)
	{
		cout<<"\nStack OverFlow Occured";
	}
	else
	{
		a[top++]=add;
		cout<<"\nElement added";
	}
	cout<<"\nStack is here : ";
	int i;
	for(i=0;i<top;i++)
	{
		cout<<a[i]<<" ";
	}
	return top;
}
int pop(int a[],int n,int top)
{
	if(top==0)
	{
		cout<<"\nUnderFlow Occured";
	}
	else
	{
		int f;
		f=a[top-1];
		cout<<f<<" is removed from stack";
		top=top-1;
	}
	int i;
	cout<<"\nStack is here : ";
	for(i=0;i<top;i++)
	{
		cout<<a[i]<<" ";
	}
	return top;
}
main()
{
	int n;
	int top=0;
	cout<<"\nEnter the size : ";
	cin>>n;
	int a[n];
	int max=n;
	int add;
	char cr='a';
	while(cr!='q')
	{
		system("cls");
	cout<<"\n1.Insert in Stack\n2.Delete in Stack\n";
	int ch;
	cin>>ch;
	int f;
	switch(ch)
	{
		case 1:
	cout<<"\nElement to insert : ";
	cin>>add;
	f=push(a,top,add,max); 
	top=f;
	break;
	case 2:
	f=pop(a,n,top);
	top=f;
		break;
    }
    cout<<"\nQuit : ";
    cin>>cr;
    }
}
