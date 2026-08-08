#include<stdio.h>
void isLeapyr();
void main()
{
	isLeapyr();
}
void isLeapyr()
{
	int yr;
	printf("Enter Year");
	scanf("%d",&yr);
	if(yr%4==0 && yr%100!=0)
		printf("Leap year");
	else
		printf("Not a Leap year");
}