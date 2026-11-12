// Program 46: reading, modifying and passing structures
// Structures go to a function by value, like any other variable.

#include <stdio.h>
#include <string.h>

struct Book
{
    char  title[40];
    int   pages;
    float price;
};

void applyDiscount(struct Book b, float percent)
{
    b.price = b.price - (b.price * percent / 100);
    printf("Price inside function : %.2f\n", b.price);
}

void showBook(struct Book b)
{
    printf("%-25s %4d pages  Rs %.2f\n", b.title, b.pages, b.price);
}

int main(void)
{
    struct Book b1 = {"Let Us C", 480, 399.0f};
    struct Book b2;

    // one fgets for the whole line, %s would stop at the first space
    printf("Enter a book title: ");
    fgets(b2.title, sizeof(b2.title), stdin);
    b2.title[strcspn(b2.title, "\n")] = '\0';       // drop the newline

    printf("Pages and price: ");
    scanf("%d %f", &b2.pages, &b2.price);

    printf("\nLibrary:\n");
    showBook(b1);
    showBook(b2);

    // member by member modification of the original
    b1.pages += 20;                 // new edition
    b1.price -= 50;
    printf("\nAfter revision:\n");
    showBook(b1);

    printf("\nDiscount on b1 (original unchanged outside):\n");
    applyDiscount(b1, 10);
    printf("Price in main         : %.2f\n", b1.price);

    return 0;
}
