// Program 7: syntax error against semantic error
//
// A syntax error breaks the grammar, the compiler refuses to produce
// an executable at all. For example:
//
//     printf("total = %d\n", total)      <- missing semicolon
//     int 2count = 0;                    <- identifier cannot start with a digit
//     scanf("%d", number);               <- missing & on an int
//
// A semantic error is grammatically perfect but means something else.
// The program compiles, runs, and quietly gives a wrong answer.

#include <stdio.h>

int main(void)
{
    int total = 200, count = 3;

    // semantic error: integer division throws away the fraction
    float average = total / count;
    printf("Wrong average (total / count)   = %.2f\n", average);

    // corrected version
    float right = (float)total / count;
    printf("Correct average (float)total/cnt= %.2f\n", right);

    // another classic: using = instead of == inside a condition
    // the extra brackets around the assignment keep gcc quiet, without
    // them we get "suggest parentheses around assignment used as truth value"
    int marks = 0;
    if ((marks = 50))               // assigns 50, condition becomes true
        printf("\nmarks = 50 was an assignment, not a comparison\n");
    printf("marks is now %d\n", marks);

    return 0;
}
