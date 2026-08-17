#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	double salary;
};
void main()
{
	struct Employee earr[5],ebrr[6],carr[7];
	printf("Enter details of employee 1");
	for(int i=0;i<3;i++)
	{
		scanf("%d%s%lf",&earr[i].id,earr[i].name,&earr[i].salary);
	}
	
	printf("Enter details of employees 2");
	for(int i=0;i<4;i++)
	{
		scanf("%d%s%lf",&ebrr[i].id,ebrr[i].name,&ebrr[i].salary);
	}
	printf	("Enter details of employees 3");
	for(int i=0;i<2;i++)
	{
		scanf("%d%s%lf",&carr[i].id,carr[i].name,&carr[i].salary);
	}
	printf("\nEmployees 1 are:");
	for(int i=0;i<3;i++)
	{
		printf("Id:%d name:%s salary:%lf\n",earr[i].id,earr[i].name,earr[i].salary);
	}
	printf("\nEmployees 2 are:");
	for(int i=0;i<4;i++)
	{
		printf("Id:%d name:%s salary:%lf\n",ebrr[i].id,ebrr[i].name,ebrr[i].salary);	
	}
	printf("\nEmployees 3 are:");
	for(int i=0;i<2;i++)
	{
		printf("Id:%d name:%s salary:%lf\n",carr[i].id,carr[i].name,carr[i].salary);
	}
	
}