#include<stdio.h>
int isSpyNum();
void main()
{
	if(isSpyNum()==1)
		printf("Spy Number");
	else
		printf("Not Spy Number");
}

int isSpyNum()
{
	int no,digit,sum=0,prod=1;
	printf("Enter a Number");
	scanf("%d",&no);
	while(no>0)
	{
		digit=no%10;
		sum=sum+digit;
		prod=prod*digit;
		no=no/10;
	}
	if(sum==prod)
		return 1;
	else
		return 0;
}