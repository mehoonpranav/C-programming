// Program 35: Tower of Hanoi
// Classic recursion: move n-1 discs aside, move the largest, move n-1 back.

#include <stdio.h>

int moves = 0;

void hanoi(int n, char from, char to, char via)
{
    if (n == 1)
    {
        printf("Move disc 1 from %c to %c\n", from, to);
        moves++;
        return;
    }

    hanoi(n - 1, from, via, to);       // clear the way
    printf("Move disc %d from %c to %c\n", n, from, to);
    moves++;
    hanoi(n - 1, via, to, from);       // put the rest back on top
}

int main(void)
{
    int discs;

    printf("Number of discs: ");
    scanf("%d", &discs);

    hanoi(discs, 'A', 'C', 'B');

    printf("\nDone in %d moves (minimum is %d)\n", moves, (1 << discs) - 1);

    return 0;
}
