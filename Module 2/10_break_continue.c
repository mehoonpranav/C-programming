// Program 17: break and continue inside a loop
// break leaves the loop, continue skips to the next round.

#include <stdio.h>

int main(void)
{
    int i;

    printf("First multiple of 7 above 50:\n");
    for (i = 50; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("Found %d\n", i);
            break;              // no need to keep going
        }
    }

    printf("\nNumbers from 1 to 10 skipping multiples of 3:\n");
    for (i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
            continue;           // skip the printf below
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
