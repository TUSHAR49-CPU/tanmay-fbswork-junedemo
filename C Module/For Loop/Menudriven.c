#include<stdio.h>
void main()
{
	int no,rev=0,choice,temp,sum=0,digit,flag=0,rem,res;
	printf("Enter Number:");
	scanf("%d",&no);
	
	printf("\nMENU\n");
	printf("1.Check Even or Odd\n");
	printf("2.Check Prime or Not Prime\n");	
	printf("3.Check Palindrome or Not Palindrome\n");
	printf("4.Check positive,Negative or Zero\n");
	printf("5.Check Revese a number\n");
	printf("6.Check Sum of Digits\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			if(no%2==0)
				printf("Number is Even");
			else
				printf("Number is Odd");
			break;
			
		case 2:
			for(int i=2;i<no;i++)
			{
				if(no%i==0)
				{
					flag=1;
					break;
				}
			}
				if(flag==0)
					printf("Number is Prime");
				else
					printf("Number is not Prime");
				break;
		case 3:
			res=no;
			while(res!=0)
			{
				rem  = res % 10;   
   			 	rev  = rev * 10 + rem;  
   			 	res=res/10;
			}
			if(no==rev)
				printf("Number is Palindrome");
			else
				printf("Number is not palindrome");
				break;
		case 4:
			if(no>0)
				printf("Positive Number");
			else if(no<0)
				printf("Negative Number");
			else
				printf("Number is Zero");
			break;
		case 5:
			temp=no;
			rev=0;
			while(temp!=0)
			{
				digit = temp % 10;   
   			 	rev  = rev * 10 +digit;  
   			 	temp=temp/10;
			}
			printf("Reversed number is:%d",rev);
			break;
		case 6:
			temp=no;
			sum=0;
			while(temp!=0)
			{
				digit = temp % 10;   
   			 	sum =sum+digit;  
   			 	temp=temp/10;
			}
			printf("Sum of Digits:%d",sum);
			break;
	}
}