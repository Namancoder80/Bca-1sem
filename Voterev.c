// wap to help GOV.IN to verify user is eligible for vote or not

#include<stdio.h>
#include<conio.h>

void main()
{
	int Age;
	
	
	
	printf("Enter Your Age:");
	scanf("%d",&Age);
	
	if(Age>=18)
	{
		printf("Eligible");
		
	}
	else
	{
		printf("Not Eligible");
	}
}
