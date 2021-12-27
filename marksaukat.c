#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	printf("Enter you'r marks:");
	scanf("%d",&marks);
	
	if(marks==100)
	{
		printf("Buddhi Bahoot tez Hai Tumhara");
		
	}
	else if(marks>=80&& marks<=70)
	{
		printf("Sahe padh Leya");
		
	}
	else if(marks>=70&& marks <60)
	{
		printf("Padhol Todha aur");
		

	}
	else if(marks>=60&&marks<50)
	{
		printf("Chal Nikal Aab");
	}
	
	else if(marks>=40&&marks <10)
	{
		printf("fail hai bhai");
	}
}
