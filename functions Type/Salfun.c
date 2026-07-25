#include<stdio.h>
void Salaryis();
void main()
{
	Salaryis();	
}
void Salaryis()
{
	int basal,totsal,da,ta,hra;
	printf("Enter Basic Salary");
	scanf("%d",&basal);
	
	if(basal<=5000 && basal<=5000)
	{
		da=basal*10/100;
		ta=basal*20/100;
		hra=basal*25/100;
	}
	else
	{
		da=basal*15/100;
		ta=basal*25/100;
		hra=basal*30/100;
	}
	totsal=basal+da+ta+hra;
	printf("totalsal %d",totsal);
}