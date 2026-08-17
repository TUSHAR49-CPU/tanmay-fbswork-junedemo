#include<stdio.h>
struct Student
{
	int rollno;
	char name[20];
	int marks;
};
void main()
{
	struct Student s1,s2;
	s1.rollno=49;
	strcpy(s1.name,"Viraj");
	s1.marks=90;
	printf("%d %s %d\n",s1.rollno,s1.name,s1.marks);
	
	printf("\nEnter rollno,name,marks");
	scanf("%d %s %d",&s2.rollno,s2.name,&s2.marks);
	
	printf("%d %s %d",s2.rollno,s2.name,s2.marks);
}