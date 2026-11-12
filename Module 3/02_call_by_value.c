// Program 32: call by value
// The function gets copies of the arguments, so the originals stay untouched.

#include <stdio.h>

void tryToChange(int x)
{
    x = x + 100;
    printf("Inside function, x = %d\n", x);
}

int main(void)
{
    int num = 10;

    printf("Before call, num = %d\n", num);
    tryToChange(num);
    printf("After call,  num = %d\n", num);   // still 10

    return 0;
}
