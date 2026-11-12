// Program 12: type conversion and mixed operands
// Integer division is the classic trap here.

#include <stdio.h>

int main(void)
{
    int   a = 5, b = 2;
    float avg;

    printf("5 / 2            = %d\n", a / b);          // both int, cuts off
    printf("(float)5 / 2     = %.2f\n", (float)a / b);

    // implicit promotion: int + float gives float
    avg = a / b + 0.5;          // division happens first, still integer
    printf("a / b + 0.5      = %.2f\n", avg);

    avg = (float)a / b + 0.5;
    printf("(float)a / b + .5= %.2f\n", avg);

    // char to int is just the ASCII value
    char ch = 'A';
    printf("\n'A' as integer   = %d\n", ch);
    printf("'A' + 2          = %c\n", ch + 2);

    // narrowing conversion loses data, compiler may warn
    float price = 99.99f;
    int rounded = (int)price;
    printf("\n99.99 as int     = %d\n", rounded);

    return 0;
}
