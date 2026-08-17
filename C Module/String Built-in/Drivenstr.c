#include<string.h>
#include<stdio.h>
void main()
{
	int choice;

    do
    {
        printf("\n========== STRING FUNCTIONS MENU ==========\n");
        printf("1.  strlen()\n");
        printf("2.  strcpy()\n");
        printf("3.  strncpy()\n");
        printf("4.  strcat()\n");
        printf("5.  strncat()\n");
        printf("6.  strcmp()\n");
        printf("7.  strncmp()\n");
        printf("8.  strchr()\n");
        printf("9.  strrchr()\n");
        printf("10. strstr()\n");
        printf("11. strtok()\n");
        printf("12. strupr()\n");
        printf("13. strlwr()\n");
        printf("14. strrev()\n");
        printf("15. strdup()\n");
        printf("16. strspn()\n");
        printf("17. strcspn()\n");
        printf("18. strpbrk()\n");
        printf("19. strcoll()\n");
        printf("20. strxfrm()\n");
        printf("21. memchr()\n");
        printf("0. Exit\n");
        
        printf("===========================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
            	char str[50] = "Hello Firstbit";
            	int length;
				length=strlen(str);
				printf("Length is %d\n",length);
				break;
			}
	
			case 2:
            {
                char str[] = "HelloWorld";
                char cpy[50];
                strcpy(cpy, str);
                printf("Copy is %s\n", cpy);
                break;
            }
            
             case 3:
            {
                char str[] = "HelloWorld";
                char cpyn[50];
                strncpy(cpyn, str, 8);
                printf("Copy num is %s\n", cpyn);
                break;
            }

            case 4:
            {
                char str1[50] = "Hello World";
                char str2[] = "Hello FirstBit";
                strcat(str1,str2);
                printf("Concat string is %s\n", str1);
                break;
            }

            case 5:
            {
                char str1[50] = "Hello World";
                char str2[] = "Hello FirstBit";
                strncat(str1, str2, 10);
                printf("Concat str is %s\n", str1);
                break;
            }
            
            case 6:
            {
                char str[] = "Hello World";
                char name[] = "Hello World";
                if(strcmp(str, name) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are not Equal\n");

                break;
            }

            case 7:
            {
                char str1[] = "Hello";
                char str2[] = "Help";

                if(strncmp(str1,str2, 3) == 0)
                    printf("First 3 characters are same\n");
                else
                    printf("First 3 characters are different\n");

                break;
            }
            case 8:
            {
                char chr[] = "FirstBit";
                char *result;
                result = strchr(chr, 'i');
                if(result != NULL)
                    printf("Character found: %s\n", result);
                else
                    printf("Character not Found\n");
                break;
            }

            case 9:
            {
                char chr1[] = "FirstBit";
                char *result;
                result = strrchr(chr1, 't');
                if(result != NULL)
                    printf("Character found: %s\n", result);
                else
                    printf("Character not Found\n");

                break;
            }
             case 10:
            {
                char str[] = "Hello World";
                char *result;
                result = strstr(str, "World");
                if(result != NULL)
                    printf("Substring found: %s\n", result);
                else
                    printf("Substring not found\n");

                break;
            }

            case 11:
            {
                char str[] = "Java,C,Python";
                char *token;
                token = strtok(str, ",");
                while(token != NULL)
                {
                    printf("%s\n", token);
                    token = strtok(NULL, ",");
                }
                break;
            }
			case 12:
            {
                char str[] = "hello world";
                strupr(str);
                printf("Upper string: %s\n", str);
                break;
            }

            case 13:
            {
                char str[] = "HELLO FIRSTBIT";
                strlwr(str);
                printf("Lower string: %s\n", str);

                break;
            }

            case 14:
            {
                char str[] = "Hello";
                strrev(str);
                printf("Reverse String: %s\n", str);
                break;
        	}
        	 case 15:
            {
                char str[] = "Java Programming";
                char *copy;
                copy = strdup(str);
                if(copy != NULL)
                {
                    printf("Duplicate string: %s\n", copy);
                }
                break;
            }

            case 16:
            {
                char str[] = "12345ABC";
                printf("Length of matching characters: %zu\n");
                strspn(str, "1234567890");
                break;
            }
			case 17:
            {
                char str[] = "Hello,World";
                printf("Position of comma: %zu\n",
                       strcspn(str, ","));
                break;
            }

            case 18:
            {
                char str[] = "Hello World";
                char *res;
                res = strpbrk(str, "aeiou");
                if(res != NULL)
                    printf("First vowel: %c\n", *res);
                else
                    printf("No vowel found\n");

                break;
            }

            case 19:
            {
                char str1[] = "Apple";
                char str2[] = "Banana";
                int rslt;
                rslt = strcoll(str1, str2);

                if(rslt == 0)
                    printf("Strings are equal\n");
                else if(rslt < 0)
                    printf("String a comes before String b\n");
                else
                    printf("String a comes after String b\n");
                break;
            }
             case 20:
            {
                char st[] = "Hello";
                char res[20];
                strxfrm(res, st, sizeof(res));
                printf("Transformed string: %s\n", res);
                break;
            }

            case 21:
            {
                char str[] = "Programming";
                char *rslt;
                rslt = memchr(str, 'g', strlen(str));

                if(rslt != NULL)
                    printf("Character found: %c\n", *rslt);
                else
                    printf("Character not found\n");
                break;
            }
            
            case 0:
                printf("Program Exited.\n");
                break;

            default:
                printf("Invalid choice! Please enter 0-21.\n");
        }
    }while(choice!=0);
}
	
	
	

	