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
	cout<<"\nEnter the values : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c1=1,p[n],k=0;
	int *f=sort(a,n);
	for(i=0;i<n;i++)
	{
		if(f[i]==f[i+1])
		{
			c1++;
		}
		else
		{
			if(c1==1)
			{
				p[k]=a[i];
				k++;
			}
			c1=1;
		}
	}
	cout<<"\nResult : ";
	if(k==0)
	{
		cout<<"No Unique";
	}
	else
	{
	for(i=0;i<k;i++)
	{
		
		cout<<p[i]<<" ";
	}
    }
	
}
