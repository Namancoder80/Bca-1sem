#include<stdio.h>
#include<string.h>

void main()
{
	char str1[100];
	char str2[100];
	
	gets(str1);
	gets(str2);
	
	printf("%s is a friend of %s",str1,str2);
	
}
