#include<stdio.h>
void ThirdSum(int arr[],int brr[],int crr[],int size)
{
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	printf("Sum Array = [");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", crr[i]);
    }
    printf("]");
}
void main()
{
	int arr[5]={111,112,113,114,115};
	int brr[5]={10,20,30,40,50};
	int crr[5];
	int size=5;
	ThirdSum(arr,brr,crr,size);
}