#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int n, i = 0;
    int* a;

    printf("Enter array size: ");
    scanf("%d", &n);

    a = (int*)malloc(n * sizeof(int));

    if (a == NULL)
    {
        printf("Memory allocation error!\n");
        return;
    }

    printf("Enter %d elements:\n", n);
    while (i < n)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        i++;
    }

    printf("Array: ");
    i = 0;
    while (i < n)
    {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    free(a);
}