#include<stdio.h>
void VolSphere(float);
void SurfaceArea(float);

void main()
{
	float r;
	printf("Enter a Radius");
	scanf("%f",&r);
	VolSphere(r);
	SurfaceArea(r);
}
void VolSphere(float d)
{
	float vol;
	vol=(4.0/3.0)*3.14*d*d*d;
	printf("Volume of Sphere is=%f\n",vol);
}
void SurfaceArea(float a)
{
	float Sarea;
	Sarea=4*3.14*a*a;
	printf("Surface Area of Sphere is=%f\n",Sarea);
}
