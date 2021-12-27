#include <stdio.h>
#include<conio.h>

void main()
{
	int t,i;
	printf("Hey Which Table Do You Want To Print:");
	scanf("%d",&t);
	
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",t,i,t*i);
	}
}
