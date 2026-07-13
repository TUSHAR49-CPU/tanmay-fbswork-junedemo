void main()
{
	int no=153,rem,sum=0;
	int temp=no;
	while(temp>0)
	{
		rem=temp%10;
		int fact=1,i=1;

		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=fact+sum;
		temp=temp/10;
	}
	if(sum==no)
		printf("Strong number");
	else
		printf("Not Strong Number");
}