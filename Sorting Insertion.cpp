#include<iostream>
using namespace std;
main()
{
	int n,i,j,t;
	cout<<"\nEnter the Size : ";
	cin>>n;
	int *a=new int[n];
	cout<<"\nEnter Elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
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
	cout<<"\nSorted Array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
