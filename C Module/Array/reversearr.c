#include<stdio.h>
void main()
{
	int brr[5]={10,20,30,40,50};
	for(int i=0;i<=5/2;i++)
	{
		int temp=brr[i];
		brr[i]=brr[5-1-i];
		brr[5-1-i]=temp;
	}
	printf("Reverse Array = [");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", brr[i]);
    }
    printf("]");

}