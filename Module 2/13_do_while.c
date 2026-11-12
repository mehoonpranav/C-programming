// Program 20: do-while loop
// The body runs at least once because the test comes after it.
// Good fit for menus.

#include <stdio.h>

int main(void)
{
    int choice = 0;
    int total = 0;

    do
    {
        printf("\n1. Add 10\n2. Add 25\n3. Quit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1)
            total += 10;
        else if (choice == 2)
            total += 25;

    } while (choice != 3);

    printf("Total collected = %d\n", total);

    return 0;
}
