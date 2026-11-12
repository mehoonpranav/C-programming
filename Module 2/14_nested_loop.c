// Program 21: nested loops
// Outer loop controls the rows, inner loop controls the columns.

#include <stdio.h>

int main(void)
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // right angled triangle of stars
    printf("\nPattern 1\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    // number pyramid
    printf("\nPattern 2\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
            printf("  ");               // leading spaces
        for (j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
