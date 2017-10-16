#include<iostream>
using namespace std;
struct content
{
	int age;
	float weight;
};
main()
{
	int n;
	cout<<"\nEnter the number of members : ";
	cin>>n;
	struct content s[n];
	struct content *p=new struct content[n] ;
	int i=0;
	for(i=0;i<n;i++)
	{
		p[i]=&s[i];
		cout<<"\nEnter the age : ";
		cin>>p[i]->age;
		cout<<"\nEnter the weight : ";
		cin>>p[i]->weight;
	}
		for(i=0;i<n;i++)
	{
		cout<<"\nEnter the age : ";
		cout<<p[i]->age;
		cout<<"\nEnter the weight : ";
		cout<<p[i]->weight;
	}
		for(i=0;i<n;i++)
		{
	    delete(p[i]);
	    }
}
