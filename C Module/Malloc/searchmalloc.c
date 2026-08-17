#include<stdio.h>
#include<stdlib.h>
void searchNum(int* arr,int size)
{
	int search,found=0;
	printf("Enter element to be searched:");
	scanf("%d",&search);
	for(int i=0;i<5;i++)
	{
		if(arr[i]==search)
		{
			printf("Element Found at index =%d",i);
			found=1;
			break;
		}
	}
	if(found==0)
		printf("Element not Found");
}
void main()
{
	int *arr;
	arr=(int *)malloc(5*sizeof(int));
	printf("Enter Elements in Array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	searchNum(arr,5);
}