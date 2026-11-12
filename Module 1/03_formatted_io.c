// Program 3: formatted input and output with scanf() and printf()
// The format string decides how the value is converted.

#include <stdio.h>

int main(void)
{
    int    age;
    float  height;
    char   initial;

    printf("Enter your initial, age and height: ");
    // note the space before %c, it skips the leftover newline
    scanf(" %c %d %f", &initial, &age, &height);

    printf("\n--- Student record ---\n");
    printf("Initial : %c\n", initial);
    printf("Age     : %d years\n", age);
    printf("Height  : %.2f m\n", height);

    // field width and alignment
    printf("\n|%10s|%-10s|\n", "right", "left");
    printf("|%10.3f|%-10.3f|\n", height, height);

    return 0;
}
