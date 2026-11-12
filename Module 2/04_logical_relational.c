// Program 11: logical operators (&&, ||, !)
// A student can sit for the exam only if attendance and fees are both fine.

#include <stdio.h>

int main(void)
{
    int attendance, feesPaid;

    printf("Attendance percentage: ");
    scanf("%d", &attendance);

    printf("Fees paid (1 = yes, 0 = no): ");
    scanf("%d", &feesPaid);

    if (attendance >= 75 && feesPaid == 1)
        printf("Allowed to write the exam.\n");
    else if (attendance < 75 || feesPaid == 0)
        printf("Not allowed, condition missing.\n");

    // short circuit: the right side is not evaluated when left decides
    int x = 0;
    if (x != 0 && 10 / x > 1)
        printf("never printed\n");
    else
        printf("Short circuit saved us from divide by zero.\n");

    // ! flips the truth value
    printf("!feesPaid = %d\n", !feesPaid);

    return 0;
}
