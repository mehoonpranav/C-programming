// Program 10: conditional (ternary) operator
// condition ? value_if_true : value_if_false

#include <stdio.h>

int main(void)
{
    int marks;
    int a = 18, b = 25;

    printf("Enter marks: ");
    scanf("%d", &marks);

    // the whole thing is one expression, so it can sit inside printf
    printf("Result : %s\n", marks >= 40 ? "PASS" : "FAIL");

    printf("Larger number between %d and %d is %d\n",
           a, b, (a > b) ? a : b);

    // nested ternary, used carefully because it gets hard to read
    printf("Grade  : %c\n",
           marks >= 90 ? 'A' :
           marks >= 75 ? 'B' :
           marks >= 60 ? 'C' : 'D');

    return 0;
}
