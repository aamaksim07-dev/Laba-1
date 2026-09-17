#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
    int rows, cols;
    int i, j;
    int count = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int** a = (int**)malloc(rows * sizeof(int*));
    if (a == NULL) {
        printf("Memory allocation error!\n");
        return;
    }
    for (i = 0; i < rows; i++) {
        a[i] = (int*)malloc(cols * sizeof(int));
        if (a[i] == NULL) {
            printf("Memory allocation error!\n");
            return;
        }
    }

    srand(time(NULL));

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            a[i][j] = rand() % 31 - 10;
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d ", a[i][j]);
            if (a[i][j] != 0) count++;
        }
        printf("\n");
    }

    printf("\nNumber of non-zero elements: %d\n", count);

    for (i = 0; i < rows; i++) {
        free(a[i]);
    }
    free(a);
}