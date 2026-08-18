#include<stdio.h>
typedef struct BookManagement
{
	int bid;
	char bname[50];
	char authornm[50];
	double bprice;
}Book;
void main()
{
	Book b[100];
	int n;
	
	printf("Enter Number of books you want");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
    {
	    printf("Enter Book ID: ");
	    scanf("%d", &b[i].bid);
	
	    printf("Enter Book Name: ");
	    scanf("%s",b[i].bname);
	
	    printf("Enter Author Name: ");
	    scanf("%s",b[i].authornm);
	
	    printf("Enter Book Price: ");
	    scanf("%lf", &b[i].bprice);
	}
	for (int i=0;i<n;i++)
    {
    	printf("\nBook %d\n",i+1);
	    printf("Book ID       : %d\n",b[i].bid);
	    printf("Book Name     : %s\n",b[i].bname);
	    printf("Author Name   : %s\n",b[i].authornm);
	    printf("Book Price    : %.2lf\n",b[i].bprice);
	}
}