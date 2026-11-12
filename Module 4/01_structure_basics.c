// Program 45: defining, declaring and initializing a structure
// A structure groups different types under one name.

#include <stdio.h>

struct Student
{
    int   roll;
    char  name[30];
    float cgpa;
    char  section;
};                              // the semicolon here is compulsory

int main(void)
{
    // one variable, members listed in order
    struct Student s1 = {101, "Ananya", 8.45f, 'B'};

    // designated style, clearer when the member list grows
    struct Student s2 = {
        .roll = 102,
        .name = "Karthik",
        .cgpa = 7.90f,
        .section = 'A'
    };

    printf("Student 1\n");
    printf("  roll    : %d\n", s1.roll);
    printf("  name    : %s\n", s1.name);
    printf("  cgpa    : %.2f\n", s1.cgpa);
    printf("  section : %c\n", s1.section);

    printf("\nStudent 2\n");
    printf("  roll    : %d\n", s2.roll);
    printf("  name    : %s\n", s2.name);
    printf("  cgpa    : %.2f\n", s2.cgpa);
    printf("  section : %c\n", s2.section);

    // whole structure can be copied with a single assignment
    struct Student s3 = s1;
    printf("\nCopy of student 1: %s (roll %d)\n", s3.name, s3.roll);

    printf("\nSize of struct Student = %zu bytes\n", sizeof(struct Student));

    return 0;
}
