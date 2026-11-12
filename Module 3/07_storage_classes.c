// Program 37: storage classes, auto, register and static
// auto is the default for block variables, register is only a request,
// static keeps a local alive for the whole run of the program.

#include <stdio.h>

int nextToken(void)
{
    static int token = 100;     // initialized once, not on every call
    token = token + 10;
    return token;
}

void plainCounter(void)
{
    int count = 0;              // auto, recreated and reset each call
    count++;
    printf("plainCounter sees count = %d\n", count);
}

int main(void)
{
    register int i;             // hint to keep i in a CPU register
    int sum = 0;

    printf("Token numbers from a static local:\n");
    for (i = 0; i < 3; i++)
        printf("  %d\n", nextToken());

    printf("\nThree calls to plainCounter:\n");
    plainCounter();
    plainCounter();
    plainCounter();

    for (i = 1; i <= 100; i++)
        sum += i;
    printf("\nSum 1..100 = %d\n", sum);

    return 0;
}
