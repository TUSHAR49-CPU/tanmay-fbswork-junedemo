#include<stdio.h>
void SortARR(int brr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(brr[i]>brr[j]){
				int temp=brr[i];
				brr[i]=brr[j];
				brr[j]=temp;
			}
		}
	}

	printf("Sort Array = [");
	for(int i = 0; i <size; i++)
	{
	    printf("%d ", brr[i]);
	}
	printf("]");
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(brr[i]<brr[j]){
				int temp=brr[i];
				brr[i]=brr[j];
				brr[j]=temp;
			}
		}
	}

	printf("Sort Array = [");
	for(int i = 0; i <size; i++)
	{
	    printf("%d ", brr[i]);
	}
	printf("]");
}

void main()
{
	int size;
	printf("Enter size of Array:");
	scanf("%d",&size);
	int brr[size];
	printf("Enter Elements in Array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&brr[i]);
	}
	SortARR(brr,size);
}