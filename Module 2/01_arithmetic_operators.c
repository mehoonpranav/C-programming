// Program 8: arithmetic and relational operators
// A small billing example: find total, then compare with the budget.

#include <stdio.h>

int main(void)
{
    int qty = 3;
    float price = 249.50;
    float total, discount;

    total = qty * price;              // multiply
    discount = total * 0.10f;         // 10 percent off

    printf("Total    : %.2f\n", total);
    printf("Discount : %.2f\n", discount);
    printf("Payable  : %.2f\n", total - discount);

    // remainder only works on integers
    printf("\nqty %% 2 = %d\n", qty % 2);

    // relational operators give 1 for true and 0 for false
    printf("total > 500 ? %d\n", total > 500);
    printf("qty == 3    ? %d\n", qty == 3);
    printf("price < 200 ? %d\n", price < 200);

    return 0;
}
