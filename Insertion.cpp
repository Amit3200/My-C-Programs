#include<iostream>
using namespace std;
int main()
{
	int n,i,pos,value;
	cout<<"Enter the size of array : ";
	cin>>n;
	int *a=new int[n+40];
	for (i=0;i<n;i++)
	{
		cout<<"\nEnter the elements : ";
		cin>>a[i];
	}
	cout<<"\nLook of Array is Here : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the position where you want to add element : ";
	cin>>pos;
	cout<<"\nEnter the value you want to add at "<<pos<<" position : ";
	cin>>value;
	for(i=n;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=value;
	cout<<"\nAfter Insertion : ";
	for(i=0;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
