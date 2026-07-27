#include<stdio.h>
void main()
{
	int no=7564;
	int r1,r2,r3,r4;
	int q1,q2,sum;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	r4=q2/10;
	sum=r1+r2+r3+r4;
	printf("%d",sum);
}