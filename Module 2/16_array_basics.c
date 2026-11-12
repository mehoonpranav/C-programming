// Program 23: one dimensional array, declaration and initialization
// Indexing starts at 0, the last valid index is size - 1.

#include <stdio.h>

int main(void)
{
    int marks[5] = {78, 91, 64, 88, 55};
    int i, sum = 0;
    int highest, lowest;

    printf("Marks: ");
    for (i = 0; i < 5; i++)
        printf("%d ", marks[i]);
    printf("\n");

    for (i = 0; i < 5; i++)
        sum += marks[i];

    highest = lowest = marks[0];
    for (i = 1; i < 5; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    printf("Total   = %d\n", sum);
    printf("Average = %.2f\n", sum / 5.0);
    printf("Highest = %d\n", highest);
    printf("Lowest  = %d\n", lowest);

    // partial initialization fills the rest with zeros
    int extra[5] = {1, 2};
    printf("\nextra[3] = %d (unfilled elements become 0)\n", extra[3]);

    return 0;
}
