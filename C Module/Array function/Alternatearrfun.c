#include<stdio.h>
void Alternate(int arr[],int size)
{
	printf("Alternate Elements in array are:");
	for(int i=0;i<size;i+=2)
	{
		printf("%d ",arr[i]);
	}
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
	Alternate(arr,size);
}
