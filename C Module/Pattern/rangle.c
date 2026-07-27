#include<stdio.h>
void main()
{
	int n;
	printf("Enter Number");
	scanf("%d",&n);
	
	for(int c=n;c>=1;c--)
	{
		for(int r=1;r<=c;r++)
		{
			printf("*");
		}
		printf("\n");
	}
}