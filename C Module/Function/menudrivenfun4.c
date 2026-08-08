#include<stdio.h>
int checkPerfect(int);
int checkPrime(int);
int checkArmstrong(int);
int checkStrong(int);
int checkPalindrome(int);
void main()
{
	int no,choice;
    printf("\nMENU\n");
    printf("1. Check Perfect Number\n");
    printf("2. Check Prime Number\n");
    printf("3. Check Armstrong Number\n");
    printf("4. Check Strong Number\n");
    printf("5. Check Palindrome Number\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
	printf("Enter Number:");
	scanf("%d",&no);
	
	switch(choice)
	{
		case 1:
			if(checkPerfect(no)==1)
				printf("Perfect Number");
			else
				printf("Not Perfect Number");
			break;
		
		case 2:
			if(checkPrime(no)==1)
				printf("Prime Number");
			else
				printf("Not Prime Number");
			break;
		
		case 3:
			if(checkArmstrong(no)==1)
				printf("Armstrong Number");
			else
				printf("Not Armstrong Number");
			break;
		
		case 4:
			if(checkStrong(no)==1)
				printf("Strong Number");
			else
				printf("Not Strong Number");
			break;
			
		case 5:
		if(checkPalindrome(no)==1)
			printf("Number is Palindrome");
		else
			printf("Number is not Palindrome");
	}
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
int checkPalindrome(int c)
{
    int rev = 0, rem;
	int res=c;
    for (res; res != 0; res = res / 10)
    {
        rem = res % 10;
        rev = rev * 10 + rem;
    }
    if (c == rev)
        return 1;
    else
    	return 0;

}
