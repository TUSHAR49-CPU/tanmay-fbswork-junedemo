void main()
{
	int n=19,i=2,flag=0;
	
	while(i<=n/2)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}	
		i++;
	}
	if(flag==0)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}
	
	
	
}