#include<stdio.h>
#include<conio.h>

void main()
{
	int eng,cs,maths,acc,eco,agg;
	float percent;
	printf("Enter You Five Subject Marks:");
	scanf("%d,%d,%d,%d,%d",&eng,&cs,&maths,&acc,&eco);
	agg=eng+cs+maths+acc+eco;
	percent=agg /5;
	printf("Your Agg Marks%d\n",agg);
	printf("Your Percentage Is%f\n",percent);
	if(percent<=20)
	{
		printf("Noob");
	}
	else
	{
		printf("Pro");
	}
	
	
}
