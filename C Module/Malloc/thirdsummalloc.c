#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size=5;
	int *arr;
	int *brr;
	int *sumcrr;
	arr=(int*)malloc(size*sizeof(int));
    brr=(int*)malloc(size*sizeof(int));
    sumcrr=(int*)malloc(size*sizeof(int));
    
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

    for (int i=0;i<size;i++)
    {
        sumcrr[i]=arr[i]+brr[i];
    }

	printf("Sum Array=[");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",sumcrr[i]);
    }
    printf("]");
}