void main()
{
	double price=400,finalprice,disc=0;
	char isStud='y';
	
	if(isStud=='y')
	{
		if(price>=500)
			disc=price*0.20;
		else 
			disc=price*0.10;
	}
	else
	{
		 if(price>=600)
			disc=price*0.15;
					
	}
	finalprice=price-disc;
	
	if(disc==0)
		printf("Final price=%lf",finalprice);
	else
		printf("Final price on actual price %lf with discount %lf is lf",price,disc,finalprice);
}