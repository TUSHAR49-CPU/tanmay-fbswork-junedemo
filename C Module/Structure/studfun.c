#include<stdio.h>
struct Student
{
	int rollno;
	char name[20];
	int marks;
};
struct Student TotalMarks()
{
	struct Student stud;
	int sub1,sub2,sub3;
	printf("\nEnter Roll No and Name:");
	scanf("%d%s",&stud.rollno,stud.name);
	printf("\nEnter marks of subjects");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	stud.marks=sub1+sub2+sub3;
	return stud;
}
void displayMarks(struct Student stud)
{
	printf("%d: %s: %d",stud.rollno,stud.name,stud.marks);
}
void main()
{
	struct Student s1,s2,s3;
	printf("\nEnter Details of Student 1:");
	s1=TotalMarks();
	printf("\nEnter Details of Student 2:");
	s2=TotalMarks();
	printf("\nEnter Details of Student 3:");
	s3=TotalMarks();
	printf("\nStudent 1 Details:");
	displayMarks(s1);
	printf("\nStudent 2 Details:");
	displayMarks(s2);
	printf("\nStudent 3 Details:");
	displayMarks(s3);
}

