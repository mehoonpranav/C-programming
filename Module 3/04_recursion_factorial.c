// Program 34: recursion, direct recursion
// A function that calls itself needs a base case or it never stops.

#include <stdio.h>

long factorial(int n)
{
    if (n == 0 || n == 1)       // base case
        return 1;
    return n * factorial(n - 1);   // smaller problem each time
}

long fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);   // two recursive calls
}

int main(void)
{
    int n, i;

    printf("Factorial of: ");
    scanf("%d", &n);
    printf("%d! = %ld\n", n, factorial(n));

    printf("\nFirst %d Fibonacci numbers: ", n);
    for (i = 0; i < n; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");

    return 0;
}
