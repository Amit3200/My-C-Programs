#include<iostream>
using namespace std;
int *insert(int a[],int n,int p,int value)
{
	int i;
	if(p>n+1)
	{
     cout<<"\nOut of Bounds No insertion can be performed ";
	}
	else
	{
	for(i=n;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=value;
	cout<<"\nInserted Successfully  : ";
	for(i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}
	return a;
    }
    return 0;
    
}
int *del(int a[],int n,int p)
{
	int i;
	if(p>n)
	{
		cout<<"Then no deletion performed";
	}
	else
	{
	for(i=p-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	cout<<"Deleted Redefined array : ";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
    }
}
main()
{
	int i,j,n,value,ch=0,p;
	cout<<"\n1. Insert \n2. Delete \n3.Choice :";
	cin>>ch;
	if(ch==1)
	{
	cout<<"\nEnter the n        : ";
	cin>>n;
	int a[n+n];
	
	cout<<"\nEnter the values   : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the position : ";
	cin>>p;
	cout<<"\nEnter the value    : ";
	cin>>value;
	insert(a,n,p,value);
    }
    else if(ch==2)
    {
    	cout<<"\nEnter the n        : ";
	cin>>n;
	int a[n+n];
	cout<<"\nEnter the values   : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the position : ";
	cin>>p;
	del(a,n,p);
    }
    else
    {
    	cout<<"\nException";
	}
	}	
