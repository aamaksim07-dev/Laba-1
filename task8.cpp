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
    int i = 0;
    struct student stud[3];

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

    printf("\nStudent list:\n");
    i = 0;
    while (i < 3)
    {
        printf("%d. %s %s, faculty %s, record %d\n",
            i + 1, stud[i].famil, stud[i].name,
            stud[i].facult, stud[i].nomzach);
        i++;
    }
}