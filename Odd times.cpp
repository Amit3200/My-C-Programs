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
int i,n,j;
cout<<"Enter the n               : ";
cin>>n;
int a[n];
cout<<"\n";
cout<<"Enter the values          : ";
for(i=0;i<n;i++)
{
cin>>a[i];	
}
int *f,d[n],pp=0,co=1;
f=call_sort(a,n);
for(i=0;i<n;i++)
{
if(f[i]==f[i+1])
{
co++;
}
else
{
	if(co%2!=0)
	{
	d[pp]=f[i] ;
	pp++;
	}
	co=1;
}
}
if(pp==0)
{
	cout<<"\nPrinting Odd              : No Pair Found";
}
else
{
cout<<"\nPrinting Odd              : ";
for(i=0;i<pp;i++)
{
cout<<d[i]<<" ";
}	
}
}

