// Program 25: two dimensional array, declaration and initialization
// A 2-D array is an array of arrays, a[i][j] means row i column j.

#include <stdio.h>

int main(void)
{
    int a[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
    int i, j, sum = 0;

    printf("Matrix contents:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            sum += a[i][j];

    printf("\nGrand total = %d\n", sum);

    // row sums are a common operation
    for (i = 0; i < 3; i++)
    {
        int rowSum = 0;
        for (j = 0; j < 4; j++)
            rowSum += a[i][j];
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}
