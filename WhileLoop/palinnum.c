
void main()
{
	int num=164,rev=0,rem,res;
	res=num;
	while(res!=0)
	{
	
		rem  = res % 10;   
    	rev  = rev * 10 + rem;  
    	res=res/10;
	}
	if(num==rev)
	{
		printf("num is Palindrome");
	}
	else
	{
		printf("num is not palindrome");
	}
}