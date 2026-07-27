#include<stdio.h>
void main()
{
	int n,st=1,sum;
	printf("enter Number");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==st ||
				i==n || 
				j==st ||
				j==n ||
				i==j || 
				i+j==n+1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}	
}