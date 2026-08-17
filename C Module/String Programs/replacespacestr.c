#include <stdio.h>

void replaceSpace(char str[])
{
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            str[i]='#';
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    replaceSpace(str);

    printf("New string: %s", str);
}