#include<stdio.h>
struct Date
{
	int day,month,year;
};
struct Date FormatDate( )
{
	struct Date d;
	printf("\nEnter Day,month and Year:");
	scanf("%d%d%d",&d.day,&d.month,&d.year);
	return d;
}
void displayDate(struct Date d)
{
	printf("\n%d :%d :%d",d.day,d.month,d.year);
}
void main()
{
	struct Date d1,d2,d3;
	printf("\nEnter day,month and year for Date1:");
	d1=FormatDate();
	printf("\nEnter day,month and year for Date2:");
	d2=FormatDate();
	printf("\nEnter day,month and year for Date1:");
	d3=FormatDate();
	printf("\nEnter Date1:");
	displayDate(d1);
	printf("\nEnter Date2:");
	displayDate(d2);
	printf("\nEnter Date3:");
	displayDate(d3);
}


