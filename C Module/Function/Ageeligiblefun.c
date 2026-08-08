#include<stdio.h>
void Ageeligible();
void main()
{
	Ageeligible();
}
void Ageeligible()
{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age>=18)
		printf("Eligible for voting");
	else
		printf("Not eligible for voting");
}