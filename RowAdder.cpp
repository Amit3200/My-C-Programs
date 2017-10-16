#include<iostream>
using namespace std;
const int n=3;
int summer(int a[][n],int m,int row)
{
	int sum=0;
	int i;
	for(i=0;i<m;i++)
	{
		sum=sum+a[row-1][i];
	}
	cout<<"\nSum is            : "<<sum;
}
main()
{
	int i,j,m,r;
	cout<<"\nRow number        : ";
	cin>>r;
	int a[n][n];
	cout<<"\nEnter values      : ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	summer(a,n,r);
}
