#include<stdio.h>
void main()
{
	int n;
	printf("Enter Number");
	scanf("%d",&n);

	for(int r=1;r<=n;r++)
	{	
		for(int c=1;c<=r;c++)
		{	
			printf("*");
		}
		printf("\n"); 
	}

	for(int r=n-1;r>=1;r--)
	{	
		for(int c=1;c<=r;c++)
		{	
			printf("*");
		}
		printf("\n"); 
	}
}
