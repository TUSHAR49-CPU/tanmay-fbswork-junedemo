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
			printf("%d",c);
		}
		printf("\n");
	}
}