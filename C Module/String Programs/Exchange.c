#include <stdio.h>

void exchange(char str[])
{
    int i=0;
    char temp;

    while(str[i]!='\0')
        i++;

    if (i>1)
    {
        temp=str[0];
        str[0]=str[i-1];
        str[i-1]=temp;
    }
}

void main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    exchange(str);

    printf("New string: %s", str);
}