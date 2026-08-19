#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct BookManagement
{
	int bid;
	char bname[50];
	char authornm[50];
	char category[50];
	double bprice;
	double bratings;
}Book;

void StoreBooksHardcoded(Book* bks,int* ci)
{
	bks[0].bid = 101;
    strcpy(bks[0].bname, "Spider-Man");
    strcpy(bks[0].authornm, "Stan Lee");
    strcpy(bks[0].category, "Comics");
    bks[0].bprice = 350.00;
    bks[0].bratings = 4.8;

    bks[1].bid = 102;
    strcpy(bks[1].bname, "Batman: Year One");
    strcpy(bks[1].authornm, "Frank Miller");
    strcpy(bks[1].category, "Comics");
    bks[1].bprice = 450.00;
    bks[1].bratings = 4.9;

    bks[2].bid = 103;
    strcpy(bks[2].bname, "The Avengers");
    strcpy(bks[2].authornm, "Stan Lee");
    strcpy(bks[2].category, "Comics");
    bks[2].bprice = 400.00;
    bks[2].bratings = 4.7;

    
	bks[3].bid = 104;
	strcpy(bks[3].bname, "The Alchemist");
	strcpy(bks[3].authornm, "Paulo Coelho");
	strcpy(bks[3].category, "Fiction");
	bks[3].bprice = 399.00;
	bks[3].bratings = 4.7;
		
	bks[4].bid = 105;
	strcpy(bks[4].bname, "Harry Potter");
	strcpy(bks[4].authornm, "J.K. Rowling");
	strcpy(bks[4].category, "Fiction");
	bks[4].bprice = 499.00;
	bks[4].bratings = 4.8;
		
	bks[5].bid = 106;
	strcpy(bks[5].bname, "The Hobbit");
	strcpy(bks[5].authornm, "J.R.R. Tolkien");
	strcpy(bks[5].category, "Fiction");
	bks[5].bprice = 450.00;
	bks[5].bratings = 4.9;
	
	bks[6].bid = 107;
	strcpy(bks[6].bname, "The Shining");
	strcpy(bks[6].authornm, "Stephen King");
	strcpy(bks[6].category, "Horror");
	bks[6].bprice = 450.00;
	bks[6].bratings = 4.8;
	
	bks[7].bid = 108;
	strcpy(bks[7].bname, "It");
	strcpy(bks[7].authornm, "Stephen King");
	strcpy(bks[7].category, "Horror");
	bks[7].bprice = 500.00;
	bks[7].bratings = 4.7;
	
	bks[8].bid = 109;
	strcpy(bks[8].bname, "Dracula");
	strcpy(bks[8].authornm, "Bram Stoker");
	strcpy(bks[8].category, "Horror");
	bks[8].bprice = 350.00;
	bks[8].bratings = 4.6;
	    
	*ci=9;
}
void displayAllBooks(Book* bks,int *ci,int limit)
{
	if(limit>*ci)
    {
        limit=*ci;
    }

	printf("\n====================================================================================================\n");

    printf("| %-5s | %-25s | %-20s | %-12s | %-10s | %-7s |\n",
           "ID",
           "Book Name",
           "Author",
           "Category",
           "Price",
           "Rating");

    printf("====================================================================================================\n");

	for(int i=0;i<limit;i++)
	{
		printf("| %-5d | %-25s | %-20s | %-12s | %10.2lf | %7.1lf |\n",
				bks[i].bid,
            	bks[i].bname,
            	bks[i].authornm,
            	bks[i].category,
            	bks[i].bprice,
            	bks[i].bratings);
	}
	printf("====================================================================================================\n");

}

Book* AddBooks(Book* bks,int *ci,int *size)
{
	int n;

    printf("\nHow many books do you want to add? ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
		Book *temp;
		if(*ci==*size)
		{
			printf("\n--- Book Storage is Full ---\n");
			printf("--- Allocating New Storage of Books... ---\n");
			int newsize=*size+4;
			temp=realloc(bks,sizeof(Book)*newsize);
	        bks = temp;
	        *size = newsize;
	        
	        printf("--- New Storage for Adding Books Allocated Successfully ---\n");
		}
		
		printf("\n========== Enter Book %d Details ==========\n", i + 1);

		printf("Enter id of book:");
		scanf("%d",&bks[*ci].bid);
	
		printf("Enter name of book:");
		scanf(" %[^\n]", bks[*ci].bname);
		printf("Enter Author of book:");
		scanf(" %[^\n]", bks[*ci].authornm);
		printf("Enter category of book:");
		scanf(" %[^\n]", bks[*ci].category);
		
		printf("Enter price of book:");
		scanf("%lf",&bks[*ci].bprice);
		printf("Enter rating of book:");
		scanf("%lf",&bks[*ci].bratings);
		
		(*ci)++;
		printf("\n\t---Book Added!---\n");
	}
	return bks;
}

void RemoveBook(Book* bks, int *ci,int id)
{
	int found=-1;
    for(int i = 0; i<*ci; i++)
    {
        if(bks[i].bid==id)
        {
        	printf("\t\n---Book Found at Index: %d---",i);
            found=i;
            break;
        }
    }
    if(found==-1)
    {
        printf("\t\n---Book Not Found.---\n");
        return;
    }
    for(int i=found;i<(*ci)-1;i++)
    {
        bks[i]=bks[i+1];
    }
    (*ci)--;
    printf("\n---Book Removed Successfully.---\n");
}
void displayBook(Book b)
{
    printf("\n--------------------------------");
    printf("\nBook ID       : %d", b.bid);
    printf("\nBook Name     : %s", b.bname);
    printf("\nAuthor Name   : %s", b.authornm);
    printf("\nCategory      : %s", b.category);
    printf("\nPrice         : %.2lf", b.bprice);
    printf("\nRating        : %.1lf", b.bratings);
    printf("\n--------------------------------\n");
}

void SearchById(Book* bks,int *ci,int id)
{
	int found=0;
	for(int i=0;i<*ci;i++)
	{
		if(id==bks[i].bid)
		{
			printf("\n\t---Book Found at index :%d.----\n",i);
			displayBook(bks[i]);
			found=1;
			break;
		}
	}
	if(!found)
        printf("\n\t---Book not Found.---\n");
}

void SearchByName(Book* bks,int *ci,char name[])
{
	int found=0;

	for(int i=0;i<*ci;i++)
	{
		if(strcasecmp(bks[i].bname,name)==0)
		{
			printf("\n\t---Book Found at index :%d.----\n",i);
			displayBook(bks[i]);
			found=1;
			break;
		}
	}
	if(!found)
        printf("\n\t---Book not Found.---\n");
}

void ByAuthor(Book* bks,int *ci,char name[])
{
	int found=0;
	for(int i=0;i<*ci;i++)
	{
		if(strcasecmp(name,bks[i].authornm)==0)
		{
			printf("\n\t---Book Found at index :%d.----\n",i);
			displayBook(bks[i]);
			found=1;
		}
	}
	if(!found)
		printf("\n\t---Book by Author name not found---");		
}

void Categoryis(Book* bks,int *ci)
{
	char category[50];
	int found=0;
	printf("Enter Category of books:");
	scanf(" %[^\n]", category);
	for(int i=0;i<*ci;i++)
	{
		if(strcasecmp(bks[i].category,category)==0)
		{
			displayBook(bks[i]);
			found=1;
		}
	}
	if(!found)
		printf("No books found in category:%s\n",category);
}

void Update(Book* bks,int *ci,int id)
{
	int index=-1,ch;
	for(int i=0;i<*ci;i++)
	{
		if(id==bks[i].bid)
		{
			index=i;
			break;
		}
	}
	if(index==-1)
	{
		printf("\n\t---Book Not Found----\n");
		return;
	}
	printf("\n--- Book Found ---\n");
    displayBook(bks[index]);

    printf("\n1. Update Price");
    printf("\n2. Update Rating");
    printf("\n3. Update Category");
    printf("\n4. Update Author");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    
     switch (ch)
    {
        case 1:
            printf("Enter new price: ");
            scanf("%lf", &bks[index].bprice);
            printf("\n--- Price Updated Successfully ---\n");
            break;

        case 2:
        	fflush(stdin);
            printf("Enter new rating: ");
            scanf("%lf", &bks[index].bratings);
            printf("\n--- Rating Updated Successfully ---\n");
            break;

        case 3:
        	fflush(stdin);
            printf("Enter new category: ");
            scanf(" %[^\n]", bks[index].category);
            printf("\n--- Category Updated Successfully ---\n");
            break;

        case 4:
        	fflush(stdin);
            printf("Enter new author: ");
            scanf(" %[^\n]", bks[index].authornm);
            printf("\n--- Author Updated Successfully ---\n");
            break;
		
		default:
            printf("\n--- Invalid Choice ---\n");
    }
}

void sortPriceLowToHigh(Book* bks,int *ci)
{
	Book temp;
	for(int i=0;i<(*ci)-1;i++)
	{
		for(int j=0;j<(*ci)-i-1;j++)
		{
			if(bks[j].bprice>bks[j+1].bprice)
			{
				temp=bks[j];
				bks[j]=bks[j+1];
				bks[j+1]=temp;
			}	
		}
	}
	printf("\n---Top 3 Books Sorted by Price (Low to High)---\n");
	
	int limit=(*ci < 3) ? *ci : 3;
	displayAllBooks(bks,ci,limit);
}

void sortPriceHighToLow(Book* bks,int *ci)
{
	Book temp;
	for(int i=0;i<(*ci)-1;i++)
	{
		for(int j=0;j<(*ci)-i-1;j++)
		{
			if(bks[j].bprice<bks[j+1].bprice)
			{
				temp=bks[j];
				bks[j]=bks[j+1];
				bks[j+1]=temp;
			}	
		}
	}
	printf("\n---Top 3 Books Sorted by Price (High to Low)---\n");
	
	int limit=(*ci < 3) ? *ci : 3;
	displayAllBooks(bks,ci,limit);
}
void sortRatingLowToHigh(Book *bks, int *ci)
{
    Book temp;

    for(int i=0;i<(*ci)-1;i++)
    {
        for(int j=0;j<(*ci)-i-1;j++)
        {
            if(bks[j].bratings > bks[j + 1].bratings)
            {
                temp = bks[j];
                bks[j] = bks[j + 1];
                bks[j + 1] = temp;
            }
        }
    }
    printf("\n---Top 3 Books Sorted by Rating (Low to High)---\n");
    
    int limit=(*ci < 3) ? *ci : 3;
    displayAllBooks(bks,ci,limit);
}
void sortRatingHighToLow(Book* bks, int *ci)
{
    Book temp;

    for(int i=0;i<(*ci)-1;i++)
    {
        for(int j=0;j<(*ci)-i-1;j++)
        {
            if(bks[j].bratings < bks[j + 1].bratings)
            {
                temp = bks[j];
                bks[j] = bks[j + 1];
                bks[j + 1] = temp;
            }
        }
    }
    printf("\n---Top 3 Books Sorted by Rating (High to Low)---\n");
    
    int limit=(*ci < 3) ? *ci : 3;
    displayAllBooks(bks,ci,limit);
}

void main()
{
	int choice;
	int ci=0;
	int size=9;
	Book* bks=(Book*)malloc(size*sizeof(Book));
	StoreBooksHardcoded(bks,&ci);

	do{
		printf("\n\n========= Book Management=======");
		printf("\n\t1.Add Book");
		printf("\n\t2.Remove Book");
		printf("\n\t3.Update Book");
		printf("\n\t4.Author Books");
		printf("\n\t5.Search Books");
		printf("\n\t6.Category is");
		printf("\n\t7.Sorted Books");
		printf("\n\t8.Display All Books ");
		printf("\n\t0.Exit");
		
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
				bks=AddBooks(bks,&ci,&size);	
				break;
			}
			case 2:{
				int id;
				printf("Enter Book ID to remove: ");
    			scanf("%d", &id);
				RemoveBook(bks,&ci,id);
				break;
			}
			case 3:{
				int id;
				printf("Enter id of book to update");
				scanf("%d",&id);
				Update(bks,&ci,id);
				break;
			}
			case 4:{
				char name[50];
				printf("Enter Author Name: ");
    			scanf(" %[^\n]", name);
				ByAuthor(bks,&ci,name);
				break;
			}
			case 5:{
				int id=-1,choice;
				char name[50];
				printf("\n1. Search by ID");
  		 		printf("\n2. Search by Name");
    			printf("\nEnter choice: ");
    			scanf("%d",&choice);
    			
    			if(choice==1)
    			{
					printf("Enter id of book:");
					scanf("%d",&id);
					SearchById(bks,&ci,id);
				}
				else if(choice==2)
				{
					printf("Enter name of book:");
					scanf(" %[^\n]", name);
					SearchByName(bks,&ci,name);
				}
				else{
					printf("Invalid choice");
				}
				break;
			}
			case 6:{
				Categoryis(bks,&ci);
				break;
			}
			case 7:{
				int ch;
				printf("\n1.Price Low to High");
				printf("\n2.Price High to Low");
				printf("\n3.Rating Low to High");
				printf("\n4.Rating High to Low");
				printf("\nEnter your choice:");
				scanf("%d",&ch);
				
				switch(ch)
				{
					case 1:
						sortPriceLowToHigh(bks,&ci);
						break;
					case 2:
						sortPriceHighToLow(bks,&ci);
						break;
					case 3:
						sortRatingLowToHigh(bks,&ci);
						break;
					case 4:
						sortRatingHighToLow(bks,&ci);
						break;
					default:
						printf("\n---Invalid choice---");
				}
				break;
			}
			case 8:{
				displayAllBooks(bks,&ci,ci);
				break;
			}
			case 0:{
				printf("\n---Exit Program!----");
				break;
			}
			default:{
				printf("\n---Invalid Choice---");
				break;
			}
		}
	}while(choice!=0);
}
