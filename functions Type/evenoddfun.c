#include<stdio.h>
void evenodd();
void main()
{
	evenodd();
}
void evenodd()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	if(no%2==0)
		printf("Number is Even");
	else
		printf("Number is Odd");
}