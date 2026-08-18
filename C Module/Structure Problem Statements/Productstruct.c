#include <stdio.h>
#include <stdlib.h>

typedef struct Product
{
    char name[50];
    float price;
    int quantity;
} Product;

void acceptProduct(Product *p, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("\nEnter details of Product %d\n",i+1);

        printf("Product Name: ");
        scanf("%s",p[i].name);

        printf("Product Price: ");
        scanf("%f",&p[i].price);

        printf("Product Quantity: ");
        scanf("%d",&p[i].quantity);
    }
}

void displayProducts(Product *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nProduct %d\n",i+1);
        printf("Name     : %s\n", p[i].name);
        printf("Price    : %.2f\n",p[i].price);
        printf("Quantity : %d\n", p[i].quantity);
    }
}

float calculateTotal(Product *p, int n)
{
    float total=0;

    for(int i=0;i<n;i++)
    {
        total=total+(p[i].price*p[i].quantity);
    }
    return total;
}

int main()
{
    int n;
    float total;

    printf("Enter number of products: ");
    scanf("%d",&n);

    Product *p = (Product *)malloc(n * sizeof(Product));

    acceptProduct(p,n);
    displayProducts(p,n);
    total = calculateTotal(p, n);

    printf("\n=================================\n");
    printf("Total Cost = %.2f\n", total);
    printf("=================================\n");
}