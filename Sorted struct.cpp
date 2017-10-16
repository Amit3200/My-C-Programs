#include<iostream>
#include<string.h>
using namespace std;
struct si
{
char name[200];	
float salary;
}s[20];
main()
{
	try
	{
		int n,i,j;
		int temp;
		char name1[200];
		cout<<"\nEnter the number of employees : ";
		cin>>n;
		for(i=0;i<n;i++)
		{
		cout<<"\nEnter the name                : ";
		cin>>s[i].name;
		cout<<"\nEnter the salary              : ";
		cin>>s[i].salary;
		}
		cout<<"\n";
		cout<<"\n1.Sort through name  : ";
		cout<<"\n2.Sort through salary: ";
		cout<<"\nYour Choice : ";
		int ch;
		cin>>ch;
		if(ch==2)
		{
        for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && s[j].salary>s[j-1].salary)
		{
			temp=s[j].salary;
			s[j].salary=s[j-1].salary;
			s[j-1].salary=temp;
			strcpy(name1,s[j].name);
			strcpy(s[j].name,s[j-1].name);
			strcpy(s[j-1].name,name1);
			j--;
		}
	}
        }
        else if(ch==1)
        {
           for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && s[j].name>s[j-1].name)
		{
			temp=s[j].salary;
			s[j].salary=s[j-1].salary;
			s[j-1].salary=temp;
			strcpy(name1,s[j].name);
			strcpy(s[j].name,s[j-1].name);
			strcpy(s[j-1].name,name1);
			j--;
		}
	}	
		}
		else
		{
			cout<<"\nInvalid Choice";
			throw 20;
		}
        for(i=0;i<3;i++)
        {
        cout<<"\n The name                : ";
		cout<<s[i].name;
		cout<<"\n The salary              : ";
		cout<<s[i].salary;
		}
	}
	catch(...)
	{
     cout<<"\nException Occured Try again later";		
	}
	return 0;
}
