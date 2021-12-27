#include<stdio.h>
#include<conio.h>

void main()
{
	int Km,m,feet,inches,cm;
	
	printf("Entrer Your Distance In KM:");
	
	scanf("%d",&Km);
	
	m= km*1000;
	feet=km*3280;
	inches=Km*39370;
	cm=km*100000;
	printf("Your Distance In Meter:%d",m);
	printf("Your Distance In Feet:%d",feet);
	printf("Your Distance In Inches:%d",inches);
	printf("Your Distance In cm:%d",cm);
}
