#include <stdio.h>

int mystrncmp(char*,char*,int);
void main()
{
    char str1[] = "Hello";
    char str2[] = "Help";

    if (mystrncmp(str1,str2,3)==0)
        printf("Equal");
    else
        printf("Not Equal");
}

int mystrncmp(char* str1,char* str2,int n)
{
    int i=0;

    while(i<n)
    {
        if(str1[i]!=str2[i])
            return str1[i]-str2[i];

        if (str1[i]=='\0')
            return 0;
        i++;
    }
    return 0;
}