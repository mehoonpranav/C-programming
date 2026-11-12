// Program 26: matrix addition and transpose
// Both matrices must have the same order for addition.

#include <stdio.h>

int main(void)
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;

    printf("Rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix A:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nA + B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%4d", sum[i][j]);
        printf("\n");
    }

    // transpose swaps the row and column indices
    printf("\nTranspose of A:\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
            printf("%4d", a[j][i]);
        printf("\n");
    }

    return 0;
}
