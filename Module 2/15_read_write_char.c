// Program 22: reading and writing a character
// Small letter to capital letter converter using the ASCII gap of 32.

#include <stdio.h>

int main(void)
{
    char lower, upper;

    printf("Enter a small letter: ");
    lower = getchar();              // read one character

    upper = lower - 32;             // 'a' is 97, 'A' is 65

    printf("You entered    : ");
    putchar(lower);
    printf("\nIn upper case  : ");
    putchar(upper);
    putchar('\n');

    return 0;
}
