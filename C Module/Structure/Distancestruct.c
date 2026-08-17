#include<stdio.h>
struct Distance
{
	int feet;
	double inch;
};
void main()
{
	struct Distance d1,d2;
	d1.feet=9;
	d1.inch=12.5;
	
	printf("\nDistance 1:");
	printf("feet:%d inch:%.2lf",d1.feet,d1.inch);
	
	printf("\nEnter feet and inches:");
	scanf("%d %lf",&d2.feet,&d2.inch);
	printf("\nDistance 2:");
	printf("feet:%d inch:%.2lf",d2.feet,d2.inch);
}