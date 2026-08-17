#include <stdio.h>
char* mystrstr(char*,char*);
void main()
{
    char str[]="Hello FirstBit";
    char sub[]="First";

    printf("Substring = %s\n", mystrstr(str,sub));
}

char* mystrstr(char *str,char *sub)
{
    int i,j;

    for (i=0;str[i]!='\0';i++)
    {
        j=0;

        while(sub[j]!='\0' && str[i + j]==sub[j])
            j++;
        if (sub[j]=='\0')
            return &str[i];
    }
}