#include<iostream>
using namespace std;
int insert(int ar[],int t,int n,int r)
{
	int data;
	cout<<"\nEnter the data : ";
	cin>>data;
	if(r>=n)
	{
		cout<<"OverFlow";
		exit(0);
	}
	else
	{
	ar[r]=data;
	r++;
	cout<<r;
	return r;
    }
}
int del(int ar[],int t,int o,int r)
{
	int n=5;
	if(r==0)
	{
		cout<<"\nUnder Flow";
		exit(0);
		
	}
		for(int i=0;i<r-1;i++)
	{
		ar[i]=ar[i+1];
	}
	r--;
	cout<<"\nList : ";
	for(int i=0;i<r;i++)
	{
		cout<<ar[i]<<" ";
	}
	return r;
}
int disp(int ar[],int r,int n)
{
	int i;
	if(r>n)
	{
		r=n;
	}
	cout<<"\nList is here : ";
	for(i=0;i<r;i++)
	{
		cout<<ar[i]<<" ";
	}
}
int main()
{
	int n=5,r=0,op;
	int ar[200];
	while(true)
	{
	cout<<"\nChoice : ";	
	cin>>op;	
	if(op==1)
	{
	r=insert(ar,200,n,r);
	disp(ar,r,n);
    }
	else
	r=del(ar,200,n,r);
    }
}
