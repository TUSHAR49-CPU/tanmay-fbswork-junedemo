#include<stdio.h>
void isPalindrome();
void main()
{
	isPalindrome();
}
void isPalindrome()
{
	int num,rev=0,rem,res;
	printf("Enter a number");
	scanf("%d",&num);
	res=num;
	while(res!=0)
	{
		rem  = res % 10;   
    	rev  = rev * 10 + rem;  
    	res=res/10;
	}
	if(num==rev)
		printf("num is Palindrome");
	else
		printf("num is not palindrome");

}