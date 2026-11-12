// Program 49: union, defining, initializing and accessing members
// All members share one memory block, so only one member is valid at a time.

#include <stdio.h>
#include <string.h>

union Value
{
    int    i;
    float  f;
    char   text[12];
};

int main(void)
{
    union Value v;

    printf("Size of union Value = %zu bytes\n", sizeof(union Value));
    printf("(the largest member decides the size)\n\n");

    v.i = 65;
    printf("As int   : %d\n", v.i);

    // writing f overwrites the same bytes that i was using
    v.f = 3.5f;
    printf("As float : %.2f\n", v.f);

    strcpy(v.text, "hello");
    printf("As text  : %s\n", v.text);

    printf("\nNow reading the old int after text was written:\n");
    printf("v.i = %d  (garbage, the bytes now hold \"hello\")\n", v.i);

    // initialized with the first member only
    union Value w = {100};
    printf("\nUnion initialized with {100} gives i = %d\n", w.i);

    return 0;
}
