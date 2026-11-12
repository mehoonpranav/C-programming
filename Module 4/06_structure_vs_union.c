// Program 50: structure against union, side by side
// Same members, very different memory layout.

#include <stdio.h>
#include <string.h>

struct SRecord
{
    int  id;
    char code[16];
    float amount;
};

union URecord
{
    int  id;
    char code[16];
    float amount;
};

int main(void)
{
    struct SRecord s;
    union  URecord u;

    printf("struct size = %zu bytes\n", sizeof(struct SRecord));
    printf("union  size = %zu bytes\n", sizeof(union URecord));
    printf("Sum of members = %zu bytes\n\n",
           sizeof(int) + sizeof(char[16]) + sizeof(float));

    // in a structure all three live together
    s.id = 7;
    strcpy(s.code, "INV7");
    s.amount = 1250.75f;

    printf("Structure\n");
    printf("  id     : %d\n", s.id);
    printf("  code   : %s\n", s.code);
    printf("  amount : %.2f\n", s.amount);

    // in a union the last write wins, the earlier ones are destroyed
    u.id = 7;
    strcpy(u.code, "INV7");
    u.amount = 1250.75f;

    printf("\nUnion (only amount survives)\n");
    printf("  amount : %.2f\n", u.amount);
    printf("  id now : %d  <- meaningless\n", u.id);

    return 0;
}
