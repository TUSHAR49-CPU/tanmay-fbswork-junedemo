#include <stdio.h>
#include <ctype.h>

int mystrncasecmp(char* s1,char* s2, int n)
{
    int i;

    for (i=0;i<n;i++)
    {
        char c1=tolower(s1[i]);
        char c2=tolower(s2[i]);

        if (c1!=c2)
            return c1-c2;

        if (c1=='\0')
            return 0;
    }
    return 0;
}

void main()
{
    char str1[] = "Hello";
    char str2[] = "HELLO";

    if (mystrncasecmp(str1, str2, 5) == 0)
        printf("Equal");
    else
        printf("Not Equal");
}