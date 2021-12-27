#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	int ch;
	printf("Enter your two number:");
	scanf("%d%d",&a,&b);
	printf("Enter You'r Choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: c=a+b;
		printf("%d",c);
		break;
		
		case 2: c=a-b;
		printf("%d",c);
		break;
		
		case 3: c=a*b;
		printf("%d",c);
		break;
		
		case 4: c=a/b;
		printf("%d",c);
		break;
		
		default: printf("!Invalid Choice");
	}
}
