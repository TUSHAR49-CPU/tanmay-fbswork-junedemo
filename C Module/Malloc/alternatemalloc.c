#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size;
	printf("Enter size of Array:");
	scanf("%d",&size);
	int *arr;
	arr=(int*)malloc(size*sizeof(int));
	printf("Elements in Array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternate Elements in array are:");
	for(int i=0;i<size;i+=2)
	{
		printf("%d ",arr[i]);
	}
}