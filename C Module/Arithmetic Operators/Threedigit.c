#include<stdio.h>
void main()
{
	int no=753,r1,r2,r3;
	int q1,mul;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	mul=r1*r2*r3;
	printf("Multiplication is %d",mul);
	
}