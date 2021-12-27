#include<stdio.h>

void main()
{
	FILE *ptr=NULL;
	ptr=fopen("Main.txt","r");
	char c=fgetc(ptr);
	printf("The chracter i read was %c",c);
	fclose(ptr);
}
