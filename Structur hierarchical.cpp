//declare a structure that represents following hierarhical information : roll,name,->first,last,middle;gender;dob->d,m,y;marks->eng,maths,cs
#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	struct name
	{
		char first[200];
		char middle[200];
		char last[200];
	}na;
	char g[200];
	struct DOB
	{
		int dd,mm,yyyy;
	}db;
	int marks[3];
}s;
main()
{
	try
	{
		printf("\nEnter the roll : ");
		scanf("%d",&s.roll);
		printf("\nEnter the name \n");
		printf("\nFirst Name : ");
		scanf("%s",&s.na.first);
		printf("\nSecond Name : ");
		scanf("%s",&s.na.middle);
		printf("\nLast Name : ");
		scanf("%s",&s.na.last);
		printf("\nGender : ");
		scanf("%s",&s.g);
		printf("\nDOB(dd\\mm\\yyyy) : ");
		scanf("%d%d%d",&s.db.dd,&s.db.mm,&s.db.yyyy);
		printf("\nEnter the marks of English: ");
		scanf("%d",&s.marks[0]);
		printf("\nEnter the marks of Maths: ");
		scanf("%d",&s.marks[1]);
		printf("\nEnter the marks of Computer Science: ");
		scanf("%d",&s.marks[2]);
		printf("\nThe roll : ");
		printf("%d",s.roll);
		printf("\nThe name \n");
		printf("\nFirst Name : ");
		printf("%s",s.na.first);
		printf("\nSecond Name : ");
		printf("%s",s.na.middle);
		printf("\nLast Name : ");
		printf("%s",s.na.last);
		printf("\nGender : ");
		printf("%s",s.g);
		printf("\nDOB(dd\\mm\\yyyy) : ");
		printf("%d\\%d\\%d",s.db.dd,s.db.mm,s.db.yyyy);
		printf("\nMarks of English: ");
		printf("%d",s.marks[0]);
		printf("\nMarks of Maths: ");
		printf("%d",s.marks[1]);
		printf("\nMarks of Computer Science: ");
		printf("%d",s.marks[2]);
		
	}
	catch(...)
	{
		printf("\n\n*******************************************************\n\n");
		printf("Unexpected error, try again later");
	}
}

