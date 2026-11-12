// Program 16: switch statement
// A menu driven calculator. Works only with integer or char cases.

#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("Enter expression (example 12 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("= %d\n", a + b);
            break;
        case '-':
            printf("= %d\n", a - b);
            break;
        case '*':
            printf("= %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("= %d\n", a / b);
            else
                printf("Division by zero is not allowed\n");
            break;
        default:
            printf("Unknown operator %c\n", op);
    }

    return 0;
}
