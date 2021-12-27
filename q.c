#include<stdio.h>
#include<conio.h>

void main()
{
	int ch;
	//int Maths,Science;
	
	printf("Enter Your Passed Subject\n1-Maths-Science\n2-Maths\n3-Science\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: ch==1;
		{
			printf("You Won 45 Rs");
		}
		case 2: ch==2;
		{
			printf("You Won 15 Rs");
		}
		case 3:ch==3;
		{
			printf("You Won 15 Rs");
		}
		default: printf("Invalid Choice!");
	}
	
}
