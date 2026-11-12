// Program 47: structure inside a structure
// The inner structure is a member like any other, accessed with two dots.

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int         id;
    char        name[30];
    struct Date joined;         // nested structure
    float       salary;
};

int main(void)
{
    struct Employee e1 = {
        201,
        "Divya",
        {14, 6, 2021},          // inner initializer in its own braces
        56000.0f
    };

    struct Employee e2;
    e2.id = 202;
    e2.joined.day = 3;
    e2.joined.month = 1;
    e2.joined.year = 2024;

    printf("Employee 1\n");
    printf("  id     : %d\n", e1.id);
    printf("  name   : %s\n", e1.name);
    printf("  joined : %02d-%02d-%d\n",
           e1.joined.day, e1.joined.month, e1.joined.year);
    printf("  salary : %.2f\n", e1.salary);

    printf("\nEmployee 2 joined %d, same department\n", e2.joined.year);

    // years of service, simple arithmetic on a nested member
    int currentYear = 2026;
    printf("Years with company : %d\n", currentYear - e1.joined.year);

    return 0;
}
