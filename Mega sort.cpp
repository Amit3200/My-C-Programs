//WAP to implement insertion sort in descending order
//wap              selection
//wap              bubble
#include<iostream>
using namespace std;
int *sort1(int a[],int n)
{
	int i,j,count=0,comp=0,m;
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
		{
			comp++;
			a[j]=a[j]+a[j-1]-(a[j-1]=a[j]);
			j--;
		}
		count++;
		
	}
	cout<<"\n\nComparisons : "<<count;
	cout<<"\n\nMovements   : "<<comp;
	return a;
}
int *sort2(int a[],int n)
{
	int i,j,count=0,comp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			count++;
			if(a[j]>a[i])
			{
			comp++;	
			a[j]=a[j]+a[i]-(a[i]=a[j]);
		    }
		}
	}
	cout<<"\n\nComparisons : "<<count;
	cout<<"\n\nMovements   : "<<comp;
	return a;
}
int *sort3(int a[],int n)
{
	int i,j,count=0,comp=0,pass=0;
	bool y=false;
	for(i=0;i<n-1;i++)
	{
		y=false;
		for(j=0;j<n-i-1;j++)
		{
			count++;
			if(a[j]<a[j+1])
			{
			a[j]=a[j]+a[j+1]-(a[j+1]=a[j]);
		    comp++;
		    y=true;
		    pass++;
			}
		}
		if(y==false)
		break;
	}
	cout<<"\n\nComparisons : "<<count;
	cout<<"\n\nMovements   : "<<comp;
	cout<<"\n\nPasses      : "<<pass;
	return a;
}
int main()
{
	int n;
	cout<<"\nEnter the array size   : ";
	cin>>n;
	cout<<"\nEnter the values       : ";
	int i,a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	A:
	int choice,*f;
	cout<<"\n1.Insertion\n2.Selection\n3.Bubble\n";
	cout<<"\n\nYour Choice       : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			f=sort1(a,n);
			break;
		case 2:
			f=sort2(a,n);
			break;
		case 3:
			f=sort3(a,n);
			break;
		default:
		cout<<"\nInvalid Key\nTry Again";
		goto A;
		break;		
	}
	cout<<"\n\nSorted Array : ";
	for(i=0;i<n;i++)
	{
		cout<<f[i]<<" ";
	}
	char y;
	cout<<"\n\nY to try again : ";
	cin>>y;
	if(y=='Y' || y=='y')
	main();
}

