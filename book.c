#include<stdio.h>
#include<conio.h>

void main()
{
	int e,m,s,h,a,per;
	printf("Enter 5 sub marks:");
	scanf("%d%d%d%d%d",&e,&m,&s,&h,&a);
	per=(e+m+s+h+a)/100*500;
	if (per==60)
	{
		printf("First Division");
		
	}
	else
	{
		if(per>50&&per<=59)
		printf("Second Division");
	}
	else if
	{
		if (per>40&&per<=49)
		printf("Third Division");
	}
	else
	{
		//if(per<40)
		printf("Fail");
	}
}
