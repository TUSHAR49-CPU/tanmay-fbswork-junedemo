#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={10,20,30,40,50};
	int sumcrr[5];
	for(int i=0;i<5;i++)
	{
		sumcrr[i]=arr[i]+brr[i];
	}
	printf("Sum Array = [");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", sumcrr[i]);
    }
    printf("]");
}