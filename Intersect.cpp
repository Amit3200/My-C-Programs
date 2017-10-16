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
	int n,j,m,o=1;
	cout<<"Enter the size                    : ";
	cin>>n;
	cout<<"Enter the Array 1 Value           : ";
	int i;
	int a[n],b[n],k=0,co=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the size                    : ";
    cin>>m;
    cout<<"Enter the Array 2 Value           : ";
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	int c[m*n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				co++;
				c[k]=a[i];
				k++;
			}
		}
	}
	if(k==0)
	{
	cout<<"\nIntersection                      : No Intersection Found";
	}
	else
	{
	int *f=call_sort(c,k);
	int d[n*m],pp=0;
	for(i=0;i<k;i++)
	{
		if(f[i]==f[i+1])
		{
			continue;
		}
		else
		{
			d[pp]=f[i];
			pp++;
		}
	}
	cout<<"\nIntersection                      : ";
	for(i=0;i<pp;i++)
	{
		cout<<d[i]<<" ";
	}
    }
}
