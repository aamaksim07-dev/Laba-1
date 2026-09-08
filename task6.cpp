#include <stdio.h>

void main(void)
{
    int n = 10, i = 0;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    while (i < n)
    {
        printf("%d ", a[i]);
        i++;
    }
}