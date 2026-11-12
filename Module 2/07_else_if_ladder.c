// Program 14: else-if ladder
// Grade calculator, each condition is checked top to bottom.

#include <stdio.h>

int main(void)
{
    float marks;

    printf("Enter marks out of 100: ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks\n");
    else if (marks >= 90)
        printf("Grade O\n");
    else if (marks >= 80)
        printf("Grade A+\n");
    else if (marks >= 70)
        printf("Grade A\n");
    else if (marks >= 60)
        printf("Grade B+\n");
    else if (marks >= 50)
        printf("Grade B\n");
    else if (marks >= 40)
        printf("Grade C\n");
    else
        printf("Grade F, reappear\n");

    return 0;
}
