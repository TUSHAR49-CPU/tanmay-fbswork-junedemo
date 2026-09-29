#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct BookManagement
{
    int bid;
    char bname[50];
    char authornm[50];
    char category[50];
    double bprice;
    double bratings;
} Book;

void clearInputBuffer() { 
    int ch; 
    while ((ch = getchar()) != '\n' && ch != EOF) {} 
}

void trimSpaces(char str[]) { 
    int start = 0;  
    int end; 
    int len; 
    str[strcspn(str, "\n")] = '\0'; 
    len = strlen(str); 
    while (start < len && isspace((unsigned char)str[start])) { 
        start++;
    }  
    end = len - 1; 
    while (end >= start && isspace((unsigned char)str[end])) { 
        end--; 
    } 
    if (start > 0) { 
        memmove(str, str + start, end - start + 1); 
    } 
    if (end < start) { 
        str[0] = '\0'; 
    } else {
        str[end - start + 1] = '\0'; 
    }   
}

int containsIgnoreCase(const char *str, const char *search) { 
    char strCopy[100]; 
    char searchCopy[100]; 
    int i;
    for (i = 0; str[i] != '\0' && i < 99; i++) { 
        strCopy[i] = tolower((unsigned char)str[i]); 
    } 
    strCopy[i] = '\0'; 
    for (i = 0; search[i] != '\0' && i < 99; i++) { 
        searchCopy[i] = tolower((unsigned char)search[i]); 
    } 
    searchCopy[i] = '\0'; 
    return strstr(strCopy, searchCopy) != NULL; 
}

int isDuplicateId(Book *bks, int ci, int id, int ignoreIndex) { 
    for (int i = 0; i < ci; i++) { 
        if (i != ignoreIndex && bks[i].bid == id) { 
            return 1; 
        } 
    } 
    return 0;
}

int getInteger(char input[], int *value) { 
    char extra; 
    if (sscanf(input, " %d %c", value, &extra) == 1) { 
        return 1; 
    } 
    return 0; 
}

void StoreBooksHardcoded(Book* bks, int* ci)
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

    *ci = 9;
}

void displayAllBooks(Book* bks, int *ci, int limit)
{
    if (limit > *ci) {
        limit = *ci;
    }
    if (limit <= 0) { 
        printf("\n--- No Books Available ---\n"); 
        return; 
    }

    printf("\n====================================================================================================\n");
    printf("| %-5s | %-25s | %-20s | %-12s | %-10s | %-7s |\n",
           "ID", "Book Name", "Author", "Category", "Price", "Rating");
    printf("====================================================================================================\n");

    for (int i = 0; i < limit; i++)
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

Book* AddBooks(Book* bks, int *ci, int *size)
{
    int n;
    char input[100];

    printf("\nHow many books do you want to add? ");
    fgets(input, sizeof(input), stdin);
    trimSpaces(input);
    
    if (!getInteger(input, &n)) { 
        printf("\n--- Please enter a valid number ---\n"); 
        return bks; 
    }
    if (n <= 0) {
        printf("\n--- Number of books must be positive ---\n"); 
        return bks; 
    }

    if (*ci + n > *size)
    {
        int newsize = *size;
        while (*ci + n > newsize)
        {
            newsize += 4;
        }

        printf("\n--- Book Storage is Full ---\n");
        printf("--- Allocating New Storage of Books... ---\n");

        Book *temp = realloc(bks, sizeof(Book) * newsize);
        if (temp == NULL)
        {
            printf("\n--- Memory allocation failed ---\n");
            return bks;
        }

        bks = temp;
        *size = newsize;
        printf("--- New Storage for Adding Books Allocated Successfully ---\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n========== Enter Book %d Details ==========\n", i + 1);

       	int tempId;
		while (1) 
		{ 
		    char buf[50];
		    printf("Enter ID of book: ");
		    if (fgets(buf, sizeof(buf), stdin) == NULL) continue;
		    trimSpaces(buf); 
		    
		    if (strlen(buf) == 0) { 
		        printf("--- ID cannot be empty ---\n");
		        continue; 
		    } 
		    if (!getInteger(buf, &tempId)) {
		        printf("--- Please enter a valid numeric ID ---\n");
		        continue;
		    } 
		    if (tempId < 0) { 
		        printf("--- ID cannot be negative ---\n");
		        continue;
		    } 
		    if (isDuplicateId(bks, *ci, tempId, -1)) {
		        printf("--- Duplicate ID is not allowed ---\n"); 
		        continue;
		    }
		    bks[*ci].bid = tempId;
		    break;
		}
        while (1) 
        {
            printf("Enter name of book: ");
            fgets(bks[*ci].bname, sizeof(bks[*ci].bname), stdin);
            trimSpaces(bks[*ci].bname);
            if (strlen(bks[*ci].bname) == 0) { 
                printf("--- Book name cannot be empty ---\n"); 
                continue; 
            } 
            break; 
        }
        while (1) { 
            printf("Enter Author of book: ");
            fgets(bks[*ci].authornm, sizeof(bks[*ci].authornm), stdin);     
            trimSpaces(bks[*ci].authornm); 
            if (strlen(bks[*ci].authornm) == 0) { 
                printf("--- Author cannot be empty ---\n"); 
                continue; 
            } 
            break; 
        }
        while (1) {
            printf("Enter category of book: "); 
            fgets(bks[*ci].category, sizeof(bks[*ci].category), stdin); 
            trimSpaces(bks[*ci].category); 
            if (strlen(bks[*ci].category) == 0) { 
                printf("--- Category cannot be empty ---\n");
                continue; 
            } 
            break; 
        }
        while (1) {
            char buf[50];
            printf("Enter price of book: "); 
            fgets(buf, sizeof(buf), stdin); 
            trimSpaces(buf); 
            if (strlen(buf) == 0) { 
                printf("--- Price cannot be empty ---\n"); 
                continue; 
            } 
            if (sscanf(buf, "%lf", &bks[*ci].bprice) != 1) { 
                printf("--- Please enter a valid number ---\n"); 
                continue; 
            } 
            if (bks[*ci].bprice < 0) { 
                printf("--- Price cannot be negative ---\n"); 
                continue; 
            } 
            break; 
        } 
        while (1) 
        {   
            char buf[50]; 
            printf("Enter rating of book: "); 
            fgets(buf, sizeof(buf), stdin); 
            trimSpaces(buf); 
            if (strlen(buf) == 0) { 
                printf("--- Rating cannot be empty ---\n"); 
                continue; 
            } 
            if (sscanf(buf, "%lf", &bks[*ci].bratings) != 1) { 
                printf("--- Please enter a valid number ---\n"); 
                continue; 
            } 
            if (bks[*ci].bratings < 0 || bks[*ci].bratings > 5) { 
                printf("--- Rating must be between 0 and 5 ---\n"); 
                continue; 
            } 
            break; 
        } 
        (*ci)++; 
        printf("\n\t--- Book Added Successfully! ---\n"); 
    }
    return bks;
}

void RemoveBook(Book* bks, int *ci, int id)
{
    int found = -1;
    for (int i = 0; i < *ci; i++)
    {
        if (bks[i].bid == id)
        {
            printf("\n\t--- Book Found at Index: %d ---\n", i);
            found = i;
            break;
        }
    }
    if (found == -1)
    {
        printf("\n\t--- Book Not Found. ---\n");
        return;
    }
    for (int i = found; i < (*ci) - 1; i++)
    {
        bks[i] = bks[i + 1];
    }
    (*ci)--;
    printf("\n--- Book Removed Successfully. ---\n");
}

void SearchById(Book* bks, int *ci, int id)
{
    int found = 0;
    for (int i = 0; i < *ci; i++)
    {
        if (id == bks[i].bid)
        {
            printf("\n\t--- Book Found at index: %d ----\n", i);
            displayBook(bks[i]);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\n\t--- Book not Found. ---\n");
}

void SearchByName(Book* bks, int *ci, char name[])
{
    int found = 0;
    trimSpaces(name);
    
    for (int i = 0; i < *ci; i++)
    {
        if (containsIgnoreCase(bks[i].bname, name))
        {
            printf("\n\t--- Book Found at index: %d ----\n", i);
            displayBook(bks[i]);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\n\t--- Book not Found. ---\n");
}

void ByAuthor(Book* bks, int *ci, char name[])
{
    int found = 0;
    trimSpaces(name);
    
    for (int i = 0; i < *ci; i++)
    {
        if (containsIgnoreCase(bks[i].authornm, name))
        {
            printf("\n\t--- Book Found at index: %d ----\n", i);
            displayBook(bks[i]);
            found = 1;
        }
    }
    if (!found)
        printf("\n\t--- Book by Author name not found ---\n");      
}

void Categoryis(Book* bks, int *ci)
{
    char category[50];
    int found = 0;
    printf("Enter Category of books: ");
    fgets(category, sizeof(category), stdin); 
    trimSpaces(category);

    if (strlen(category) == 0) { 
        printf("\n--- Category cannot be empty ---\n"); 
        return; 
    } 
    for (int i = 0; i < *ci; i++) { 
        if (containsIgnoreCase(bks[i].category, category)) { 
            displayBook(bks[i]); 
            found = 1; 
        } 
    } 
    if (!found) 
        printf("\nNo books found in category: %s\n", category);
}

void Update(Book* bks, int *ci, int id)
{
    int index = -1, ch;
    for (int i = 0; i < *ci; i++)
    {
        if (id == bks[i].bid)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("\n\t--- Book Not Found ----\n");
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
    clearInputBuffer();
    
    switch (ch)
    {
        case 1: {
            char input[50];
            while (1) { 
                printf("Enter new price: "); 
                fgets(input, sizeof(input), stdin); 
                trimSpaces(input); 
                if (strlen(input) == 0) { 
                    printf("--- Price not entered. Keeping old price ---\n"); 
                    break; 
                } 
                double price; 
                if (sscanf(input, "%lf", &price) != 1) { 
                    printf("--- Invalid price ---\n"); 
                    continue;
                } 
                if (price < 0) { 
                    printf("--- Price cannot be negative ---\n"); 
                    continue; 
                } 
                bks[index].bprice = price; 
                printf("\n--- Price Updated Successfully ---\n"); 
                break; 
            }
            break;
        }

        case 2: {
            char input[50]; 
            while (1) { 
                printf("Enter new rating: "); 
                fgets(input, sizeof(input), stdin); 
                trimSpaces(input); 
                if (strlen(input) == 0) { 
                    printf("--- Rating not entered. Keeping old rating ---\n"); 
                    break; 
                } 
                double rating; 
                if (sscanf(input, "%lf", &rating) != 1) { 
                    printf("--- Invalid rating ---\n"); 
                    continue; 
                } 
                if (rating < 0 || rating > 5) { 
                    printf("--- Rating must be between 0 and 5 ---\n"); 
                    continue; 
                } 
                bks[index].bratings = rating; 
                printf("\n--- Rating Updated Successfully ---\n"); 
                break; 
            }
            break;
        }

        case 3: {
            char input[50]; 
            printf("Enter new category: "); 
            fgets(input, sizeof(input), stdin); 
            trimSpaces(input); 
            if (strlen(input) == 0) { 
                printf("--- Category not entered. Keeping old category ---\n"); 
            } else { 
                strcpy(bks[index].category, input); 
                printf("\n--- Category Updated Successfully ---\n"); 
            }
            break;
        }

        case 4: {
            char input[50]; 
            printf("Enter new author: "); 
            fgets(input, sizeof(input), stdin); 
            trimSpaces(input); 
            if (strlen(input) == 0) { 
                printf("--- Author not entered. Keeping old author ---\n"); 
            } else { 
                strcpy(bks[index].authornm, input); 
                printf("\n--- Author Updated Successfully ---\n"); 
            } 
            break; 
        }

        default:
            printf("\n--- Invalid Choice ---\n");
    }
}

void sortPriceLowToHigh(Book* bks, int *ci)
{
    Book temp;
    Book sorted[100];

    for(int i = 0; i < *ci; i++)
    {
        sorted[i] = bks[i];
    }

    for(int i = 0; i < (*ci) - 1; i++)
    {
        for(int j = 0; j < (*ci) - i - 1; j++)
        {
            if(sorted[j].bprice > sorted[j + 1].bprice)
            {
                temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    printf("\n--- 3 Books Sorted by Price (Low to High) ---\n");
    displayAllBooks(sorted, ci, 3);

    printf("\n--- All Books Sorted by Price (Low to High) ---\n");
    displayAllBooks(sorted, ci, *ci);
}

void sortPriceHighToLow(Book* bks, int *ci)
{
    Book temp;
    Book sorted[100];

    for(int i = 0; i < *ci; i++)
    {
        sorted[i] = bks[i];
    }

    for(int i = 0; i < (*ci) - 1; i++)
    {
        for(int j = 0; j < (*ci) - i - 1; j++)
        {
            if(sorted[j].bprice < sorted[j + 1].bprice)
            {
                temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    printf("\n--- 3 Books Sorted by Price (High to Low) ---\n");
    displayAllBooks(sorted, ci, 3);

    printf("\n--- All Books Sorted by Price (High to Low) ---\n");
    displayAllBooks(sorted, ci, *ci);
}


void sortRatingLowToHigh(Book* bks, int *ci)
{
    Book temp;
    Book sorted[100];

    for(int i = 0; i < *ci; i++)
    {
        sorted[i] = bks[i];
    }

    for(int i = 0; i < (*ci) - 1; i++)
    {
        for(int j = 0; j < (*ci) - i - 1; j++)
        {
            if(sorted[j].bratings > sorted[j + 1].bratings)
            {
                temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    printf("\n--- 3 Books Sorted by Rating (Low to High) ---\n");
    displayAllBooks(sorted, ci, 3);

    printf("\n--- All Books Sorted by Rating (Low to High) ---\n");
    displayAllBooks(sorted, ci, *ci);
}


void sortRatingHighToLow(Book* bks, int *ci)
{
    Book temp;
    Book sorted[100];

    for(int i = 0; i < *ci; i++)
    {
        sorted[i] = bks[i];
    }

    for(int i = 0; i < (*ci) - 1; i++)
    {
        for(int j = 0; j < (*ci) - i - 1; j++)
        {
            if(sorted[j].bratings < sorted[j + 1].bratings)
            {
                temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    printf("\n--- 3 Books Sorted by Rating (High to Low) ---\n");
    displayAllBooks(sorted, ci, 3);

    printf("\n--- All Books Sorted by Rating (High to Low) ---\n");
    displayAllBooks(sorted, ci, *ci);
}

void main()
{
    int choice;
    int ci = 0;
    int size = 9;

    Book *bks = (Book *)malloc(size * sizeof(Book));

    StoreBooksHardcoded(bks, &ci);

    do
    {
        printf("\n\n========= Book Management =======");
        printf("\n\t1. Add Book");
        printf("\n\t2. Remove Book");
        printf("\n\t3. Update Book");
        printf("\n\t4. Books by Author");
        printf("\n\t5. Search Books");
        printf("\n\t6. Category Available");
        printf("\n\t7. Sorted Books");
        printf("\n\t8. Display All Books");
        printf("\n\t0. Exit");

        printf("\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            clearInputBuffer();
            printf("\n--- Invalid input! Please enter a number. ---\n");
            continue;
        }
        clearInputBuffer();

        switch (choice)
        {
            case 1:
                bks = AddBooks(bks, &ci, &size);
                break;

            case 2:
            {
                int id;
                printf("Enter Book ID to remove: ");
                scanf("%d", &id);
                clearInputBuffer();

                if (id < 0) {
                    printf("\n--- ID cannot be negative ---\n");
                    break;
                }
                RemoveBook(bks, &ci, id);
                break;
            }

            case 3:
            {
                int id;
                printf("Enter id of book to update: ");
                scanf("%d", &id);
                clearInputBuffer();

                if (id < 0) {
                    printf("\n--- ID cannot be negative ---\n");
                    break;
                }
                Update(bks, &ci, id);
                break;
            }

            case 4:
            {
                char name[50];
                printf("Enter Author Name: ");
                fgets(name, sizeof(name), stdin);
                trimSpaces(name);

                if (strlen(name) == 0) {
                    printf("\n--- Author name cannot be empty ---\n");
                    break;
                }
                ByAuthor(bks, &ci, name);
                break;
            }

            case 5:
            {
                int searchChoice;
                printf("\n1. Search by ID");
                printf("\n2. Search by Partial Name");
                printf("\nEnter choice: ");
                scanf("%d", &searchChoice);
                clearInputBuffer();

                if (searchChoice == 1)
                {
                    int id;
                    printf("Enter id of book: ");
                    scanf("%d", &id);
                    clearInputBuffer();

                    if (id < 0) {
                        printf("\n--- ID cannot be negative ---\n");
                        break;
                    }
                    SearchById(bks, &ci, id);
                }
                else if (searchChoice == 2)
                {
                    char name[50];
                    printf("Enter name of book: ");
                    fgets(name, sizeof(name), stdin);
                    trimSpaces(name);

                    if (strlen(name) == 0) {
                        printf("\n--- Search name cannot be empty ---\n");
                        break;
                    }
                    SearchByName(bks, &ci, name);
                }
                else
                {
                    printf("\n--- Invalid Choice ---\n");
                }
                break;
            }

            case 6:
                Categoryis(bks, &ci);
                break;

            case 7:
            {
                int ch;
                printf("\n1. Price Low to High");
                printf("\n2. Price High to Low");
                printf("\n3. Rating Low to High");
                printf("\n4. Rating High to Low");
                printf("\nEnter your choice: ");
                scanf("%d", &ch);
                clearInputBuffer();

                switch (ch)
                {
                    case 1: sortPriceLowToHigh(bks, &ci); break;
                    case 2: sortPriceHighToLow(bks, &ci); break;
                    case 3: sortRatingLowToHigh(bks, &ci); break;
                    case 4: sortRatingHighToLow(bks, &ci); break;
                    default: printf("\n--- Invalid choice ---\n");
                }
                break;
            }

            case 8:
                displayAllBooks(bks, &ci, ci);
                break;

            case 0:
                printf("\n--- Exit Program! ---\n");
                break;

            default:
                printf("\n--- Invalid Choice ---\n");
                break;
        }

    } while (choice != 0);
}