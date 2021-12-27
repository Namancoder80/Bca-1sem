#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
	
void main()
{
	int ch;
	printf("Select your payment mod:");
	scanf("%d",&ch);
	int acn;
	int cnf;
    switch(ch)
	{
		case 1:
			printf("Enetr your account number:");
			scanf("%d",&acn);
			printf("ReEnter your account number:");
			scanf("%d",&cnf);
			break;
	switch(cnf)
		  {
		  	case 1:
		  		if(acn==cnf)
		  		{
		  			printf("Purchased Success fully");
				}
				else
				{
					printf("Transaction Failed");
				}
	  	    break;
		
	    }
	}
}
