/*Write a program to read the marks of 10 students for the subject CEUC101
Computer concepts and Programming and computes the number of students in
categories FAIL, PASS, FIRST CLASS and DISTINCTION using Pointers and Arrays.*/
#include <stdio.h>

#define NUM_STUDENTS 10

int main()
{
    int marks[NUM_STUDENTS];
    int fail = 0, pass = 0, firstClass = 0, distinction = 0;

    // Input marks of students
    printf("Enter marks of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", (marks + i)); // Using pointer arithmetic for input
    }

    // Categorize the marks
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        if (*(marks + i) >= 70)
        { // Pointer dereferencing to access marks
            distinction++;
        }
        else if (*(marks + i) >= 60)
        {
            firstClass++;
        }
        else if (*(marks + i) >= 40)
        {
            pass++;
        }
        else
        {
            fail++;
        }
    }

    // Display the results
    printf("\n--- Marks Categories ---\n");
    printf("DISTINCTION : %d\n", distinction);
    printf("FIRST CLASS : %d\n", firstClass);
    printf("PASS        : %d\n", pass);
    printf("FAIL        : %d\n", fail);

    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");

    return 0;
}
