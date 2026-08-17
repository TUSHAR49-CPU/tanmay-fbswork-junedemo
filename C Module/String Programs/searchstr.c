#include <stdio.h>

void searchChar(char str[], char ch)
{
    int i,found=0;

    for (i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("Character found at index %d\n", i);
            found=1;
        }
    }
    if (found==0)
        printf("Character not found");
}

void main()
{
    char str[100], ch;

    printf("Enter string: ");
    gets(str);

    printf("Enter character: ");
    scanf("%c", &ch);

    searchChar(str, ch);
}