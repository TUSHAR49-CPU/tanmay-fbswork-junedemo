#include<stdio.h>
void RangeofPerfect(int);
void RangeofPrime(int);
void RangeofArmstrong(int);
void RangeofStrong(int);
void main()
{
	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	printf("Perfect Numbers from 1 to %d:\n",no);
	RangeofPerfect(no);
	printf("Prime Numbers from 1 to %d:\n",no);
	RangeofPrime(no);
	printf("Armstrong Numbers from 1 to %d:\n",no);
	RangeofArmstrong(no);
	printf("Strong Numbers from 1 to %d:\n",no);
	RangeofStrong(no);
}
void RangeofPerfect(int num)
{
	for(int i=2;i<num;i++)
	{	
		int sum=0;
		
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
				sum=sum+j;
		}
	
		if(sum==i)
			printf("%d\n",i);
	}
}
void RangeofPrime(int n)
{
	for(int i=2;i<=n;i++)
	{
		int flag=1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)	
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("%d\n",i);
	}
}
void RangeofArmstrong(int a)
{
	for(int i=1;i<=a;i++)
	{
		int temp=i;
		int a=i,count=0;
		int rem,sum=0;
		while(temp>0)
		{
			count++;
			temp=temp/10;
		}
		temp=a;
	
		while(temp>0)
		{
			rem=temp%10;
			int x=1;
		
			for(int j=1;j<=count;j++)
			{
				x=x*rem;
	
			}
			sum=sum+x;
			temp=temp/10;
		}
		if(sum==a)
			printf("%d\n",a);
	
	}
}
void RangeofStrong(int b)
{
	for(int i=1;i<=b;i++)
	{
		int temp=i;
		int sum=0;
	
		while(temp>0)
		{
			int rem=temp%10;
			int fact=1;
		
			for(int j=1;j<=rem;j++)
			{

				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
			printf("%d\n",i);
	}
}