#include <stdio.h>
char* mystrchr(char*,char );

void main()
{
    char str[] = "Hello FirstBit";
    printf("Result = %s\n", mystrchr(str, 'F'));
}

char* mystrchr(char* str, char ch)
{
    int i=0;

    while(str[i]!='\0')
    {
        if (str[i]==ch)
            return &str[i];
        i++;
    }
}