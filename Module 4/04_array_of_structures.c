// Program 48: array of structures
// The usual way to keep a small table of records in memory.

#include <stdio.h>
#include <string.h>

struct Student
{
    int   roll;
    char  name[30];
    float marks;
};

int main(void)
{
    struct Student cls[5] = {
        {1, "Aarav",  78.5f},
        {2, "Bhavna", 88.0f},
        {3, "Chetan", 56.0f},
        {4, "Divya",  92.5f},
        {5, "Eshan",  64.0f}
    };
    int n = 5, i;
    int topper = 0;
    float total = 0;

    printf("%-5s %-10s %6s\n", "ROLL", "NAME", "MARKS");
    for (i = 0; i < n; i++)
    {
        printf("%-5d %-10s %6.1f\n",
               cls[i].roll, cls[i].name, cls[i].marks);
        total += cls[i].marks;
        if (cls[i].marks > cls[topper].marks)
            topper = i;
    }

    printf("\nClass average : %.2f\n", total / n);
    printf("Topper        : %s with %.1f\n", cls[topper].name, cls[topper].marks);

    // searching the array by name
    char key[30];
    printf("\nSearch name: ");
    scanf("%29s", key);

    for (i = 0; i < n; i++)
    {
        if (strcmp(cls[i].name, key) == 0)
        {
            printf("Found roll %d, marks %.1f\n", cls[i].roll, cls[i].marks);
            break;
        }
    }
    if (i == n)
        printf("%s is not in this class\n", key);

    return 0;
}
