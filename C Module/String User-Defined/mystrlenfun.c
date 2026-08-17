#include<stdio.h>
void mystrlen(char*,int*);
void main()
{
	char str[] = "Hello Firstbit";
	int length;
    mystrlen(str,&length);
    printf("Length of string is %d",length);
}
void mystrlen(char* str,int* length)
{
	int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    *length=i;
}