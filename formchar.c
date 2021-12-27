#include<stdio.h>
#include<conio.h>

void main()
{
	char User1;
	char User0;
	int Passwd;
	int nfpasswd;
	printf("Create Your User Name:");
	scanf("%c",&User1);
	printf("Create Your Password:");
	scanf("%d",&Passwd);
	printf("Enter Your UserName For Login:");
	scanf("%d",&User0);
	printf("Enter Your Password:");
	scanf("%d",&nfpasswd);
	
	if(User1==User0&&Passwd==nfpasswd)
	{
		printf("$$$$Login Successfully....$$$$");
	}
	else
	{
		printf("Cant Match Your Id!");
	}
}
