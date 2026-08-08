#include<stdio.h>
void TotalMarks(int,int,int,int,int);
void Percentage(int,int,int,int,int);
void main()
{
	int s1,s2,s3,s4,s5;
	printf("Enter marks of 5 Subjects:\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	
	TotalMarks(s1,s2,s3,s4,s5);
	Percentage(s1,s2,s3,s4,s5);
}
void TotalMarks(int x1,int x2,int x3,int x4,int x5)
{
	int totmarks;
	totmarks=x1+x2+x3+x4+x5;
	printf("Total Marks is=%d\n",totmarks);
}
void Percentage(int m1,int m2,int m3,int m4,int m5)
{
	int per,totmarks;
	totmarks=m1+m2+m3+m4+m5;
	per=(totmarks*100)/500;
	printf("Percentage is=%d\n",per);
}