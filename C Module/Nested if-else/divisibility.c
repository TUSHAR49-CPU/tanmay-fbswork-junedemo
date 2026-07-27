void main()
{
	int num=45;
	
	if(num%3==0 && num%5==0)
	{
		printf("divisible by both");
	}
	else if(num%3==0)
			printf("Divisible by 3 but not 5");
		else if(num%5==0)
			printf("Divisible by 5 but not 3");
			else
				printf("Divisible by None");
			
}