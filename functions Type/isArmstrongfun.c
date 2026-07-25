#include<stdio.h>
int isArmstrong();
void main()
{
	if(isArmstrong()==1)
		printf(" is Armstrong number");
	else
		printf(" is not an Armstrong number");
}
int isArmstrong()
{
	int no;
	printf("Enter a Number");
	scanf("%d",&no);
	int rem,sum=0,count=0;
	int temp=no;
	for(no;no>0;no=no/10)
	{
		count++;
	}
	no=temp;
	
	for(no;no>0;no=no/10)
	{
		rem=no%10;
		int x=1;
		
		for(int i=1;i<=count;i++)
		{
			x=x*rem;
		}
		sum=sum+x;
	}
	if(temp==sum)
		return 1;
	else
		return 0;
}