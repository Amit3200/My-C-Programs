#include<iostream>
using namespace std;
main()
{
	int i,n;
	cout<<"\nEnter the size   : ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the values : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Result  : " ;	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<" ";
		}
	}
}
