#include<stdio.h>
struct Date
{
	int date,month,year;
};
void main()
{
	struct Date d1,d2;
	printf("\nDate 1:");
	d1.date=9;
	d1.month=12;
	d1.year=2004;
	
	printf("date:%d month:%d year:%d",d1.date,d1.month,d1.year);
	
	printf("\nEnter date,month and year");
	scanf("%d%d%d",&d2.date,&d2.month,&d2.year);
	printf("\nDate 2:");
	printf("date:%d month:%d year:%d",d2.date,d2.month,d2.year);
}