// Program 33: a function that computes and returns a single value
// isPrime() is used to list primes in a range.

#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;           // found a divisor, not prime
    }
    return 1;
}

int main(void)
{
    int limit, n, count = 0;

    printf("List primes up to: ");
    scanf("%d", &limit);

    for (n = 2; n <= limit; n++)
    {
        if (isPrime(n))
        {
            printf("%d ", n);
            count++;
        }
    }

    printf("\nTotal %d primes\n", count);
    return 0;
}
