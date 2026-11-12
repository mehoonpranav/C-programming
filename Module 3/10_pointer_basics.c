// Program 40: defining and declaring a pointer
// & gives the address, * reads or writes the value at that address.

#include <stdio.h>

int main(void)
{
    int  marks = 87;
    int *p;                     // pointer to int, not initialized yet

    p = &marks;                 // p now holds the address of marks

    printf("Value of marks      : %d\n", marks);
    printf("Address of marks    : %p\n", (void *)&marks);
    printf("Value stored in p   : %p\n", (void *)p);
    printf("Value at *p         : %d\n", *p);

    // changing through the pointer changes the original
    *p = 95;
    printf("\nAfter *p = 95, marks = %d\n", marks);

    printf("\nSize of int         : %zu bytes\n", sizeof(int));
    printf("Size of int pointer : %zu bytes\n", sizeof(p));

    return 0;
}
