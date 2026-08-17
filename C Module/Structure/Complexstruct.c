#include<stdio.h>
struct Complex
{
	double real,imaginary;
};
void main()
{
	struct Complex c1,c2;
	c1.real=5.9;
	c1.imaginary=34.78;
	
	printf("\nComplex 1:");
	printf("real:%.2lf imag:%.2lf",c1.real,c1.imaginary);
	
	printf("\nEnter real and imaginary:");
	scanf("%lf%lf",&c2.real,&c2.imaginary);
	printf("\nComplex 2:");
	printf("real:%.2lf imag:%.2lf",c2.real,c2.imaginary);
	
}