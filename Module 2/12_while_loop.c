// Program 19: while loop with an unknown number of turns
// Reverse the digits of a number, we do not know the digit count in advance.

#include <stdio.h>

int main(void)
{
    int n, digit;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;                 // pull off the last digit
        reversed = reversed * 10 + digit;
        n = n / 10;                     // drop it
    }

    printf("Reversed = %d\n", reversed);

    return 0;
}
