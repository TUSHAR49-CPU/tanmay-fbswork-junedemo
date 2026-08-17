#include<stdio.h>
void main()
{
	int arr[]={1,2,3,4,5,6,345,356,312,56};
	int brr[]={1,23,44,5,67};
	int crr[15];
	
	int size1=10,
	size2=5;
	int k=0;
	for(int i=0;i<size1;i++)
	{
		crr[k]=arr[i];
		k++;
	}
	for(int i=0;i<size2;i++)
	{
		crr[k]=brr[i];
		k++;
	}
	
	printf("Merged Array:\n");
	for(int i=0;i<15;i++)
		printf("%d ",crr[i]);
}