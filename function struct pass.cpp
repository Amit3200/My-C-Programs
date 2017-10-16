#include<iostream>
#include<string>
using namespace std;
struct st
{
	int roll;
	int marks;
}*p,s[20];
int input(struct st s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	p=&s[i];
	cout<<"\nEnter Roll   : ";
	cin>>p->roll;
	cout<<"\nEnter Marks  : ";
	cin>>p->marks;
	}
}
int output(struct st s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		p=&s[i];
		cout<<"\nEnter Roll   : ";
		cout<<p->roll;
		cout<<"\nEnter Marks  : ";
		cout<<p->marks;
	}
}
int main()
{
	int n;
	cout<<"\nEnter the size   : ";
	cin>>n;
	try
	{
		if(n<0)
		throw "Invalid Size";
		input(s,n);
		output(s,n);
	}
	catch(string x)
	{
		cout<<"\n"<<x;
	}
	catch(...)
	{
		cout<<"\nError Detected";
	}
}
