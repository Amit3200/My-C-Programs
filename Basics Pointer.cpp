#include<stdio.h>
struct student
{
	int age;
	float weight;
}*p,s[3];
main()
{
	p=s;
    int i=0,n=3;
    for(i=0;i<n;i++)
    {
    	printf("\nEnter the age : ");
    	scanf("%d",&p->age);
    	printf("\nEnter the weight : ");    	
    	scanf("%f",&p->weight);
    	printf("++++++++++++++++++++++++++++++++++++++++");
    	printf("\nAge : %d",p->age);
    	printf("\nWeight : %f",p->weight);
	}
}
