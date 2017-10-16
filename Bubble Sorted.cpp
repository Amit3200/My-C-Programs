#include<iostream>
using namespace std;
main()
{
	int n,pass,i,j,t;
	cout<<"\nEnter the Size : ";
	cin>>n;
	int * a=new int[n];
	cout<<"\nEnter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(pass=0;pass<n-1;pass++)
	{
		for (i=0;i<n-pass-1;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	cout<<"\nSorted array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
