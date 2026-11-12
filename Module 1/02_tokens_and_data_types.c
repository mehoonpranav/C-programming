// Program 2: C tokens and the basic data types
// Keywords, identifiers, constants and punctuators are all tokens.
// Here we declare one variable of each basic type and print its size.

#include <stdio.h>

int main(void)
{
    int    roll   = 42;              // keyword int, identifier roll
    char   grade  = 'A';             // single quotes for a character constant
    float  cgpa   = 8.75f;           // f suffix makes it a float constant
    double pi     = 3.14159265358979;
    long   salary = 45000L;

    printf("roll   = %d\n", roll);
    printf("grade  = %c\n", grade);
    printf("cgpa   = %.2f\n", cgpa);
    printf("pi     = %.10lf\n", pi);
    printf("salary = %ld\n", salary);

    // sizeof tells how many bytes the type takes on this machine
    printf("\nSize of int      : %zu bytes\n", sizeof(int));
    printf("Size of char     : %zu byte\n", sizeof(char));
    printf("Size of float    : %zu bytes\n", sizeof(float));
    printf("Size of double   : %zu bytes\n", sizeof(double));
    printf("Size of long     : %zu bytes\n", sizeof(long));

    return 0;
}
