#include<iostream>
using namespace std;
int *sort(int a[],int n)
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
	int n,i;
	cout<<"Enter the n : ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the Values : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int *f=sort(a,n);
	int c1=1,k=0,c[n],d[n];
	for(i=0;i<n;i++)
	{
	if(f[i]==a[i+1])
	{
	c1++;	
	}
	else
	{
	d[k]=f[i];
	c[k]=c1;
	k++;
	c1=1;	
	}	
	}
	for(i=0;i<k;i++)
	{
		cout<<"\n"<<d[i]<<" occurs "<<c[i]<<" times";
	}
}

