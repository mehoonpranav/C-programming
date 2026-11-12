// Program 52: typedef
// Creates a shorter name for an existing type, does not create a new type.

#include <stdio.h>
#include <string.h>

typedef unsigned int u32;
typedef float        Money;

// typedef and struct together, now "Point" is the type name
typedef struct
{
    int x;
    int y;
} Point;

// typedef with enum
typedef enum { SMALL, MEDIUM, LARGE } Size;

// typedef with a function pointer
typedef int (*Compare)(int, int);

int ascending(int a, int b)  { return a - b; }
int descending(int a, int b) { return b - a; }

int main(void)
{
    u32 count = 4294967295u;
    Money price = 249.99f;

    printf("count = %u\n", count);
    printf("price = %.2f\n\n", price);

    // no need to write "struct Point" any more
    Point p1 = {3, 7};
    Point p2 = {10, 2};

    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    // copies are plain assignments when the struct is typedef'd
    Point p3 = p1;
    p3.x = 99;
    printf("p3 = (%d, %d), p1 unchanged at x = %d\n\n", p3.x, p3.y, p1.x);

    Size shirt = LARGE;
    printf("Size code = %d\n\n", shirt);

    // function pointers make a tiny sort strategy
    Compare cmp = ascending;
    printf("ascending(7, 3)  = %d\n", cmp(7, 3));
    cmp = descending;
    printf("descending(7, 3) = %d\n", cmp(7, 3));

    return 0;
}
