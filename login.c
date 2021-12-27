#include<stdio.h>
#include<conio.h>

void main()
{
	int P1,NewPasswd;
	char NewUser[10];
	char U1 [10];
	printf("Create Your User id:");
	scanf("%c",&NewUser);
	printf("Create Your Strong Password:");
	scanf("%d",&NewPasswd);
	printf("Enter Your UserID:");
	scanf("%c",&U1);
	printf("Enter Your Password:");
	scanf("%d",&P1);
	
	if(NewUser==U1&&NewPasswd==P1)
	{
		printf("$$$$Login Successfully....$$$$");
	}
	else
	{
		printf("!!!!Enter Your Correct Information!!!!");
	}
	
}
