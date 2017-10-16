#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int i,j,t,n,m,a[10000],b[10000],o,v,k,flag=0;
        cin>>n;
        cin>>m;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];//address
	}
	for(i=0;i<n;i++)
    {
    	cin>>b[i];//time
	}
	for(j=0;j<m;j++)
	{
		flag=0;
	cin>>o;
	cin>>v;
	if(o==1)
	{
		for(k=0;k<n;k++)
		{
			if(b[k]>v)
			{
				flag=1;
				cout<<a[k]<<"\n";
				break;
			}
            
	}
    }
	else if(o==2)
	{
		for(k=0;k<n;k++)
		{
			if(a[k]>=v)
			{
				flag=1;
				cout<<b[k]<<"\n";
				break;
			}
		}

	}
		if(flag==0)
{
	cout<<"-1\n";
}
	}
    return 0;
}

