#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
    char famil[20];
    char name[20];
    char facult[20];
    int nomzach;
};

void main(void)
{
    struct student stud[3];
    int i = 0;
    int search;
    int found = 0;

    while (i < 3)
    {
        printf("Student #%d:\n", i + 1);
        printf("  Last name: ");
        scanf("%s", stud[i].famil);
        printf("  First name: ");
        scanf("%s", stud[i].name);
        printf("  Faculty: ");
        scanf("%s", stud[i].facult);
        printf("  Record book: ");
        scanf("%d", &stud[i].nomzach);
        printf("\n");
        i++;
    }

    printf("Enter record book number to search: ");
    scanf("%d", &search);

    i = 0;
    while (i < 3)
    {
        if (stud[i].nomzach == search)
        {
            printf("\nSTUDENT FOUND!\n");
            printf("  Last name: %s\n", stud[i].famil);
            printf("  First name: %s\n", stud[i].name);
            printf("  Faculty: %s\n", stud[i].facult);
            printf("  Record book: %d\n", stud[i].nomzach);
            found = 1;
        }
        i++;
    }

    if (!found)
    {
        printf("\nStudent not found!\n");
    }
}