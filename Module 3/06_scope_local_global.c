// Program 36: scope of variables, local against global
// Also shows how a local variable hides a global one with the same name.

#include <stdio.h>

int counter = 0;        // global, visible to every function below

void bump(void)
{
    counter++;          // no declaration needed here
}

void showShadow(void)
{
    int counter = 99;   // local shadows the global inside this block only
    printf("Inside showShadow, counter = %d\n", counter);
}

int main(void)
{
    int local = 5;

    printf("Global counter starts at %d\n", counter);

    bump();
    bump();
    bump();

    printf("After three bumps   : %d\n", counter);

    showShadow();
    printf("Global still intact : %d\n", counter);

    // a block can have its own variable with the same name
    {
        int local = 50;
        printf("\nInner block local   : %d\n", local);
    }
    printf("Outer local         : %d\n", local);

    return 0;
}
