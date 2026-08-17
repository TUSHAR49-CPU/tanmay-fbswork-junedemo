#include<stdio.h>
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
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
			printf("Element is Even=%d, index=%d\n",arr[i],i);
		else
			printf("Element is Odd=%d, index=%d\n",arr[i],i);
	}
}