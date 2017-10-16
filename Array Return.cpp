#include<iostream>
using namespace std;
int *fun(int a[],int n);// function pointer type
main()
{
	int n,i,a[200],*x;//pointer to be assigned with the function call so that all the values changed in function can be seen here;//in function defination return of only array variable
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	x=fun(a,n);
	for(i=0;i<n;i++)
	cout<<"{{"<<x[i]<<"}}";
}
int *fun(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*2;
	}
	return a;
}

