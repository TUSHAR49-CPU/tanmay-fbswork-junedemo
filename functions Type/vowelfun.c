#include<stdio.h>
void isVowcon();
void main()
{
	isVowcon();
}
void isVowcon()
{
	char ch;
	printf("Enter a Character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		printf("character is vowel");
	else
		printf("character is consonant");
}