#include <stdio.h>

int countWords(char str[],int count)
{
    int i;

    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]!=' ' && (i==0 || str[i-1]==' '))
            count++;
    }
    return count;
}

void main()
{
    char str[100];
	int count=0;
    printf("Enter string: ");
    gets(str);
	count=countWords(str,count);
    printf("Number of words = %d",count);
}