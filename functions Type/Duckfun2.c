#include<stdio.h>
int isDuck();
void main()
{
	if(isDuck()==1)
		printf("Duck Number");
	else
		printf("Not a Duck Number");
}
int isDuck()
{
	int no,digit,flag=0;
	printf("Enter a Number");
	scanf("%d",&no);
	while(no>0)
	{
		digit=no%10;
		if(digit==0)
		{
			flag=1;
			break;
		}
		no=no/10;
	}
	if(flag==1)
		return 1;
	else
		return 0;
}