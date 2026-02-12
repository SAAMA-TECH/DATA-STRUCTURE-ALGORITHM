#include <stdio.h>

/* Function to INSERT an element */
void insert(int a[], int *n, int pos, int value)
{
    int i;

    // Step 1: Move elements one step to the right
    for(i = *n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    // Step 2: Put new value at given position
    a[pos] = value;

    // Step 3: Increase size
    *n = *n + 1;
}

/* Function to DELETE an element */
void delete(int a[], int *n, int pos)
{
    int i;

    // Step 1: Move elements one step to the left
    for(i = pos; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Step 2: Decrease size
    *n = *n - 1;
}

int main()
{
    int a[10] = {10, 20, 30, 40};
    int n = 4;
    int i;

    printf("Original array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    insert(a, &n, 2, 25);

    printf("\n\nAfter insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    delete(a, &n, 1);

    printf("\n\nAfter deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}