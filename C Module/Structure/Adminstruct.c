#include<stdio.h>
struct Admin
{
	int id;
	char name[20];
	double sal,allow;
};
void main()
{
	struct Admin ad1,ad2;
	printf("\nAdmin 1:");
	ad1.id=104;
	strcpy(ad1.name,"Sahil");
	ad1.sal=50000;
	ad1.allow=10000;
	printf("id=%d name=%s sal=%lf allow=%lf\n",ad1.id,ad1.name,ad1.sal,ad1.allow);
	
	printf("\nEnter id,Name,Salary,Allowance:");
	scanf("%d%s%lf%lf",&ad2.id,ad2.name,&ad2.sal,&ad2.allow);
	
	printf("\nAdmin 2:");
	printf("id=%d name=%s sal=%lf allow=%lf",ad2.id,ad2.name,ad2.sal,ad2.allow);
}
