#include<stdio.h>
#include<conio.h>

void main()
{
	int User,User1;
	int passwd,passwd1;
	int ch;
	//User Account Creation
	printf("Create Your User ID:");
	scanf("%d",&User);
	printf("Create Your Password: ");
	scanf("%d",&passwd);
	//Login Into An Account
	printf("Enter Your User ID:");
	scanf("%d",&User1);
	printf("Enter Your Password:");
	scanf("%d",&passwd1);
	//Condition Of Switch
	printf("Enter Your Choice:");
	scanf("%d",&ch);
	//switch statement start
	switch(ch)
	{
		case 1:if(User==User1&&passwd==passwd1)
		{
			printf("Login");
		}
	}
}
