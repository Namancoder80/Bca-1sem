//Wap to check wheather it is eligible to vote or not
#include<stdio.h>  //header file
#include<conio.h>  // header file

void main()
{
	int Age; // declare a variable "Age"
	printf("Enter your age:");
	scanf("%d",&Age);
	
	if(Age>=18)
	{
		printf("eligibe for vote");
	}
	else
	{
		printf("!Sorry Not Eligible");
	}
}
