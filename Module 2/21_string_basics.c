// Program 28: string declaration, initialization and I/O
// A string in C is a char array ending with the null character '\0'.

#include <stdio.h>
#include <string.h>

int main(void)
{
    // three ways to initialize
    char name[] = "Meera";
    char city[20] = "Chennai";
    char last[20] = {'R', 'a', 'o', '\0'};

    printf("name  : %s\n", name);
    printf("city  : %s\n", city);
    printf("last  : %s\n", last);

    // sizeof counts the '\0', strlen does not
    printf("\nsizeof(name) = %zu\n", sizeof(name));
    printf("strlen(name) = %zu\n", strlen(name));

    // reading a single word with scanf
    char food[30];
    printf("\nFavourite food (one word): ");
    scanf("%29s", food);            // width limit avoids overflow
    printf("You like %s\n", food);

    // printing character by character until the null terminator
    printf("\nCharacter by character: ");
    int i = 0;
    while (name[i] != '\0')
    {
        printf("[%c] ", name[i]);
        i++;
    }
    printf("\n");

    return 0;
}
