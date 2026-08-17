#include <stdio.h>
char *mystrrchr(char*,char);
void main()
{
    char str[] = "Hello FirstBit";
    printf("Result = %s\n",mystrrchr(str,'i'));
}

char* mystrrchr(char* str, char ch)
{
    int i=0;
    char* last=NULL;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
            last=&str[i];
        i++;
    }
    return last;
}