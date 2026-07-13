void main()
{
	int no=8208,rem,sum=0,count=0;
	int temp=no;
	while(no>0)
	{
		count++;
		no=no/10;
		
	}
	no=temp;
	
	while(no>0)
	{
		rem=no%10;
		int x=1;
		int i=1;
		while(i<=count)
		{
			x=x*rem;
			i++;	
		}
		sum=sum+x;
		no=no/10;
	}
	if(temp==sum)
		printf(" is Armstrong number");
	else
		printf(" is not an Armstrong number");
}