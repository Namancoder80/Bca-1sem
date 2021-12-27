#include<stdio.h>
#include<conio.h>

void star()
{
	int i,j,row;
	printf("Enter Number Of Rows:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("$");
		}
		printf("\n");
	}
}
void s()
{
	int a,b,sum;
	printf("Enter Your Two Number:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Your sum is",sum);
}
int main()
{
	star();
	printf("Coders\n");
	s();
	return 0;
}
	

