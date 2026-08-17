#include<stdio.h>
struct HR
{
	int id;
	char name[20];
	double sal,com;
};
void main()
{
	struct HR hr1,hr2;
	printf("\nHR 1:");
	hr1.id=104;
	strcpy(hr1.name,"Sahil");
	hr1.sal=50000;
	hr1.com=10000;
	printf("id=%d name=%s sal=%lf com=%lf\n",hr1.id,hr1.name,hr1.sal,hr1.com);
	
	printf("\nHR 2:");
	printf("\nEnter id,Name,Salary,Commission:");
	scanf("%d%s%lf%lf",&hr2.id,hr2.name,&hr2.sal,&hr2.com);
	
	printf("id=%d name=%s sal=%lf com=%lf",hr2.id,hr2.name,hr2.sal,hr2.com);
}
