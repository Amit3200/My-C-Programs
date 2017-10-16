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
	cout<<"Enter the N : ";
	cin>>n;
	int a[n],i,j,s[n],k=0,co=1,cr[n],lo[n],g=0;
	int *f;
	cout<<"\nEnter the values                            :  ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	f=call_sort(a,n);
	cout<<"\nSorted                                      :  ";
	for(i=0;i<n;i++)
	{
	cout<<f[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		if(f[i]==f[i+1])
		{
			co++;
			lo[g]=a[i];
			g++;
		}
		else
		{
			cr[k]=co;
			s[k]=a[i];
			co=1;
			k++;
		}
	}
	cout<<"\n";
	for(i=0;i<k;i++)
	{
		cout<<"\n"<<s[i]<<" occurs "<<cr[i]<<" times";
	}
	cout<<"\n";
	cout<<"\nOriginal Array                              :  ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cout<<"\nAfter Deletion                              :  ";
	for(i=0;i<k;i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<"\n";
	cout<<"\nDeleted Elements                            :  ";
		for(i=0;i<g;i++)
	{
		cout<<lo[i]<<" ";
	}
}
