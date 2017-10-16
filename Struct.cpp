#include<iostream>
#include<string.h>
using namespace std;
struct st
{
	int id;
	char name[200];
	int tm;
}s[20],*p;
int input(struct st s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	p=&s[i];
	cout<<"\nEnter the id     : ";
	cin>>p->id;
	cout<<"\nEnter the name   : ";
	cin>>p->name;
	cout<<"\nEnter the tm     : ";
	cin>>p->tm;
    }
}
int sortid(struct st s[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
	j=i;
	while(j>0 && s[j].id>s[j-1].id)
	{
		temp=s[j].id;
		s[j].id=s[j-1].id;
		s[j-1].id=temp;
	    j--;	
	}	
	}
	for(i=0;i<n;i++)
	{
	p=&s[i];
	cout<<"\nEnter the id        : ";
	cout<<p->id;
	cout<<"\nEnter the name      : ";
	cout<<p->name;
	cout<<"\nEnter the tm        : ";
	cout<<p->tm;
    }
}
int sortname(struct st s[],int n)
{
	char temp[200];
	int i,j;
	for(i=0;i<n;i++)
	{
	j=i;
	while(j>0 && strcmp(s[j].name,s[j-1].name))
	{
		strcpy(temp,s[j].name);
		strcpy(s[j].name,s[j-1].name);
		strcpy(s[j-1].name,temp);
	    j--;	
	}	
	}
		for(i=0;i<n;i++)
	{
	p=&s[i];
	cout<<"\nEnter the id        : ";
	cout<<p->id;
	cout<<"\nEnter the name      : ";
	cout<<p->name;
	cout<<"\nEnter the tm        : ";
	cout<<p->tm;
    }
}
int sorttm(struct st s[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
	j=i;
	while(j>0 && s[j].tm>s[j-1].tm)
	{
		temp=s[j].tm;
		s[j].tm=s[j-1].tm;
		s[j-1].tm=temp;
	    j--;	
	}	
	}
	for(i=0;i<n;i++)
	{
	p=&s[i];
	cout<<"\nEnter the id        : ";
	cout<<p->id;
	cout<<"\nEnter the name      : ";
	cout<<p->name;
	cout<<"\nEnter the tm        : ";
	cout<<p->tm;
    }
}
main()
{
	int n;
	try
	{
	cout<<"\nEnter the size      : ";
		cin>>n;
		if(n<0)
		{
			char y[]="Invalid Input";
			throw y;
		}
	input(s,n);
	int k;
	cout<<"\nEnter the sorting    ";
	cout<<"\n1 . Sort through ID  ";
	cout<<"\n2 . Sort NAME        ";
	cout<<"\n3 . Sort Marks       ";
	cout<<"\nYour Choice         : ";
	cin>>k;
	if(k==1)
	{
	sortid(s,n);	
	}
	else if(k==2)
	{
	sortname(s,n);	
	}
	else if(k==3)
	{
	sorttm(s,n);
	}
	}
	catch(char y[])
	{
		cout<<"\n"<<y;
	}
}
