#include<stdio.h>

void main()
{
	int num,count,fact;
	
	printf("Enter Which number of factorial do you want:");
	scanf("%d",&num);
	for(count=1;count<=num;count++)
	{
		fact=fact*count;
	}
	printf("Factorial of %d is %d",num,fact);
}
