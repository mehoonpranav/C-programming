// Program 39: formatted I/O in more detail
// Width, precision, flags, and building a string with sprintf.

#include <stdio.h>

int main(void)
{
    int   qty;
    float rate;
    char  tag[10];

    printf("Enter item as: <tag> <qty> <rate>  ");
    scanf("%9s %d %f", tag, &qty, &rate);

    printf("\n--- Receipt ---\n");
    printf("%-8s %5s %10s\n", "ITEM", "QTY", "AMOUNT");
    printf("%-8s %5d %10.2f\n", tag, qty, qty * rate);
    printf("%-8s %5s %10.2f\n", "", "TAX", qty * rate * 0.18f);

    // %5.2f means total width 5 with 2 digits after the point
    printf("\nPadded  : |%8.2f|\n", rate);
    printf("Left    : |%-8.2f|\n", rate);
    printf("Sign    : |%+8.2f|\n", rate);

    // sprintf writes the same formatted text into a char array
    char line[50];
    sprintf(line, "%s x %d = %.2f", tag, qty, qty * rate);
    printf("\nBuilt   : %s\n", line);

    // sscanf pulls values back out of a string
    int a, b;
    sscanf("15 27", "%d %d", &a, &b);
    printf("Parsed  : %d + %d = %d\n", a, b, a + b);

    return 0;
}
