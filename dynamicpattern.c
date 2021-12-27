#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,row;
	
	printf("Enter Number Of Rows:");
	scanf("%d",&row);
 /*	scanf("%d",&pattern);
	*/
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++);
		{
			printf("*");
		}
		printf("\n");
	}
}
