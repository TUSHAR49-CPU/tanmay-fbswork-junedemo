#include<stdio.h>
struct Time
{
	int hr,min,sec;
};
struct Time Format(struct Time );
void displayTime(struct Time);

void main()
{
	struct Time tm,ft;
	printf("Enter hour,min and Seconds:");
	scanf("%d%d%d",&tm.hr,&tm.min,&tm.sec);
	displayTime(tm);
	
	ft=Format(tm);
	displayTime(ft);
}
void displayTime(struct Time tm)
{
	printf("\nHours:%d Minutes:%d Seconds:%d",tm.hr,tm.min,tm.sec);
}
struct Time Format(struct Time tm)
{
	int tsec=tm.hr*60*60+tm.min*60+tm.sec;
	tm.hr=tsec/3600;
	tm.min=tsec%3600;
	tm.sec=tm.min%60;
	tm.min=tm.min/60;
	return tm;
}

