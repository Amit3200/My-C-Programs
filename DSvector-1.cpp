#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<int> v1;
	int n,i,k;
	cout<<"Enter the size : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<"\nEnter the value : ";	
	cin>>k;	
	v1.push_back(k);
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
    	if(v1[i]%2==0)
    	cout<<(v1[i])<<" ";
	}
}
