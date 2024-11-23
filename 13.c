/* Documentation :Write a C program to generate and display a multiplication table based on user
inputs.
*/
#include <stdio.h>
void main()
{
    int Rows, Colums, a = 1; // a is  a Multiplication Unit.

    // Process Of Take Input By the User.
    printf("Enter A Number Of Rows :");
    scanf("%d", &Rows);
    printf("Enter A Number Of Colums :");
    scanf("%d", &Colums);

    // Process To Generate And Print the Multiplication Table.
    for (int i = 1; i <= Rows; i++)
    {
        a = 1;
        a = a * i;
        for (int j = 1; j <= Colums; j++)
        {
            printf("%2d  ", a);
            a = a + i;
        }
        printf("\n");
    }
    printf("\n24CE070_ARYAN");
}
