#include<stdio.h>

char* mystrnstr(char* str,char* sub, int n)
{
    int i, j;

    for (i=0;str[i]!='\0' && i<n;i++)
    {
        for (j=0;sub[j]!='\0' && i+j<n;j++)
        {
            if (str[i+j]!=sub[j])
                break;
        }
        if (sub[j]=='\0')
            return &str[i];
    }
    return NULL;
}

int main()
{
    char str[]="Hello World";
    char sub[]="World";

    char *p=mystrnstr(str,sub,11);

    if (p!= NULL)
        printf("Found: %s", p);
    else
        printf("Not found");
}