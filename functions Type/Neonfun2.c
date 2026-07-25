#include<stdio.h>
int isNeon();
void main()
{
	if(isNeon()==1)
		printf("Neon Number");
	else
		printf("Not Neon Number");
}
int isNeon()
{
	int n,sq;
	printf("Enter a Number");
	scanf("%d",&n);
	sq=n*n;
	printf("%d",sq);
	int digit,sum=0;
	
	while(sq>0)
	{
		digit=sq%10;
		sum=sum+digit;
		sq=sq/10;
	}
	if(n==sum)
		return 1;
	else
		return 0;
}