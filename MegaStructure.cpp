#include<iostream>
#include<ctype.h>
using namespace std;
struct student
{
	char name[40];
	int roll;
		int eng;
		int ds;
		int se;
		int cod;
		int db;
}s[20],*p;
int z=0;
int input(struct student s[],int n)
{
	try
	{
		
		int i,j;
		for(i=0;i<n;i++)
		{
			p=&s[i];
			cout<<"\nEnter the name  : ";
			cin.ignore();
			gets(p->name);
			for(j=0;p->name[j]!='\0';j++)
			{
				if(isdigit(p->name[j]))
				{
					throw "Name Error";
					break;
				}
			}
			int d=0;
			cout<<"\nEnter the roll  : ";
			cin>>p->roll;
			if(p->roll>=0 && p->roll<=999999)
			{
				d++;
			}
			else
			{
				throw "error";
			}
			cout<<"\nEnter the Marks of COD : ";
			cin>>p->cod;
			if(p->cod>=0 && p->cod<=100)
			{
				d++;
			}
			else
			{
				throw "Error Marks";
			}
			cout<<"\nEnter the Marks of DS : ";
			cin>>p->ds;
			if(p->ds>=0 && p->ds<=100)
			{
				d++;
			}
			else
			{
				throw "Error Marks";
			}
			cout<<"\nEnter the Marks of SE : ";
			cin>>p->se;
			if(p->se>=0 && p->se<=100)
			{
				d++;
			}
			else
			{
				throw "Error Marks";
			}
			cout<<"\nEnter the Marks of ENG : ";
			cin>>p->eng;
			if(p->eng>=0 && p->eng<=100)
			{
				d++;
			}
			else
			{
				throw "Error Marks";
			}
			cout<<"\nEnter the Marks of DB : ";
			cin>>p->db;
			if(p->db>=0 && p->db<=100)
			{
				d++;
			}
			else
			{
				throw "Error Marks";
			}
		}
	}
	catch(...)
	{
		cout<<"\nError Caught";
		z=1;
	}
}
int output(struct student s[],int n)
{
int i;
for(i=0;i<n;i++)
{
	p=&s[i];
cout<<"\nName  : "<<p->name;
cout<<"\nRoll  : "<<p->roll;
cout<<"\nMarks ";
cout<<"\nEng   : "<<p->eng;
cout<<"\nSE    : "<<p->se;
cout<<"\nDS    : "<<p->ds;
cout<<"\nCOD   : "<<p->cod;
cout<<"\nDB    : "<<p->db;	
}	
}
int main()
{
	try
	{
	int n;
	cout<<"\nEnter the size : ";
	cin>>n;
	if(n<0)
	throw "Error1";
	input(s,n);
	if(z==0)
	output(s,n);
    }
    catch(...)
    {
    cout<<"\nException caught";	
	}
    return 0;
}

