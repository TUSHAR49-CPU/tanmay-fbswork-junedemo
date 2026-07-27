#include<stdio.h>
void main()
{
	int m1=65,m2=75,m3=80,m4=90,m5=95,per,total;
	total=(m1+m2+m3+m4+m5);
	printf("%d",total);
	per=total%500*100;
	printf("%d",per);
}