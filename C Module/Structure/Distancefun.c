#include<stdio.h>
struct Distance
{
	int feet;
	double inches;
};
struct Distance FindDistance()
{
	struct Distance dis;
	printf("\nEnter Distance in feet and inches:");
	scanf("%d%lf",&dis.feet,&dis.inches);
	
	return dis;
}
void displayDistance(struct Distance dis)
{
	printf("%d: %.2lf",dis.feet,dis.inches);
}
void main()
{
	struct Distance d1,d2;
	printf("\nEnter feet and inches for Distance 1:");
	d1=FindDistance();
	printf("\nEnter feet and inches for Distance 2:");
	d2=FindDistance();
	printf("\nDistance 1:");
	displayDistance(d1);
	printf("\nDistance 2:");
	displayDistance(d2);
}
