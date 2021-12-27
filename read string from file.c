#include<stdio.h>

void main()
{
	FILE *ptr=NULL;
	ptr=fopen("Mani.txt","r");
	
	char str[10];
	fgets(str,10,ptr);
	printf("The String is:%s",str);
	
	fclose(ptr);
	
	
}
