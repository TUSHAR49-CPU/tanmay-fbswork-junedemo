#include<stdio.h>
void main()
{
	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	
	printf("Strong Numbers from 1 to %d:\n",no);
	
	for(int i=1;i<=no;i++)
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