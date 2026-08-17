#include<stdio.h>
#include<string.h>
void mystrcat(char*,char*);
void main()
{
	char str1[50] = "Hello World";
    char str2[] = "Hello FirstBit";
    mystrcat(str1,str2);
	printf("Concat string is %s\n", str1);
}
void mystrcat(char* str1,char* str2)
{
	int i=0,j=0;
	while(str1[i]!='\0')
		i++;
	while(str1[i]!='\0' || str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}