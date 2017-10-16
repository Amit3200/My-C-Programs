#include<iostream>
using namespace std;
struct emp
{
	char name[30];
	int id;
	float salary;
}*p[20],s[20];
void show(struct emp *p,int n);
main()
{
	int n,i;
	cout<<"Enter the n                        :  ";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
	cout<<"\n";
	p[i]=&s[i];
	cout<<"Enter the name                     :  ";
	cin>>p[i]->name;
	cout<<"\n";
	cout<<"Enter the salary                   :  ";
	cin>>p[i]->salary;
	cout<<"\n";
	cout<<"Enter the id                       :  ";
	cin>>p[i]->id;
    }
show(*p,n);
return 0;
}
void show(struct emp *p,int n)
{
	int t,i;
	cout<<"\n";
	cout<<"Enter the number to search        :  ";
	cin>>t;
	for(i=0;i<n;i++)
	{
		if(p[i].id==t)
		{
			cout<<"\n";
			cout<<"\t\tID Found";
			break;
		}
	}
	cout<<"\nName   : "<<p[i].name;
	cout<<"\nSalary : "<<p[i].salary;
	cout<<"\nId     : "<<p[i].id;
}
