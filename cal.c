#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	int ch;
	printf("enter your two number");
	scanf("%d%d",&a,&b);
	printf("enter your choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: c=a+b;   //add
		printf("%d",c);
		break;
		
		case 2: c=a*b;   //multiply
		printf("%d",c);
		break;
		default : printf("invalid choice");
	}
}
