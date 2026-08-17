#include <stdio.h>
void mystrlower(char*);
void main()
{
    char str[]="HELLO FIRSTBIT";
    mystrlower(str);
    printf("Lowercase = %s\n", str);
}

void mystrlower(char *str)
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
}