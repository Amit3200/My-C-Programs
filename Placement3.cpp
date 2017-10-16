#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int **ap;
	int i;
	ap=int(*)calloc(3,sizeof(int*));
	for(i=0;i<3;i++)
	{
		ap[i]=calloc(4,sizeof(int));
	}
	cout<<sizeof(ap);
	cout<<"\n"<<sizeof(*ap);
	cout<<"\n"<<sizeof(**ap);
}
