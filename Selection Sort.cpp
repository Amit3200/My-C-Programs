#include<iostream>
using namespace std;
main()
{
	int n,i,j,t,min,pos;
	cout<<"Enter the size : ";
	cin>>n;
	int *a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			pos=j;
		}
		if(pos!=i)
		{
			t=a[i];
			a[i]=a[pos];
			a[pos]=t;
		}
	}
	cout<<"\nSorted Array : ";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<" ";	
	}	
}
