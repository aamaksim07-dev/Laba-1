#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
    int n, m, i = 0, j = 0;
    int a[100][100];
    int sum;

    printf("Enter rows: ");
    scanf("%d", &n);
    printf("Enter columns: ");
    scanf("%d", &m);

    printf("Enter matrix:\n");
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            j++;
        }
        i++;
    }

    printf("\nMatrix:\n");
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < m)
        {
            printf("%d ", a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\nSum by columns:\n");
    j = 0;
    while (j < m)
    {
        sum = 0;
        i = 0;
        while (i < n)
        {
            sum = sum + a[i][j];
            i++;
        }
        printf("Column %d: %d\n", j + 1, sum);
        j++;
    }
}