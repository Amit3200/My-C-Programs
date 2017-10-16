#include<iostream>
using namespace std;
main()
{
	int n,count=0;
	cout<<"Enter the size : ";
	cin>>n;
	int i,j,k=0;
	int *a=new int[n];
	int *c=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the elements : ";
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
  		if(a[i]==a[j])
  		{
    	for(k=j;k<n;k++)       //
    	{
    	a[k]=a[k+1];
		}
		n--;
		}
  	    }
    }
     for(i=0;i<n;i++)
    {
    	cout<<a[i];
	}
}
