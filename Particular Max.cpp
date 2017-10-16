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
		 temp=a[j-1];
		 a[j-1]=a[j];
		 a[j]=temp;
		j--;
		}
	}
	return a;
}
main()
{
	int n,g,k1=0;
	cout<<"\nEnter the n                            : ";
	cin>>n;
	int i,a[n],s[n],k=0,o[n],s1[n];
	cout<<"\nEnter the values                       : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		o[i]=a[i];
	}
	cout<<"\nEnter the order(that is nth term)      : ";
	cin>>g;
	int *f,*f1;
	f=call_sort(a,n);
	for(i=0;i<n;i++)
	{
		if(f[i]==f[i+1])
		{
			continue;
		}
		else
		{
			s[k]=a[i];
			k++;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(f[i]==f[i-1])
		{
			continue;
		}
		else
		{
			s1[k1]=a[i];
			k1++;
		}
	}
	cout<<"\nArray                                  : ";
	for(i=0;i<n;i++)
	{
		cout<<o[i]<<" ";
	}
	cout<<"\nSorted Max                             : ";
	for(i=0;i<k;i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<"\nSorted Min                             : ";
	for(i=0;i<k1;i++)
	{
		cout<<s1[i]<<" ";
	}
	cout<<"\nYour "<<g<<"th Min Element                   : "<<s[g-1];
	cout<<"\nYour "<<g<<"th Max Element                   : "<<s1[g-1];
}
