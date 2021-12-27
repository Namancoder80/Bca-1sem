#include<stdio.h>

void main()
{
	int i;
	int a[9]={1,3,4,5,6,2,3,6,7};
	
	for(i=1;i<=9;i++)
	{
		printf("%dArray Number:",a[i]);
	}
	printf("\n");
	for(i=8;i>=0;--i)
	{
		printf("\n%d Reverse Number:",a[i]);
	}
}
