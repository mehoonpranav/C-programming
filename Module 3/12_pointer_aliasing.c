// Program 42: pointer aliasing
// Two or more pointers can point at the same object, that is an alias.
// Writing through one is visible through the other.

#include <stdio.h>

int main(void)
{
    int balance = 5000;
    int *account = &balance;
    int *wallet  = &balance;        // wallet is an alias of account

    printf("Start balance   : %d\n", balance);

    *account -= 1500;               // withdraw through one alias
    printf("After account   : %d\n", balance);
    printf("Seen via wallet : %d\n", *wallet);

    *wallet += 200;                 // deposit through the other
    printf("After wallet    : %d\n", *account);

    // both pointers hold the same address
    printf("\naccount == wallet ? %s\n", account == wallet ? "yes" : "no");

    // changing where one points does not move the other
    int savings = 900;
    wallet = &savings;
    printf("After re-point  : account=%d wallet=%d\n", *account, *wallet);

    return 0;
}
