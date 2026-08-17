#include<stdio.h>
void main()
{
	int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

	int *arr;
	arr=(int*)malloc(size*sizeof(int));
	printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

	printf("Elements that are Prime in array are:");
	for(int i=0;i<size;i++)
	{
		int num=arr[i];
		int flag=0;
		for(int j=2;j<num;j++)
		{
			if(num%j==0)
			{
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