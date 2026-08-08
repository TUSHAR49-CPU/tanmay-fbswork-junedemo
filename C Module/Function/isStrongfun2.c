#include<stdio.h>
int isStrong();
void main()
{
	if(isStrong()==1)
		printf("Strong number");
	else
		printf("Not Strong Number");
}
int isStrong()
{

	int no,rem,sum=0,fact;
	printf("Enter Number:");
	scanf("%d",&no);
	
	int temp=no;
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
	if(sum==no)
		return 1;
	else
		return 0;
}