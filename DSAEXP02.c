#include <stdio.h>
void insert(int a[], int *n, int pos, int value)
{
    int i;
    for(i = *n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = value;
    *n = *n + 1;
}
void delete(int a[], int *n, int pos)
{
    int i;
    for(i = pos; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
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
