#include<iostream>
using namespace std;
struct stu
{
	int roll;
}*p[20],s[20];
main()
{
	int i;
	int n=3;
	for(i=0;i<n;i++)
	{
		p[i]=&s[i];
		cin>>p[i]->roll;
	}
	for(i=0;i<n;i++)
	{
		
		cout<<"Roll : "<<p[i]->roll;
	}
}
