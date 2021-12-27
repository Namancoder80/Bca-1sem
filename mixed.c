#include<stdio.h>
#include<conio.h>

void calculator()
{
	int a,b,c,ch;
	printf("Enter Your first number:");
	scanf("%d",&a);
	printf("Enter Your Second Number:");
	scanf("%d",&b);
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		//addition
		case 1:c=a+b;
		printf("Your Addition Of Two Number is:%d",c);
		break;
		//Subtract
		case 2:c=a-b;
		printf("Your Subtraction is%d",c);
		break;
		//multiply
		case 3:c=a*b;
		printf("Your multiplyed of two number is%d",c);
		break;
		//divide
		case 4:c=a/b;
		printf("Your division of two number is:%d",c);
		break;
		
		// invalid choice
		default:printf("Invalid choice");
		
	}
}
void main()
{
	calculator();
}

	

