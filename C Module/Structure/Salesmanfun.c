#include<stdio.h>
struct SalesManager
{
	int id,target;
	char name[20];
	double sal,incent;
};
struct SalesManager DetailsSalesManager()
{
	struct SalesManager salman;
	printf("\nEnter id,target,name,sal of sales manager:");
	scanf("%d%d%s%lf",&salman.id,&salman.target,salman.name,&salman.sal);
	
	salman.incent=salman.sal*20/100;
	salman.sal=salman.sal+salman.incent;
	return salman;
}
void displaySalesManager(struct SalesManager salman)
{
		printf("id=%d target=%d name=%s sal=%.2lf incent=%.2lf",
		salman.id,salman.target,salman.name,salman.sal,salman.incent);
}
void main()
{
	struct SalesManager sm1,sm2,sm3;
	printf("\nEnter Details of Sales Manager 1:");
	sm1=DetailsSalesManager();
	printf("\nEnter Details of Sales Manager 2:");
	sm2=DetailsSalesManager();
	printf("\nEnter Details of Sales Manager 3:");
	sm3=DetailsSalesManager();
	printf("\nSales Manager 1:");
	displaySalesManager(sm1);
	printf("\nSales Manager 2:");
	displaySalesManager(sm2);
	printf("\nSales Manager 3:");
	displaySalesManager(sm3);

}

	

