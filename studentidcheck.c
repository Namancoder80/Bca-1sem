#include<stdio.h>
void main()
{
	int userid;
	printf("Enter Your User Id:");
	scanf("%d",&userid);
	
	if(userid==101)
	{
		printf("Software dev");
	}
	else if(userid==102)
	{
		printf("Application Dev");
	}
	else if(userid==103)
	{
		printf("IOS Dev");
	}
	else
	{
		printf("Please Contact Our Hireing team");
	}
	
}
