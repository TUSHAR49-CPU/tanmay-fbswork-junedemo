#include<stdio.h>
void isArmstrong(int *x);
void main()
{
	int no;
	printf("Enter a Number");
	scanf("%d",&no);
	isArmstrong(&no);
}
void isArmstrong(int *x)
{
	int rem,sum=0,count=0;
	int temp=*x;
	for(*x;*x>0;*x=*x/10)
	{
		count++;
	}
	*x=temp;
	
	for(*x;*x>0;*x=*x/10)
	{
		rem=*x%10;
		int pow=1;
		
		for(int i=1;i<=count;i++)
		{
			pow=pow*rem;
		}
		sum=sum+pow;
		
	}	
	 if(temp==sum)
		printf(" is Armstrong number");
	else
		printf(" is not an Armstrong number");
}