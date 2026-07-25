#include<stdio.h>
int NaturalNum();
void main()
{
	if(NaturalNum()==1)
		printf("Natural Number");
	else
		printf("Not a Natural Number");
}
int NaturalNum()
{
	int num;
	printf("Enter a Number");
	scanf("%d",&num);
	
	if(num>0)
		return 1;
	else
		return 0;
}