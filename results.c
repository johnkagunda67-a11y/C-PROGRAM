// STUDENT EXAM RESULTS
#include <stdio.h>

struct Student
{
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main()
{
    struct Student s;
    FILE *fp = fopen("results.dat", "rb");

    if (fp == NULL)
    {
        printf("Error: results.dat not found.\n");
        return 1;
    }

    printf("%-25s %s\n", "Name", "Marks");
    while (fread(&s, sizeof(struct Student), 1, fp) == 1)
        printf("%-25s %.1f\n", s.name, s.totalMarks);

    fclose(fp);
    return 0;
}
