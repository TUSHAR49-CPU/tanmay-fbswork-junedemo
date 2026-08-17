#include<stdio.h>
struct product
{
	int id;
	char name[20];
	double price,quantity;
};
void main()
{
	struct product p1,p2;
	printf("\nProduct 1:");
	p1.id=104;
	strcpy(p1.name,"Laptop");
	p1.price=75000;
	p1.quantity=1;
	printf("Id:%d Name:%s price:%.2lf quantity:%.2lf",p1.id,p1.name,p1.price,p1.quantity);
	
	printf("\nProduct 2:");
	printf("\nEnter id,name,price and quantity:");
	scanf("%d%s%lf%lf",&p2.id,p2.name,&p2.price,&p2.quantity);
	
	printf("Id:%d Name:%s price:%.2lf quantity:%.2lf",p2.id,p2.name,p2.price,p2.quantity);
}