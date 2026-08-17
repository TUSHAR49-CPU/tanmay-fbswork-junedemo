#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	double sal;
	
};
void main()
{
	struct Employee e1,e2;
	printf("\nEmployee 1:");
	e1.id=104;
	strcpy(e1.name,"Sahil");
	e1.sal=50000;
	printf("id=%d name=%s sal=%lf\n",e1.id,e1.name,e1.sal);
	
	
	printf("\nEnter id,Name,Salary:");
	scanf("%d%s%lf",&e2.id,e2.name,&e2.sal);

	printf("\nEmployee 2:");
	printf("id=%d name=%s sal=%lf",e2.id,e2.name,e2.sal);
}
