#include<iostream>
using namespace std;
main()
{
	int a[10],b[10],n,i,j,c=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n;j++)
	{
		cin>>b[j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				c++;
				b[j]=999;
				break;
			}
		}
	}
	if(n==c)
	cout<<"Same";
	else
	cout<<"Not Same";
}
