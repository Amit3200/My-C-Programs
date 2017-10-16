#include<iostream>
#include<queue>
using namespace std;
main()
{
	int n,temp,i,j,sum=0,k=0,max=0,mon,count=0,l=0;
	deque<int> v1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		v1.push_back(temp);
	}
	cin>>mon;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(mon<v1[i])
			{
				l=1;
				break;
			}
			mon=mon-v1[i];
			count++;
		}
		if(l==1)
		{
			break;
		}
	}
	cout<<count;
}
