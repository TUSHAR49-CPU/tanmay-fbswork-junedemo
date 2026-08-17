#include<stdio.h>
char* mystrcmp(char*,char*);
void main()
{
	char strnm[] = "Hello World";
    char name[] = "Hello World";
    mystrcmp(strnm,name);
}
char* mystrcmp(char* strnm,char* name)
{
	int i=0;
    while (strnm[i]!='\0')
    {
    	if(strnm[i]==name)
        	return 1;
        else
        	return 0;
    }
    i++;
}