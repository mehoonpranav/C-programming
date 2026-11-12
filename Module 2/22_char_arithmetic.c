// Program 29: arithmetic on characters and string input
// Characters are small integers, so we can do arithmetic on them.
// fgets() reads a whole line including spaces.

#include <stdio.h>

int main(void)
{
    char line[100];
    int i, vowels = 0, digits = 0, spaces = 0;

    printf("Type a sentence: ");
    fgets(line, sizeof(line), stdin);       // keeps the newline, that is fine

    // count first, the line still has its original case here
    for (i = 0; line[i] != '\0'; i++)
    {
        char c = line[i];

        if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;

        // accept both cases, otherwise a capital A is missed
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vowels++;
    }

    // now flip the case with character arithmetic, no library needed
    for (i = 0; line[i] != '\0'; i++)
    {
        if (line[i] >= 'a' && line[i] <= 'z')
            line[i] = line[i] - 32;         // to upper case
        else if (line[i] >= 'A' && line[i] <= 'Z')
            line[i] = line[i] + 32;         // to lower case
    }

    printf("Case flipped : %s", line);
    printf("Vowels       : %d\n", vowels);
    printf("Digits       : %d\n", digits);
    printf("Spaces       : %d\n", spaces);

    return 0;
}
