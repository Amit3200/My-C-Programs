#include<iostream>
using namespace std;
struct emp
{
	string name;
	int salary;
	int exp;
}*p[400],s[400];
    int compute(int,int);
int main()
{
	int n;
	cout<<"Enter the number of employees : ";
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		p[i]=&s[i];
		
		cout<<"\nEnter the name : ";
		cin.ignore();
		getline(cin,p[i]->name);
		cout<<"\nEnter the salary : ";
		cin>>p[i]->salary;
		cout<<"\nEnter the experience : ";
		cin>>p[i]->exp;
	}
		for(i=0;i<n;i++)
		{
		compute(n,i);
		}
	
}
int compute(int n,int i)
{
	if(p[i]->salary>=10000 || p[i]->exp>=5)
	{
		cout<<"\n*****************************\n";
		cout<<"Name : "<<p[i]->name;
		cout<<"\nSalary : "<<p[i]->salary;
		cout<<"\nExperience : "<<p[i]->exp;
		cout<<"\n+++++++++++++++++++++++++++++\n";
	}
}
