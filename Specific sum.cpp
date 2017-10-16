#include<iostream>
using namespace std;
struct array
{
	int n,m,spec;
	int s[2000][2000];
	
}*p,a;
int re(int,int,int);
main()
{
	int i,j;
	p=&a;
	cout<<"\nEnter the number of rows : ";
	cin>>p->m;
	cout<<"\nEnter the number of cols : ";
	cin>>p->n;
	cout<<"\nEnter the specific row to add : ";
	cin>>p->spec;
	re(p->m,p->n,p->spec);
}
int re(int m,int n,int sp)
{
	int i,j,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter the element : ";
			cin>>p->s[i][j];
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"    "<<p->s[i][j]<<"   ";
		}
		cout<<"\n";
	}
	i=sp-1;
	for(j=0;j<n;j++)
	{
		sum=sum+p->s[i][j];
	}
	cout<<"\nSum is here : "<<sum;
}
