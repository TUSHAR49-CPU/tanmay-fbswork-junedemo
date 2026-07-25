#include<stdio.h>
void main()
{
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	
	for(int r=1;r<=n;r++)
	{
		for(int s=1;s<=n-r;s++)
		{
			printf(" ");
		}
		for(int c=1;c<=r;c++)
		{
				printf("* ");
		}
		printf("\n");
	}
}