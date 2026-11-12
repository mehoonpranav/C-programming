// Program 51: enumeration
// enum gives names to a set of integer constants.

#include <stdio.h>

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

// values can be chosen explicitly
enum Status { PENDING = 10, RUNNING, DONE = 20, FAILED };

int main(void)
{
    enum Day today = WED;
    enum Status job = DONE;
    int i;

    printf("enum Day starts at 0:\n");
    for (i = MON; i <= SUN; i++)
        printf("  %d\n", i);

    printf("\nWED = %d\n", today);
    printf("SUN = %d\n\n", SUN);

    printf("Explicit values: PENDING=%d RUNNING=%d DONE=%d FAILED=%d\n",
           PENDING, RUNNING, DONE, FAILED);

    printf("\nSwitch works naturally with enum:\n");
    switch (job)
    {
        case PENDING: printf("Still queued\n");       break;
        case RUNNING: printf("In progress\n");        break;
        case DONE:    printf("Finished successfully\n"); break;
        case FAILED:  printf("Something went wrong\n"); break;
    }

    // arrays can be indexed by enum, useful for lookups
    const char *names[] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                           "Friday", "Saturday", "Sunday"};
    printf("\nToday is %s\n", names[today]);

    printf("\nsizeof(enum Day) = %zu bytes\n", sizeof(enum Day));

    return 0;
}
