#include<stdio.h>
void main()
{
	int size=5;
	int *arr;
	int *brr;
	int *crr;
	arr=(int*)malloc(size*sizeof(int));
    brr=(int*)malloc(size*sizeof(int));
    crr=(int*)malloc(2*size*sizeof(int));
    
    printf("Enter elements of first array:\n");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&brr[i]);
    }

	for(int i=0;i<size;i++)
	{
		crr[i]=arr[i];
	}
	int k=size;
	for(int i=0;i<size;i++)
	{
		crr[k]=brr[i];
		k++;
	}
	printf("Merged Array:\n");
	
	for(int i=0;i<2*size;i++)
		printf("%d ",crr[i]);
}