
#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	
	if(marks==100)
	{
		printf("Londa topper hai");
	}
	else if (marks>=80 && marks <100)
	{
		printf("teacher ka gulam");
	}
	else if (marks>=60 && marks <79)
	{
		printf("first hai londa");
		
	}
	
	else
	{
		printf("fail hogaya bhaag jaa sale");
	}
}
