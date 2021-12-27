#include<stdio.h>
#include<conio.h>

void main()
{
	int age,height,value;
	int ch;
	printf("enter your age:");
	scanf("%d%d",&age,&height);
	printf("enter your choice 1-4:");
    scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: value=age==height;
		printf("hero",age==height);
		break;
		
		case 2: value=age!=height;
		printf("chutiya bona");
		break;
	}
}
