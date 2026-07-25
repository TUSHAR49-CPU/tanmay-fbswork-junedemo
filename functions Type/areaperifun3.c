#include<stdio.h>
void Arearect(int,int);
void Perirect(int,int);
void main()
{
	int len,wid;
	printf("Enter Length");
	scanf("%d",&len);
	printf("Enter Width");
	scanf("%d",&wid);
	
	Arearect(len,wid);
	Perirect(len,wid);
}
void Arearect(int x,int y)
{
	int area;
	area=x*y;
	printf("Area is %d\n",area);
	
}
void Perirect(int a,int b)
{
	int peri;
	peri=2*(a+b);
	printf("Perimeter is %d\n",peri);
}