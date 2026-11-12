// Program 18: counted loop (for)
// Deterministic loop, we know exactly how many times it runs.

#include <stdio.h>

int main(void)
{
    int i, n;
    int sum = 0;

    printf("How many terms? ");
    scanf("%d", &n);

    // counter loop, all three parts visible in one line
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of first %d numbers = %d\n", n, sum);

    return 0;
}
