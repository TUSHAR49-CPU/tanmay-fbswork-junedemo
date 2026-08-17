#include <stdio.h>
void mystrncpy(char*,char*,int);
void main()
{
    char str1[50];
    char str2[]="Hello FirstBit";

    mystrncpy(str1,str2,5);

    printf("String = %s\n",str1);
}

void mystrncpy(char *str1, char *str2, int n)
{
    int i=0;
    while (i<n && str2[i]!='\0')
    {
        str1[i]=str2[i];
        i++;
    }
    str1[i] = '\0';
}