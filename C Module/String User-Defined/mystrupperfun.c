#include <stdio.h>
void mystrupper(char*);
void main()
{
    char str[]="Hello firstBit";
    mystrupper(str);
    printf("Uppercase = %s\n", str);
}

void mystrupper(char *str)
{
    int i=0;
    while (str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }
}