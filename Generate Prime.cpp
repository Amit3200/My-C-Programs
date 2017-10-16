#include<iostream>
using namespace std;
int main()
{
	long long int u,i,j,k,c=0,sum=0;
	cin>>u;
	for(i=2;i<=u;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==0 && i!=1)
		{
			sum=sum+i;
		}
		c=0;
	}
	cout<<sum;
}
