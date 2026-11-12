// Program 30: string library functions from <string.h>
// Manual versions are written beside the library calls so the working is visible.

#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[50] = "Programming";
    char b[50] = " in C";
    char copy[50];

    printf("strlen(a)      = %zu\n", strlen(a));
    printf("strcmp(a, b)   = %d\n", strcmp(a, b));

    strcpy(copy, a);                    // copy a into copy
    printf("After strcpy   : %s\n", copy);

    strcat(copy, b);                    // join b at the end of copy
    printf("After strcat   : %s\n", copy);

    printf("strchr(copy,'C') -> %s\n", strchr(copy, 'C'));
    printf("strstr(copy,\"in\") -> %s\n", strstr(copy, "in"));

    // manual strlen, stop at the null character
    int len = 0;
    while (a[len] != '\0')
        len++;
    printf("\nManual strlen(a) = %d\n", len);

    // manual strcmp, returns the first difference
    char x[] = "apple", y[] = "apply";
    int i = 0;
    while (x[i] == y[i] && x[i] != '\0')
        i++;
    printf("Manual strcmp(\"%s\",\"%s\") = %d\n", x, y, x[i] - y[i]);

    return 0;
}
