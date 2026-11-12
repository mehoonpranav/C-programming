// Program 9: assignment operators, comma operator and precedence
// Shows why 2 + 3 * 4 is not 20.

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b, c, d;

    a += 5;    printf("a += 5  -> %d\n", a);
    a -= 3;    printf("a -= 3  -> %d\n", a);
    a *= 2;    printf("a *= 2  -> %d\n", a);
    a /= 4;    printf("a /= 4  -> %d\n", a);
    a %= 5;    printf("a %%= 5  -> %d\n", a);

    // precedence: * and / bind tighter than +
    int result = 2 + 3 * 4;
    printf("\n2 + 3 * 4 = %d\n", result);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);

    // comma operator runs left to right, value is the last one
    b = (c = 5, c + 2);
    printf("\nb = (c = 5, c + 2) -> b = %d, c = %d\n", b, c);

    d = (b = 3, c = b + 4, c * 2);
    printf("d = (b = 3, c = b + 4, c * 2) -> b = %d, c = %d, d = %d\n", b, c, d);

    return 0;
}
