#include<stdio.h>

void main()
{
	int count,fact=1,num;
	printf("Enter Which No of factorial do you want:");
	scanf("%d",num);
	for(count=1;count<=num;count++)
	{
		fact=fact*count;
	}
	printf("Your Factorial %d is %d",num,fact);
}
