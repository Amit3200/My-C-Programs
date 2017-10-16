#include<iostream>
using namespace std;
main()
{
	int a[100],i,j,k,l=0,n;
	cout<<"\nEnter no. of elements : ";
	cin>>n;
	cout<<"\nEnter Elements : ";
	for(i=0;i<n;i++)
	cin>>a[i];                    //   1,5,1,2,5,3,2
	for(i=0;i<n;i++)              //   5,1,2,5,3,2
	{
//		cout<<i<<endl;
		for(j=i+1;j<n-l;j++)
		{
			if(a[i]==a[j])
			{
				for(k=0;k<n-i-l;k++)
				{
					a[k+i]=a[k+1+i];
//					cout<<a[k];
				}
				i--;
				l++;
				break;
			}
		}
//		cout<<endl;
	}
	for(i=0;i<n-l;i++)
	cout<<a[i];
}
