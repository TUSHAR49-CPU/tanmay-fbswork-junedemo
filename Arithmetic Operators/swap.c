#include<stdio.h>
void main()
{
	int a=21,b=12,c;
	c=a;
	a=b;
	b=c;
	printf("%d %d",a,c);
}