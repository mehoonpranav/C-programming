// Program 41: pointer arithmetic and scaling
// Adding 1 to an int pointer moves it by sizeof(int) bytes, not 1 byte.

#include <stdio.h>

int main(void)
{
    int marks[5] = {72, 85, 91, 66, 78};
    int *p = marks;                 // array name is the address of element 0
    int i;

    printf("Index  Address        Value\n");
    for (i = 0; i < 5; i++)
        printf("%3d    %p   %d\n", i, (void *)(p + i), *(p + i));

    printf("\nmarks[2]    = %d\n", marks[2]);
    printf("*(p + 2)    = %d\n", *(p + 2));
    printf("*(marks + 2)= %d\n", *(marks + 2));

    // the address gap between neighbours is sizeof(int)
    printf("\nStep between p and p+1 = %ld bytes\n",
           (long)((char *)(p + 1) - (char *)p));

    // walk the array with p++ instead of an index
    printf("\nWalking with p++: ");
    for (p = marks; p < marks + 5; p++)
        printf("%d ", *p);
    printf("\n");

    // difference of two pointers gives the element count
    printf("Element count = %d\n", (int)(p - marks));

    return 0;
}
