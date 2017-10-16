//Let us suppose a company xyz keeps a 1-d array called year in whose index set 1970 to 2005 such that year[k] contains number of employees born in year[k] 
//WAP to find the years in which no employee was born and find the number of years who will be  l years old at the end of current year
//Read the current year as entered by user

//Write a program to delete the duplicate no. from an array of n size

#include<iostream>
using namespace std;
struct xyz
{
	int year[36];
	int st[36];
}s;
int main()
{
	int st1=1970;
	int i,j,store[36],k=0,exp,tst,count=0,flag=1,pro=0,h=0,inc=0;
	for(i=0;i<36;i++)
	{
		s.st[i]=st1;
		st1=st1+1;
	}
    cout<<"\nEnter the no. of employee : ";
    for(i=0;i<36;i++)
    {
    cout<<"\nEnter the no of employees in "<<s.st[i]<<" : ";
    	cin>>s.year[i];
	}
	for(i=0;i<36;i++)
	{
		if(s.year[i]==0)
		{
			store[k]=s.st[i];
			k++;
			inc++;
		}
	}
	if(k==0)
	{
		cout<<"\nNo such year where found in which 0 employees where found";
	}
	else
	{
		cout<<"\nTotal Records Found are : "<<inc;
		cout<<"\n\nYears Found are   : ";
		for(i=0;i<k;i++)
		{
			cout<<store[i]<<" ";
		}
	}
	cout<<"\n\nEnter the experience or older age you want : ";
	cin>>exp;
	cout<<"\nEnter the current year                     : ";
	cin>>tst;
	for(i=0;i<36;i++)
	{
		if(tst-s.st[i]==exp)
		{
				flag=1;
				pro=s.st[i];
				h=i;
				break;
		}
	}
	if(flag==1 &&  pro>=1970 && pro<=2005)
	{
		if(s.year[h]==0)
		{
		cout<<"\nTechnically answer is : "<<pro<<" But company didn\'t hired anyone at that time";	
		}
		else
		cout<<"\nCandidate Found They belong to batch of "<<pro;
	}
	else
	{
		cout<<"\nCandidate Not Found in Record";
	}
}
