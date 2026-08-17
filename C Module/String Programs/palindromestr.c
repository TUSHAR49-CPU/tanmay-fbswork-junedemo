#include <stdio.h>

int palindrome(char str[])
{
    int i=0,j=0;

    while(str[j]!='\0')
        j++;

    j--;

    while (i < j)
    {
        if(str[i]!=str[j])
            return 0;

        i++;
        j--;
    }
    return 1;
}

void main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    if (palindrome(str))
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");

}