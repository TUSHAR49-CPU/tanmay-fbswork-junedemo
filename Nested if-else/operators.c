#include<stdio.h>
void main()
{
	int num1=20,num2=5;
	char op;
	op='/';
		if(op=='+')
			printf("Answer=%d",num1+num2);
		else if(op=='-')
				printf("Answer=%d",num1-num2);
			else if(op=='*')
					printf("Answer=%d",num1*num2);
					else if(op=='/')
							printf("Answer=%d",num1/num2);
								else if(op=='%')
										printf("Answer=%d",num1%num2);
									else
										printf("Operator is Invalid");
											
									

}