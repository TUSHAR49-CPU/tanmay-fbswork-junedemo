#include<stdio.h>
struct Admin
{
	int id;
	char name[20];
	double sal,allow;
};
struct Admin StoreAdmin()
{
	struct Admin ad;
	printf("\nEnter id,Name,Salary:");
	scanf("%d%s%lf",&ad.id,ad.name,&ad.sal);
	
	ad.allow=ad.sal*20/100;
	ad.sal=ad.sal+ad.allow;
	
	return ad;
}
void display(struct Admin ad)
{
	printf("id:%d name:%s salary:%.2lf allow:%.2lf",ad.id,ad.name,ad.sal,ad.allow);
}
void main()
{
	struct Admin ad1,ad2,ad3;
	printf("\nEnter Details of Admin 1:");
	ad1=StoreAdmin();
	printf("\nEnter Details of Admin 2:");
	ad2=StoreAdmin();
	printf("\nEnter Details of Admin 3:");
	ad3=StoreAdmin();
	printf("\nAdmin 1 Details:");
	display(ad1);
	printf("\nAdmin 2 Details:");
	display(ad2);
	printf("\nAdmin 3 Details:");
	display(ad3);
	
}