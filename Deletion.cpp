#include<iostream>
using namespace std;
main()
{
	int i,n,pos;
	cout<<"\nEnter the size : ";
	cin>>n;
	int *a=new int[n];
	for (i=0;i<n;i++)
	{
		cout<<"\nEnter the elements : ";
		cin>>a[i];
	}
	cout<<"\nArray is here : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the poss what you want to delete : ";
	cin>>pos;
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	cout<<"\nAfter Deletion : ";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" ";
	}
}
