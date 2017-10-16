#include<iostream>
using namespace std;
struct emp
{
	char name[30];
	int id;
	float salary;
}*p,s[20];
void show(int n);
main()
{
	int n,i;
	cout<<"Enter the n                        :  ";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
	cout<<"\n";
	p=&s[i];
	cout<<"Enter the name                     :  ";
	cin>>p->name;
	cout<<"\n";
	cout<<"Enter the salary                   :  ";
	cin>>p->salary;
	cout<<"\n";
	cout<<"Enter the id                       :  ";
	cin>>p->id;
    }
show(n);
return 0;
}
void show(int n)
{
	int t,i;
	cout<<"\n";
	cout<<"Enter the number to search         :  ";
	cin>>t;
	for(i=0;i<n;i++)
	{
		p=&s[i];
		if(p->id==t)
		{
			cout<<"\n";
			cout<<"\t\tID Found";
			break;
		}
	}
	cout<<"\nName   : "<<p->name;
	cout<<"\nSalary : "<<p->salary;
	cout<<"\nId     : "<<p->id;
}
