#include<stdio.h>
void isUpplow();
void main()
{
	isUpplow();
}
void isUpplow()
{
	char ch;
	printf("Enter a character",'ch');
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("The character is Upper case");
	else
		printf("The character is Lower case");
}