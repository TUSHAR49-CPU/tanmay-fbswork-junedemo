void main()
{
	int no=28,i=2,sum=1;
	
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
		if(sum==no)
		{
			printf("Number is Perfect");
		}
		else
		{
			printf("Not Perfect Number");
		}
}