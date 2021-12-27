#include<stdio.h>
#include<conio.h>

void main()
{
	int Maths,Science;
	printf("Enter Your Maths Marks:");
	scanf("%d",&Maths);
	printf("Enter Your Science Marks:");
	scanf("%d",&Science);
	
	if(Maths==Science)
	{
		printf("You Won 45 Rs");
		
	}
	else if(Maths<=45&&Science<=45)
	{
		printf("You Won 15 rs");
	}
}
