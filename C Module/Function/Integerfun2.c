#include<stdio.h>
int isComposite();
void main()
{
	if(isComposite()==0)
		return 1;
	else
		return 0;
}

int isComposite()
{
	int no;
	printf("Enter a Number");
	scanf("%d",&no);
	for(int i=2;i<=no;i++)
	{
		if(no%i==0)
			printf("%d\n",i);
	}
	
	
}