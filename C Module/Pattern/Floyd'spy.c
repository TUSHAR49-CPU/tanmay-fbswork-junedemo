#include<stdio.h>
void main()
{
	int n,num=1;
	printf("Enter Number");
	scanf("%d",&n);

	for(int r=1;r<=n;r++)
	{	
		for(int c=1;c<=r;c++)
		{	
			printf("%d",num);
			num++;
		}
		printf("\n"); 
	}
}