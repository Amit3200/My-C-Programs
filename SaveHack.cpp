#include<iostream>
#include<math.h>
using namespace std;
int summer(int l)
{
	int a=1,b=2,c=3,kol=0,x=0,i,f;
	int ar[1000];
	ar[0]=1;
	ar[1]=2;
	ar[2]=3;
	for(i=3;i<999;i++)
	{
		x=a+b+c;
		ar[i]=x%((10*10*10*10*10*10*10*10*10)+7);
		a=b;
		b=c;
		c=x;
	}
	kol=ar[l-2]+ar[l-3]+ar[l-4];
	return kol;
}
int main()
{
	int z;
	cin>>z;
	int i;
	for(i=0;i<z;i++)
	{
		int k=0,f;
		cin>>k;
		f=summer(k);
		cout<<f%((10*10*10*10*10*10*10*10*10)+7)<<"\n";
	}
	return 0;
}

