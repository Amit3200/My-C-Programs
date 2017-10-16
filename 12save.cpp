#include<iostream>
using namespace std;
main()
{
	char a[1000];
	int i=0,j,k,l,t,co,count,s,len=0;
	char s1;
	cin>>a;
	while(a[len]!='\0')
	len++;
	cin>>t;
	l=0;
	while(t>0)
	{
		cin>>co;
		cin>>s1;
		i=0;
		count=0;
		while(a[i]!='\0')
		{
			if(a[i]==s1)
			{
				count++;
				if(count==co)
				{
					s=i;
					break;
				}
			}
			i++;
		}
		for(i=s;i<len-1-l;i++)
		{
			a[i]=a[i+1];
		}
		a[len-l-1]='\0';
		l++;
		t--;
	}
	cout<<a;
}
