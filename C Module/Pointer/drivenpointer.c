#include<stdio.h>
char checkVowCon(char*);
int isDuck(int*);
int isNeon(int*);
int isSpy(int*);
char caseUpplow(char*);
void main()
{
	int no,choice;
    printf("\nMENU\n");
    printf("1. Check vowel or consonant\n");
    printf("2. Check Duck Number\n");
    printf("3. Check Neon Number\n");
    printf("4. Check Spy Number\n");
    printf("5. Check Uppercase or Lowercase\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
	printf("Enter Number:");
	scanf("%d",&no);
	char ch;
	printf("Enter Character:");
	scanf("%c",&ch);
	
	switch(choice)
	{
		case 1:
			if(checkVowCon(&ch)==1)
				printf("character is vowel");
			else
				printf("character is consonant");
			break;
		
		case 2:
			if(isDuck(&no)==1)
				printf("Duck Number");
			else
				printf("Not a Duck Number");
			break;
			
		case 3:
			if(isNeon(&no)==1)
				printf("Neon Number");
			else
				printf("Not Neon Number");
			break;
			
		case 4:
			if(isSpy(&no)==1)
				printf("Spy Number");
			else
				printf("Not Spy Number");
			break;
				
		case 5:
			if(caseUpplow(&ch)==1)
				printf("The character is Upper case");
			else
				printf("The character is Lower case");
			break;
	}
}
char checkVowCon(char *c)
{
	if(*c=='a'||*c=='e'||*c=='i'||*c=='o'||*c=='u')
		return 1;
	else
		return 0;
}
int isDuck(int *num)
{
	int digit=1,flag=0;
	while(*num>0)
	{
		digit=*num%10;
		if(digit==0)
		{
			flag=1;
			break;
		}
		*num=*num/10;
	}
	if(flag==1)
		return 1;
	else
		return 0;
}
int isNeon(int *n)
{
	int sq=(*n)*(*n);
	printf("%d",sq);
	int digit,sum=0;
	
	while(sq>0)
	{
		digit=sq%10;
		sum=sum+digit;
		sq=sq/10;
	}
	if(*n==sum)
		return 1;
	else
		return 0;
}
int isSpy(int *a)
{
	int digit,sum=0,prod=1;
	while(*a>0)
	{
		digit=*a%10;
		sum=sum+digit;
		prod=prod*digit;
		*a=*a/10;
	}
	if(sum==prod)
		return 1;
	else
		return 0;
}
char caseUpplow(char *chr)
{
	if(*chr>='A' && *chr<='Z')
		return 1;
	else
		return 0;
}