#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
struct st
{
	int roll;
}*p,s;
main()
{
	int i;
	p=&s;
	vector<int> v1;
	v1.push_back(2);
	printf("%d",v1[i]);
	cin>>p->roll;
	cout<<p->roll;
}
