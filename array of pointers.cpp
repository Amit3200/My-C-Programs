#include<iostream>
using namespace std;
struct employee
{
	int id;
	string name;
	int salary;
}s[2000],*p[2000];
main()
{
	int i,n;
	cout<<"Enter the number : ";
	cin>>n;
	for (i=0;i<n;i++)
	{
		p[i]=&s[i];
		cout<<"\nEnter the id : ";
		cin>>p[i]->id;
		cout<<"\nEnter the name : ";
		cin>>p[i]->name;
		cout<<"\nEnter the salary : ";
		cin>>p[i]->salary;
	}
	for (i=0;i<n;i++)
	{
		cout<<"\n-----------------------------------";
		cout<<"\nName   : "<<p[i]->name;
		cout<<"\nID     : "<<p[i]->id;
		cout<<"\nSalary : "<<p[i]->salary;
	}
}

