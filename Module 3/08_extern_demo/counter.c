// Program 38 (part 1): extern demo
// The variable and the function really live here.
// Build:  gcc main.c counter.c -o extern_demo

int sharedCount = 0;        // definition, one copy in the whole program

void increment(void)
{
    sharedCount++;
}
