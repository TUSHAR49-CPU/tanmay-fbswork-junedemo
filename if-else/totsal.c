void main()
{
	int basal=40000,totsal,da,ta,hra;
	
	if(basal<=5000 && basal<=5000)
	{
		da=basal*10/100;
		ta=basal*20/100;
		hra=basal*25/100;
	}
	else
	{
		da=basal*15/100;
		ta=basal*25/100;
		hra=basal*30/100;
	}
	totsal=basal+da+ta+hra;
	printf("totalsal %d",totsal);
	
	
}