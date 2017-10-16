#include<iostream>
using namespace std;
main()
{
	int n,i,l,s=0,m,k;
	cout<<"\nEnter the size : ";
	cin>>n;
	l=n;
	int *a=new int[n];
	cout<<"Enter an sorted array for getting correct answer : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the key to search : ";
	cin>>k;
	for(i=0;i<n;i++)
	{
	m=(s+l)/2;
	if(a[m]==k)
	{
		break;
	}
	else if(a[m]<k)
	{
		s=m+1;
	}
	else
	{
		l=m;
	}
    }
    if(k==a[m])
	cout<<"\nFound in Array\nAt Position : "<<m+1;
    else
	cout<<"\nNot Found in Array";	
}
