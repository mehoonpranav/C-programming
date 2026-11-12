// Program 6: from algorithm to program
//
// Algorithm (in words):
//   1. Read three numbers a, b, c
//   2. Assume a is the largest
//   3. If b is bigger, make b the largest
//   4. If c is bigger, make c the largest
//   5. Print the largest
//
// Pseudocode:
//   BEGIN
//     READ a, b, c
//     max <- a
//     IF b > max THEN max <- b
//     IF c > max THEN max <- c
//     PRINT max
//   END
//
// The C version below is the same steps, written in C syntax.
// A flowchart for this would be a start box, three input boxes,
// three decision diamonds and one output box.

#include <stdio.h>

int main(void)
{
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;                // step 2
    if (b > max)            // step 3
        max = b;
    if (c > max)            // step 4
        max = c;

    printf("Largest = %d\n", max);   // step 5

    return 0;
}
