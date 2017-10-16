#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	int roll[10];
};
int main()
{
	struct student s,*p;
	int i;
	for(i=0;i<1;i++)
	{
		cout<<"\nEnter Roll : ";
	    cin>>(&p->roll[i]);
	}
	for(i=0;i<1;i++)
	{
		printf("\n***************************************\n");
		printf("%d",p->roll[i]);
	}
}
