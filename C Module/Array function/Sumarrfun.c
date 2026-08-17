#include<stdio.h>
void Sum(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of Elements in Array:%d\n",sum);
}
void main()
{
	int size;
	printf("Enter size of Array:");
	scanf("%d",&size);
	int arr[size];
	printf("Elements in Array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	Sum(arr,size);
}
	