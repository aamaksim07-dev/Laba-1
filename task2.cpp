#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(void)
{
    setlocale(LC_ALL, "Russian");

    int n = 10, i = 0;
    int a[10];

    srand(time(NULL));

    while (i < n)
    {
        a[i] = rand() % 100;
        i++;
    }

    printf("Случайные числа:");
    i = 0;
    while (i < n)
        printf(" %d", a[i++]);
}