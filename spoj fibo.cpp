#include<iostream>
using namespace std;
int main()
{
	int a1,t;
	cin>>a1;
	for(t=0;t<a1;t++)
	{
		int a,b,fi,d,sum=0,mega=0;
		cin>>a;
		cin>>b;
		cin>>fi;
		cin>>d;
		int a2[100000];
		a2[0]=a;
		a2[1]=b;
		for(int i=2;i<fi;i++)
		{
			sum=a+b;
			a2[i]=sum;
			a=b;
			b=sum;
		}
		for(int i=0;i<fi;i++)
		{
			mega=mega+a2[i];
	//		cout<<a2[i]<<"  ";
		}
	//	cout<<mega<<"\n";
		cout<<mega%d<<"\n";
		mega=0;
		d=0;
		a=0;
		b=0;
		fi=0;
	}
	
}

