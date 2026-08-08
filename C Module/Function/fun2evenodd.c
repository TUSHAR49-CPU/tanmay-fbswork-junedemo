#include<stdio.h>
int evenodd();
void main()
{
	int x=evenodd();
	if(x==1)
		printf("Even");
	else
		printf("Odd");

}
int evenodd()
{
	int no;
	printf("Enter a number");
	scanf("%d",&no);
	if(no%2==0)
		return 1;
	else
		return 0;
}