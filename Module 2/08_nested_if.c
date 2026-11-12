// Program 15: nested if-else
// Decide the loan category using age and monthly income.

#include <stdio.h>

int main(void)
{
    int age, income;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%d", &income);

    if (age >= 18)
    {
        if (income >= 40000)
            printf("Loan approved with premium card\n");
        else if (income >= 20000)
            printf("Loan approved with normal card\n");
        else
            printf("Loan rejected, income too low\n");
    }
    else
    {
        printf("Applicant must be 18 or older\n");
    }

    return 0;
}
