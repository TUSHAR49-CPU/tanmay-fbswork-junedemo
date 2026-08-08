#include<stdio.h>
void VolCyl(float *,float*);
void main()
{
	float r,h;
	printf("Enter a Radius and Height");
	scanf("%f\n%f",&r,&h);
	VolCyl(&r,&h);
}
void VolCyl(float *d,float *l)
{
	float vol;
	vol=3.14*(*d)*(*d)*(*l);
	printf("Volume is=%f",vol);
}