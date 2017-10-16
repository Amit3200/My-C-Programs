#include<stdio.h>
int swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("Now a is %d and b is %d",*a,*b);
}
int main()
{
	int *a,*b,m,n;
	scanf("%d%d",&m,&n);
	printf("Now a is %d and b is %d\n",m,n);
	a=&m;
	b=&n;
	swap(a,b);
}
