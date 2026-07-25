#include<stdio.h>
void main()
{
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	
	printf("Armstrong Numbers from 1 to %d:\n",no);
	
	for(int i=1;i<=no;i++)
	{
		int temp=i;
		int no=i,count=0;
		int rem,sum=0;
		while(temp>0)
		{
			count++;
			temp=temp/10;
		}
		temp=no;
	
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
		if(sum==no)
			printf("%d\n",no);
	}
}