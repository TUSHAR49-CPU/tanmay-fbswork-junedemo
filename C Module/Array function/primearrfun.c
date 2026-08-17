#include<stdio.h>
void isPrime(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		int num=arr[i];
		int flag=0;
		for(int j=2;j<num;j++)
		{
			if(num%j==0){
			flag=1;
			break;
			}
		}
		if(flag==0)
		{
			printf("%d  ",arr[i]);
		}
	}
}
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
	isPrime(arr,size);
}
