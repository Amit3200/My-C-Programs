#include<iostream>
#include<list>
#include <algorithm>
#include <iterator>
using namespace std;
main()
{
	list<int> s;
	int i,n,count=0,b[200];
	cout<<"\nEnter the size : ";
	cin>>n;
	int *a=new int[n];
	cout<<"\nEnter Elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j,t;
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
		{
		t=a[j];
		a[j]=a[j-1];
		a[j-1]=t;
		j--;	
		}
	}
	int k=0;
	cout<<"\nSorted Array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
		    count++;
			b[k]=count;	
			k++;	
			}
		}
		count=0;
	}
	int l=0;
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i]<<" is "<<b[i]<<" times";
	}
}
