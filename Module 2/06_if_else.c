// Program 13: simple if-else
// Check whether a number is even or odd.

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);

    return 0;
}
