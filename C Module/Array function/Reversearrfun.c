#include<stdio.h>
void ReverseARR(int brr[],int size)
{
	for(int i=0;i<=5/2;i++)
	{
		int temp=brr[i];
		brr[i]=brr[5-1-i];
		brr[5-1-i]=temp;
	}
	printf("Reverse Array = [");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("]");
}
void main()
{
	int size;
	printf("Enter size of Array");
	scanf("%d",&size);
	int brr[size];
	printf("Enter Elements in Array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&brr[i]);
	}
	ReverseARR(brr,size);
}