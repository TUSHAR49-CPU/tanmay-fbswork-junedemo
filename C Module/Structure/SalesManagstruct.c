#include<stdio.h>
struct SalesManager
{
	int id,target;
	char name[20];
	double sal,incent;
};
void main()
{
	struct SalesManager sm1,sm2;
	printf("\nSales Manager 1:");
	sm1.id=104;
	sm1.target=220;
	strcpy(sm1.name,"Sahil");
	sm1.sal=50000;
	sm1.incent=10000;
	printf("id=%d target=%d name=%s sal=%lf incent=%lf\n",sm1.id,sm1.target,sm1.name,sm1.sal,sm1.incent);
	
	printf("\nSales Manager 2:");
	printf("\nEnter id,target,Name,Salary,Incentive:");
	scanf("%d%d%s%lf%lf",&sm2.id,&sm2.target,sm2.name,&sm2.sal,&sm2.incent);
	
	printf("id=%d target=%d name=%s sal=%lf incent=%lf",sm2.id,sm2.target,sm2.name,sm2.sal,sm2.incent);
}
