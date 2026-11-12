// Program 38 (part 2): extern demo, main file
// extern says "this exists somewhere else, the linker will find it".

#include <stdio.h>

extern int sharedCount;     // declared, not defined
void increment(void);       // defined in counter.c

int main(void)
{
    printf("Start  : %d\n", sharedCount);

    increment();
    increment();
    increment();

    printf("After  : %d\n", sharedCount);
    return 0;
}
