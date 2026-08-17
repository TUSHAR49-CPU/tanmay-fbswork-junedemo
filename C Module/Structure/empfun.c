#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	double salary;
};
struct Employee StoreEmployee()
{
	struct Employee emp;
	printf("\nEnter id,Name,Salary:");
	scanf("%d%s%lf",&emp.id,emp.name,&emp.salary);
	
	return emp;
}
void display(struct Employee emp)
{
	printf("id:%d name:%s salary:%.2lf",emp.id,emp.name,emp.salary);
}
void main()
{
	struct Employee e1,e2,e3;
	printf("\nEnter id,Name and Salary for employee 1:");
	e1=StoreEmployee();
	printf("\nEnter id,Name and Salary for employee 2:");
	e2=StoreEmployee();
	printf("\nEnter id,Name and Salary for employee 3:");
	e3=StoreEmployee();
	printf("\nEmployee 1:");
	display(e1);
	printf("\nEmployee 2:");
	display(e2);
	printf("\nEmployee 3:");
	display(e3);
	
}

