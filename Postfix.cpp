#include<iostream>
#include<conio.h>
using namespace std;
#include<math.h>
main()
{
	int n;
	cout<<"\nEnter the size : ";
	cin>>n;
	int j=0;
	char a[n];
	int b[n];
	int exp;
	char ck;
	int i;
	for(i=0;i<n;i++)
	{
	cout<<"\nEnter the expression by character : ";
	cin>>ck;
	a[i]=ck;
	}
		for(i=0;i<n;i++)
	//	cout<<a[i]<<" ";
	for(i=0;i<n;i++)
	{
		if(a[i]=='+')
		{
			b[j]=int(int(a[i-2]-48)+int(a[i-1]-48));
			j++;
		}
		else if(a[i]=='*')
		{
			b[j]=int(a[i-2]-48)*int(a[i-1]-48);
			j++;
		}
		else if(a[i]=='-')
		{
			b[j]=int(a[i-2]-48)-int(a[i-1]-48);
			j++;
		}
		else if(a[i]=='/')
		{
			b[j]=int(int(a[i-2]-48)/int(a[i-1]-48));
			j++;
		}
		else if(a[i]=='^')
		{
			b[j]=pow(int(a[i-2]-48),int(a[i-1]-48));
			j++;
		}
	}
	cout<<"\n";
	for(i=0;i<j;i++)
	{
		cout<<b[i]<<" ";
	}
}
