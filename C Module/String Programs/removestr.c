#include<stdio.h>

void removeChar(char str[], int n)
{
    int i;

    for(i=n;str[i]!='\0';i++)
    {
        str[i]=str[i+1];
    }
}

void main()
{
    char str[100];
    int n;

    printf("Enter string: ");
    gets(str);

    printf("Enter index: ");
    scanf("%d", &n);

    removeChar(str,n);

    printf("New string: %s", str);
}