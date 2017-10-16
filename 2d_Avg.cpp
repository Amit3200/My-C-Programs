#include<iostream>
using namespace std;
main()
{
int n,m;
cout<<"Enter the row : ";
cin>>n;
cout<<"\nEnter the column : ";
cin>>m;
int i,j;
float a[n][m];
float sum=0,avg;
cout<<"\nEnter the values : ";
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		cin>>a[i][j];
	}
}
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		sum=sum+a[i][j];
	}
}
avg=sum/float(n*m);
cout<<"\nThe average : "<<avg;
}
