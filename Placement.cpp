#include<iostream>
#include<string.h>
using namespace std;
struct s
{
	short s[5];
	union
	{
		float y;
		long z;
	}uyz;
	union 
	{
	long x;	
	}ux;
}t;
main()
{
	memset(t,0,sizeof(t));
	t.uyz.z=15;
	cout<<sizeof(t);
	cout<<"\n"<<t.s[0];s
}
