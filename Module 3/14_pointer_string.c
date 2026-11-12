// Program 44: pointers and strings
// A string literal can be scanned with a char pointer, but not modified.

#include <stdio.h>

int stringLength(const char *s)
{
    const char *start = s;
    while (*s != '\0')
        s++;
    return (int)(s - start);        // pointer difference gives the length
}

void copyString(char *dest, const char *src)
{
    while ((*dest = *src) != '\0')
    {
        dest++;
        src++;
    }
}

int main(void)
{
    char message[] = "pointers are fun";
    char backup[40];
    char *p = message;
    int vowels = 0;

    printf("Message : %s\n", message);
    printf("Length  : %d\n", stringLength(message));

    copyString(backup, message);
    printf("Backup  : %s\n", backup);

    // scan with a pointer and count vowels
    for (p = message; *p != '\0'; p++)
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
            vowels++;
    }
    printf("Vowels  : %d\n", vowels);

    // character at a position, two ways
    printf("\nmessage[3]  = %c\n", message[3]);
    printf("*(message+3)= %c\n", *(message + 3));

    return 0;
}
