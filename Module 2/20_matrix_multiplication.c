// Program 27: matrix multiplication
// Columns of A must equal rows of B, result is rows(A) x cols(B).

#include <stdio.h>

int main(void)
{
    int a[10][10], b[10][10], product[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Order of A (rows cols): ");
    scanf("%d %d", &r1, &c1);
    printf("Order of B (rows cols): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Cannot multiply, %d != %d\n", c1, r2);
        return 1;
    }

    printf("Enter A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter B:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // row of A dot column of B
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < c1; k++)
                product[i][j] += a[i][k] * b[k][j];
        }
    }

    printf("\nA x B:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%5d", product[i][j]);
        printf("\n");
    }

    return 0;
}
