// Program 4: unformatted character I/O
// getchar() and putchar() move one character at a time, no format string.

#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;

    printf("Type a line, press Enter to finish:\n");

    // getchar() returns int so that EOF can be detected
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        count++;
        putchar(ch);        // echo the character back
    }

    putchar('\n');
    printf("You typed %d characters.\n", count);

    // gets() is not used anywhere because it cannot limit the input length
    return 0;
}
