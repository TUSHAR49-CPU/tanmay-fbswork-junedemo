#include<stdio.h>
void main()
{
	int no;
	printf("Enter Number:");
	scanf("%d",&no);
	
	printf("Perfect Numbers from 1 to %d:\n",no);
	
	for(int i=2;i<no;i++)
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