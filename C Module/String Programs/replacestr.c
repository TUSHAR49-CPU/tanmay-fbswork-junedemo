#include <stdio.h>

void replace(char str[])
{
    int i;

    for (i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a')
            str[i]='$';
    }
}

void main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    replace(str);

    printf("New string: %s", str);
}