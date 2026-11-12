// Program 43: call by reference
// Passing addresses lets the function change the caller's variables.

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// a function returning two results through pointers
void minMax(int arr[], int n, int *min, int *max)
{
    int i;
    *min = *max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main(void)
{
    int x = 12, y = 45;
    int data[] = {34, 7, 89, 21, 56};
    int small, big;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap : x = %d, y = %d\n", x, y);

    minMax(data, 5, &small, &big);
    printf("\nSmallest = %d\nLargest  = %d\n", small, big);

    return 0;
}
