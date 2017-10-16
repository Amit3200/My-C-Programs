#include<iostream>
#include<vector>
using namespace std;
main()
{
	int i,n,k=0,search=0;
	vector<int> v1;
	cout<<"Enter the size : ";
	cin>>n;
    int *a=new int[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	cout<<"\nEnter the element to search : ";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			k++;
			v1.push_back(i+1);
		}
	}
	if(k!=0)
	{
		cout<<"\nYour Element Found In Array";
		for(i=0;i<k;i++)
		{
			cout<<"\nFound at : "<<v1[i];
		}
	}
	else
	{
		cout<<"\nYour Element is not in Array";
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		if(i==(v1[i]-1))
		{
		cout<<"^ ";
	    }
		else
		cout<<"  ";
	}
}
