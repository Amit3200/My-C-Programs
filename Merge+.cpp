#include<iostream>
using namespace std;
int *call_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
		{
		 temp=a[j];
		 a[j]=a[j-1];
		 a[j-1]=temp;
		j--;
		}
	}
	return a;
}
main()
{
	int n;
	cout<<"Enter the n         : ";
	cin>>n;
	int a[n],i,b[n],c[2*n],j=0;
	cout<<"\nArray 1 input       : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nArray 2 input       : ";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=n;i<2*n;i++)
	{
		c[i]=b[j];
		j++;
	}
	int *f;
	f=call_sort(c,2*n);
    cout<<"\nSorted              : ";
	for(i=0;i<2*n;i++)
	{
	cout<<f[i]<<" ";
	}	
}
