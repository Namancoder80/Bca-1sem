#include<stdio.h>
#include<conio.h>
void main()
{
	int num,fact ,i=1;
	
	printf("Enter the number which you want its factorial:");
	scanf("%d",num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Your Factorial of %d is %d",i,fact);
}
