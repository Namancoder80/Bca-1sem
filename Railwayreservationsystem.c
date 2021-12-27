#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char loginusername[10];
	int lgs;
	int static_passwd,dpasswd;
	char user[]="Naman";
	printf("Hello Welcome to Indian Railways....\n");
	printf("Do you want to Login or Sign-up?\n1:Login\n2:Sign-up\nEnter Your Choice:");
	scanf("%d",lgs);
	
	switch(lgs)
	{
		case 1:
			printf("Enter Your User Name:");
			gets(loginusername);
			if(loginusername==user)
			{
				printf("\n%sYou are now Login into your account",loginusername);
			}
			else
			{
				printf("Enter Your Detail Correctly!");
			}
		break;
		
		
		
	}
}
