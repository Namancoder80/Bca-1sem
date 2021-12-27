#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int lgs;
	int static_passwd,dpasswd;
    int cnfp=198;
	printf("Hello Welcome to Indian Railways....\n");
	printf("Do you want to Login or Sign-up?\n1:Login\n2:Sign-up\nEnter Your Choice:");
	scanf("%d",&lgs);
	char user[] ="Naman";
	char loginusername[10];
	char nu1[10];
	
	switch(lgs)
	{
		case 1:	printf("Enter Your User Name:");
			scanf("%s",&loginusername);
			printf("Enter Your Password:");
			scanf("%d",&static_passwd);

			
			if(static_passwd==198)
			
				printf("%s You are now Login into your account",loginusername);
			
			else
			
				printf("Enter Your Detail Correctly!");
			
		    break;
		case 2:
			printf("Enter Your user Name:");
			scanf("%s",&nu1);
			printf("Enter a strong Password:");
			scanf("%d",&cnfp);
			printf("%s Your Account is Now Created.\nWelcome To Indian Railways %s",nu1,nu1);
			break;
		default  :printf("Invalaid choice");
		
		
		
	}
    
}
