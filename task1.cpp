#include <stdio.h>

void main(void)
{
    int a[10] = {15, 3, 8, 22, 7, 11, 4, 19, 2, 13};
    int min = a[0], max = a[0];
    int i = 1;

    while (i < 10)
    {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
        i++;
    }

    printf("Array: ");
    i = 0;
    while (i < 10) printf("%d ", a[i++]);

    printf("\nMin: %d\n", min);
    printf("Max: %d\n", max);
    printf("Difference: %d\n", max - min);
}