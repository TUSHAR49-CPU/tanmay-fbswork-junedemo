#include<stdio.h>
void main()
{
	int arr[]={15,2,13,4,56,17};
	printf("Elements that are Prime in array are:");
	int size=6;
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
			printf("%d ",arr[i]);
		}
	}
}