#include <stdio.h>

void removeOddCharacters(char str[])
{
    int i,j=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(i%2==0)
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
}

void main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    removeOddCharacters(str);

    printf("New string: %s", str);
}