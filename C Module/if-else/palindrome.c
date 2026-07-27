
void main()
{
	int num=123,first,middle,last;
	first= num/100;   
    middle= (num/10)%10;  
    last=num%10;
      
	if(first==last)
	{
		printf("num is Palindrome");
	}
	else
	{
		printf("num is not palindrome");
	}
}