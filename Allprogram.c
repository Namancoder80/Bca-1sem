#include<stdio.h>
#include<conio.h>
#include<string.h>

void swap()
{
	int val1,val2,swap;
	
	printf("Enter Two Integer:");
	scanf("%d%d",&val1,&val2);
	printf("\nBefore Swapping\nFirst Value:%d\nSecond Value:%d\n",val1,val2);
	
	//swap
	
	swap=val1;
	val1=val2;
	val2=swap;
	
	printf("\nAfter Swapping\nFirst Value:%d\nSecond Value:%d\n",val1,val2);
	
	
}


void main()
{
	
	swap();
	
}
