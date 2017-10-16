#include<iostream>
using namespace std;
int swap(int x,int y)
{
	x=x*y;
	y=x/y;
	x=x/y;
	cout<<"\nSwap a                : "<<x;
	cout<<"\nSwap b                : "<<y;
}
int swap1(int a,int b)
{
	a=a+b-(b=a);
	cout<<"\nSwap a                : "<<a;
	cout<<"\nSwap b                : "<<b;
}
main()
{
	int a,b;
	cout<<"\nEnter a               : ";
    cin>>a;
    cout<<"\nEnter b               : ";
    cin>>b;
    swap(a,b);
    swap1(a,b);
	return 0;
}
