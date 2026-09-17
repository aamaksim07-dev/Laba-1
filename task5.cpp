#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char famil[20];
    char name[20];
    char facult[20];
    int nomzach;
};

void main(void)
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student* stud = (struct student*)malloc(n * sizeof(struct student));
    if (stud == NULL) {
        printf("Memory allocation error!\n");
        return;
    }

    for (i = 0; i < n; i++) {
        printf("\nStudent #%d:\n", i + 1);
        printf("  Last name: ");
        scanf("%s", stud[i].famil);
        printf("  First name: ");
        scanf("%s", stud[i].name);
        printf("  Faculty: ");
        scanf("%s", stud[i].facult);
        printf("  Record book: ");
        scanf("%d", &stud[i].nomzach);
    }

    char search[20];
    printf("\nEnter surname to search (partial): ");
    scanf("%s", search);

    int found = 0;
    for (i = 0; i < n; i++) {
        if (strstr(stud[i].famil, search) != NULL) {
            printf("\nStudent found:\n");
            printf("  Last name: %s\n", stud[i].famil);
            printf("  First name: %s\n", stud[i].name);
            printf("  Faculty: %s\n", stud[i].facult);
            printf("  Record book: %d\n", stud[i].nomzach);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo students found with surname containing '%s'.\n", search);
    }

    free(stud);
}