#include<stdio.h>
struct content
{
	int age;
	float weight;
};
main()
{
	int n;
	printf("\nEnter the number of members : ");
	scanf("%d",&n);
	struct content s[n];
	struct content *p=malloc(n*sizeof(struct content));
	int i=0;
	for(i=0;i<n;i++)
	{
		p=&s;
		printf("\nEnter the age : ");
		scanf("%d",&p[i].age);
		printf("\nEnter the weight : ");
		scanf("%f",&p[i].weight);
	}
		for(i=0;i<n;i++)
	{
		printf("\nEnter the age : ");
		printf("%d",p[i].age);
		printf("\nEnter the weight : ");
		printf("%f",p[i].weight);
	}
}
