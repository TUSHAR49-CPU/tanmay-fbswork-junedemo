#include<stdio.h>
#include<stdlib.h>
typedef struct Time
{
	int hour,min,sec;
}Time;
void main()
{
	Time t[2],sum;
	
	for(int i=0;i<2;i++)
    {
    	printf("\nEnter Time %d\n", i + 1);
    	
	    printf("Enter Hours: ");
	    scanf("%d", &t[i].hour);
	
	    printf("Enter Minutes: ");
	    scanf("%d",&t[i].min);
	
	    printf("Enter Seconds: ");
	    scanf("%d",&t[i].sec);
	}
	
	sum.sec=t[0].sec+t[1].sec;
    sum.min=t[0].min+t[1].min;
    sum.hour=t[0].hour+t[1].hour;

    if(sum.sec>=60)
    {
        sum.min+=sum.sec/60;
        sum.sec=sum.sec%60;
    }

    if(sum.min>=60)
    {
        sum.hour+=sum.min/60;
        sum.min=sum.min%60;
    }
    
    printf(" Addition of Time\n");
	printf("Hours    : %d\n",sum.hour);
	printf("Minutes  : %d\n",sum.min);
	printf("Seconds  : %d\n",sum.sec);
}