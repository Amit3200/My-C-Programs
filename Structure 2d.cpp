#include<stdio.h>
struct array
{
	int a[200][200];
}s,*p;
int main()
{
	p=&s;
	int i,j,n,m;
		int sum=0;
	int avg=0;
	printf("Enter rows of array : ");
	scanf("%d",&n);
    printf("Enter columns of array : ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter the element : ");
			scanf("%d",&(p->a[i][j]));
		}
	}

		for(i=0;i<n;i++)
    	{
		for(j=0;j<m;j++)
		{
	printf("%d ",p->a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++)
	   {  
		for(j=0;j<m;j++)
		{
		sum=sum+(p->a[i][j]);
		}
	   }
	avg=sum/(m*n);
	printf("Average : %d\nSum : %d",avg,sum);
}
