#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter Elements in Array:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
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