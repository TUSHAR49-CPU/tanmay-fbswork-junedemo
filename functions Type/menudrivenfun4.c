#include<stdio.h>
int checkPerfect(int);
int checkPrime(int);
int checkArmstrong(int);
int checkStrong(int);
void main()
{
	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	
	int cp=checkPerfect(no);
	if(cp==1)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
	
	int p=checkPrime(no);
	if(p==1)
		printf("Prime Number");
	else
		printf("Not Prime Number");
		
	int as=checkArmstrong(no);
	if(as==1)
		printf("Armstrong Number");
	else
		printf("Not Armstrong Number");
		
	int s=checkStrong(no);
	if(s==1)
		printf("Strong Number");
	else
		printf("Not Strong Number");
}
int checkPerfect(int num)
{
	int sum=1;
	for(int i=2;i<num;i++)
	{	
		if(num%i==0)
			sum=sum+i;
	}
	if(sum==num)
		return 1;
	else
		return 0;
}

int checkPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 1;
	}
	return 0;
}

int checkArmstrong(int a)
{
	int temp=a,count=0,sum=0,rem;
	
	for(a;a>0;a=a/10)
	{
		count++;
	}
	a=temp;
	
	for(a;a>0;a=a/10)
	{
		rem=a%10;
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

int checkStrong(int b)
{
	int temp=b;
	int sum=0,rem,fact;
	
	while(temp>0)
	{
		rem=temp%10;
		fact=1;
		
		for(int i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
	
	}
	if(sum==b)
		return 1;
	else
		return 0;
}
