void main()
{
	int s1=10,s2=15,s3=5;
	
	if(s1==s2 && s2==s3 && s3==s1)
	{
		printf("Equilateral Triangle");
	}
	else if(s1==s2 || s2==s3 || s3==s1)
			printf("Isosceles triangle");
		else if(s1!=s2!=s3)
			printf("Scalene Triangle");
}