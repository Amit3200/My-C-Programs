#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"\nEnter the n              : ";
	cin>>n;
	int a[n],b[n],c[n],k=0,g=0;
	int i;
	cout<<"\nEnter the value          : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			b[k]=a[i];
			k++;
		}
		else
		{
			c[g]=a[i];
			g++;
		}
	}
	cout<<"\n\nEven                     : "<<k;
	cout<<"\n\nOdd                      : "<<g;
	
}
