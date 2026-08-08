void swap(int*,int*);
void main()

{
	int a=10,b=20;
	
	Swap(&a,&b);
	printf("a is=%d\n b is=%d",a,b);
}
void Swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
}