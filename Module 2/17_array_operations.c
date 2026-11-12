// Program 24: common operations on a 1-D array
// Reading n values, reversing them and searching for a key.

#include <stdio.h>

int main(void)
{
    int a[50], n, i, key, pos = -1, temp;

    printf("Number of elements (max 50): ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // reverse in place using two moving indices
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    // linear search, stops at the first match
    printf("Search for: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("%d not found\n", key);
    else
        printf("%d found at index %d\n", key, pos);

    return 0;
}
