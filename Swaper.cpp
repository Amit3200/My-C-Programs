#include<iostream>
using namespace std;
int onelineswapper(int *a,int *b)
{
	*a=*a+*b-(*b=*a);
	cout<<"\n";
	cout<<"\nSwapped A is : "<<*a;
	cout<<"\nSwapped B is : "<<*b;
}
main()
{
	int a,b,*p,*q;
	cout<<"\nEnter A      : ";
	cin>>a;
	cout<<"\nEnter B      : ";
	cin>>b;
	p=&a;
	q=&b;
	cout<<"\nValue A      : "<<*p;
	cout<<"\nValue B      : "<<*q;
	onelineswapper(p,q);
}
