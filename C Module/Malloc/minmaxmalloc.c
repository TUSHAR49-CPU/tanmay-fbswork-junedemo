#include<stdio.h>
void minmax(int *arr,int size)
{
	int max,min;
	
	min = arr[0];
    max = arr[0];
    
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
			
		if(arr[i]<min)
			min=arr[i];
	}
	printf("Max Element is=%d\n",max);
	printf("Min Element is=%d",min);
}
void main()
{
	int size;
	printf("Enter size of Array");
	scanf("%d",&size);
	
	int *arr;
	
	arr=(int *)malloc(size*sizeof(int));
	
	printf("Enter Elements in Array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	minmax(arr,size);
}