//Wap to initialize member of struct using pointer to structure
//wap program that passesa pointer to the structure to a function
#include<stdio.h>
struct student
{
	int roll;
};
int display(struct student *p,int n)
{
	int i;
	printf("\n In function");
	for(i=0;i<n;i++)
	printf("\n Roll : %d",p[i].roll);
	return 0;
}
main()
{
int i=0,n=3;	
printf("\nEnter the number of members : ");
scanf("%d",&n);
struct student s[n];
struct student *p=malloc(n*sizeof(struct student));
for(i=0;i<n;i++)
{
p[i]=s[i];
printf("\n Enter the roll : ");
scanf("%d",&p[i].roll);
}

	display(p,n);
	free(p);
}
