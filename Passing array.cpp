#include<iostream>
using namespace std;
float avg(int [],int );
main()
{
	int a[100],n,i;
	cout<<"\nEnter the Size : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	avg(a,n);
}
float avg(int a[],int n)
{
	int i;
	float sum=0;
	float avg;
	for(i=0;i<n;i++)
	sum=sum+a[i];
	avg=sum/n;
	cout<<"\n Average : "<<avg;
}
