#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct Movie
{
    char title[100];
    char director[100];
    int releaseYear;
    char genre[50];
} Movie;

Movie* addMovie(Movie* m, int *ci,int *size)
{
	int n;

    printf("\nHow many movies do you want to add? ");
    scanf("%d",&n);
    
	for(int i=0;i<n;i++)
    {
		Movie *temp;	
		if(*ci==*size)
		{
		    int newsize=*size+4;
		    
			temp=realloc(m,sizeof(Movie)*newsize);
			if (temp == NULL)
    		{
       			 printf("Memory allocation failed!\n");
       			 return m;
    		}

			
			m = temp;
			*size = newsize;
		}
		
	    printf("\nEnter Movie Details\n");
	
	    printf("Title: ");
	    scanf(" %[^\n]",m[*ci].title);
	
	    printf("Director: ");
	    scanf(" %[^\n]",m[*ci].director);
	
	    printf("Release Year: ");
	    scanf("%d",&m[*ci].releaseYear);
	
	    printf("Genre: ");
	    scanf(" %[^\n]",m[*ci].genre);
	
	    (*ci)++;
	
	    printf("\nMovie added successfully!\n");
	}
	return m;
}

void displayMovies(Movie *m, int *ci)
{
    for (int i=0;i<*ci;i++)
    {
        printf("\nMovie %d\n",i+1);
        printf("Title       : %s\n", m[i].title);
        printf("Director    : %s\n", m[i].director);
        printf("Release Year: %d\n", m[i].releaseYear);
        printf("Genre       : %s\n", m[i].genre);
    }
}

void searchMovie(Movie *m, int *ci)
{
    char title[100];
    int found=0;

    printf("\nEnter movie title to search: ");
    scanf(" %[^\n]",title);

    for(int i=0;i<*ci;i++)
    {
        if(strcmp(m[i].title,title)==0)
        {
            printf("\nMovie Found!\n");
            printf("Title       : %s\n", m[i].title);
            printf("Director    : %s\n", m[i].director);
            printf("Release Year: %d\n", m[i].releaseYear);
            printf("Genre       : %s\n", m[i].genre);

            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("\nMovie not found.\n");
    }
}

void updateMovie(Movie *m, int *ci)
{
    char title[100];
    int found = 0;

    printf("\nEnter movie title to update: ");
    scanf(" %[^\n]", title);

    for(int i=0;i<*ci;i++)
    {
        if (strcmp(m[i].title, title) == 0)
        {
            printf("\nEnter new details\n");

            printf("New Title: ");
            scanf(" %[^\n]", m[i].title);

            printf("New Director: ");
            scanf(" %[^\n]", m[i].director);

            printf("New Release Year: ");
            scanf("%d", &m[i].releaseYear);

            printf("New Genre: ");
            scanf(" %[^\n]", m[i].genre);

            printf("\nMovie updated successfully!\n");

            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("\nMovie not found.\n");
    }
}

void main()
{
    int ci=3;
    int size=3;
    int choice;
	
	Movie* m=(Movie*)malloc(size*sizeof(Movie));
	
	strcpy(m[0].title, "3 Idiots");
    strcpy(m[0].director, "Rajkumar Hirani");
    m[0].releaseYear = 2009;
    strcpy(m[0].genre, "Comedy");

    strcpy(m[1].title, "Dangal");
    strcpy(m[1].director, "Nitesh Tiwari");
    m[1].releaseYear = 2016;
    strcpy(m[1].genre, "Drama");

    strcpy(m[2].title, "Inception");
    strcpy(m[2].director, "Christopher Nolan");
    m[2].releaseYear = 2010;
    strcpy(m[2].genre, "Sci-Fi");
    
    do
    {
        printf("\n\n========== MOVIE DATABASE ==========\n");
        printf("1. Add Movie\n");
        printf("2. Display Movies\n");
        printf("3. Search Movie\n");
        printf("4. Update Movie\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                    m=addMovie(m,&ci,&size);
                    break;

            case 2:
                displayMovies(m,&ci);
                break;

            case 3:
                searchMovie(m,&ci);
                break;

            case 4:
                updateMovie(m,&ci);
                break;

            case 5:
                printf("\nExiting Movie Database...\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }
    } while (choice != 5);
}