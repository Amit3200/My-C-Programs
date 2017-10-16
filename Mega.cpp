#include<iostream>
using namespace std;
int *input(int a[],int n)
{
	int i;
	cout<<"\nEnter the elements : ";
	for(i=0;i<n;i++)
	{
	cin>>a[i];	
	}
	return a;
}
int *sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
		{
			a[j]=a[j]+a[j-1]-(a[j-1]=a[j]);
			j--;
		}
	}
	return a;
}

int search(int a[],int n,int k)
{
	int i;
	int p=0;
	int loc=0;
	int s=0;
	int l=n;
	int m=(s+l)/2;
	int *f=sort(a,n);
	for(i=0;i<n;i++)
	{
		cout<<f[i]<<" ";
		m=(s+l)/2;
		if(f[m]==k)
		{
			p=1;
			loc=i;
		}
		else if(f[m]>k)
		{
			l=m;
			s=0;
		}
		else if(f[m]<k)
		{
			s=m;
			l=n;
		}
	}
	if(p==1)
	{
		cout<<"\nFound at "<<loc;
	}
	else
	{
		cout<<"\nNot Found";
	}
}
int del(int a[],int n,int index)
{
	int i;
	if(index>n)
	{
		cout<<"\nDeletion Can't be Performed";
	}
	else
	{
	for(i=index-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	cout<<"\nDeleted array   : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
    }
}
int ins(int a[],int n,int index,int v)
{
	int i;
	if(index>n+2)
	{
		cout<<"\nInsertion Can't be Performed";
	}
	else
	{
	for(i=n-1;i>index-1;i--)
	{
		a[i+1]=a[i];
	}
	a[index-1]=v;
	n++;
	cout<<"\nInserted array   : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
    }
}
int dele(int a[],int n,int p)
{
	int i,l,k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
		{
		l=i;
		k++;
		break;	
		}
	}
	if(k==n)
	{
		cout<<"\nNo Deletion performed";
	}
	else
	{
	for(i=l;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	cout<<"\nDeleted Element Array : ";
	for(i=0;i<n;i++)
	cout<<a[i];
    }
}
int delp(int a[],int n)
{
	int *f=sort(a,n);
	int i,k=0,s[n*n],p[n*n],c=1;
	for(i=0;i<n;i++)
	{
		if(f[i]==f[i+1])
		{
			c++;
		}
		else
		{
			s[k]=f[i];
			k++;
		}
	}
	cout<<"\nArray is here : ";
	for(i=0;i<k;i++)
	{
		cout<<s[i]<<" ";
	}
}
int count(int a[],int n)
{
	int *f=sort(a,n);
	int i,k=0,s[n*n],p[n*n],c=1;
	for(i=0;i<n;i++)
	{
		if(f[i]==f[i+1])
		{
			c++;
		}
		else
		{
			s[k]=f[i];
			p[k]=c;
			k++;
			c=1;
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<"\n"<<s[i]<<" occurs "<<p[i]<<" times";
	}
}
main()
{
	int n,ch,i;
	cout<<"\nEnter the size  : ";
	cin>>n;
	int a[n*n];
	int *f=input(a,n);
	A:
	cout<<"\n\t\tMenu";
	cout<<"\n1. Searching Element(Binary)";
    cout<<"\n2. Deleting  Element(Position)";
    cout<<"\n3. Inserting Element(Position)";
    cout<<"\n4. Deleting  Element(Element)";
    cout<<"\n5. Deleting  Element(Repeats)";
    cout<<"\n6. Frequency Element(Each Wise)";
    cout<<"\n Your Choice : ";
    cin>>ch;
    if(ch==1)
    {
    	int p;
    	cout<<"\nEnter the element to search : ";
    	cin>>p;
		search(a,n,p);
	}
	else if(ch==2)
	{
		int p;
		cout<<"\nEnter the position to delete : ";
		cin>>p;
		del(a,n,p);
	}
	else if(ch==3)
	{
		int p,value;
		cout<<"\nEnter the position to insert : ";
		cin>>p;
		cout<<"\nEnter the value              : ";
		cin>>value;
		ins(a,n,p,value);
	}
	else if(ch==4)
	{
		int p;
		cout<<"\nEnter the element to delete : ";
		cin>>p;
		dele(a,n,p);
	}
	else if(ch==5)
	{
		delp(a,n);
	}
	else if(ch==6)
	{
		count(a,n);
	}
	else
	{
	cout<<"\nInvalid Choice Try Again ";
	goto A;
	}
	cout<<"\nIf wanna try Again press Y : ";
	char call;
	cin>>call;
	if(call=='y' || call=='Y')
	{
		goto A;
	}
	else
	{
		cout<<"\nTerminatng";
	}
}
