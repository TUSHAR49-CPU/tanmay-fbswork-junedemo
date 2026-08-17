#include<stdio.h>
struct Time
{
	int hour,min,sec;
};
void main()
{
	struct Time t1,t2;
	printf("\nTime 1:");
	t1.hour=9;
	t1.min=12;
	t1.sec=50;
	
	printf("hour:%d min:%d sec:%d",t1.hour,t1.min,t1.sec);
	
	printf("\nEnter Hour,Minutes and Seconds");
	scanf("%d%d%d",&t2.hour,&t2.min,&t2.sec);
	printf("\nTime 2:");
	printf("hour:%d min:%d sec:%d",t2.hour,t2.min,t2.sec);
}