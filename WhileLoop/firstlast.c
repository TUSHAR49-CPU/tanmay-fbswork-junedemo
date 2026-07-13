void main()
{
	int no=56789,fd,ld,sum;
	int temp;
	temp=no;
	ld=no%10;
	while(temp>=10)
	{
		temp=temp/10;
	}
	
	fd=temp;
	sum=fd+ld;
	printf("%d",sum);
	
}