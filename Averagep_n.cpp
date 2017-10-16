#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	float *p=new float[n];
	int i;
	float p_avg,n_avg,p_sum=0,n_sum=0,k=0,k1=0;
	cout<<"\nEnter the Elements : ";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		if(p[i]>=0)
		{
			p_sum=p_sum+p[i];
			k++;
		}
		if(p[i]<0)
		{
			n_sum=n_sum+p[i];
			k1++;
		}
	}
	p_avg=p_sum/float(k);
    n_avg=n_sum/float(k1);
	cout<<"\nPositive : "<<p_avg;	
	cout<<"\nNegative : "<<n_avg;
}
