// TOPIC : Take Student's Marks As Input And Display The Corresponding Grade As Output.
// Header File...
#include <stdio.h>
void main()
{

    // Enter A student marks as input and get a Grade as Output.

    int m; // m is marks.
    printf("Enter A Student Marks (range 0-100) : ");
    scanf("%d", &m);
    // if marks is between or Equal to 100 and 90 then Execute This.
    if (m <= 100 && m >= 90)
    {
        printf("Congrats!\nGrade A");
    }
    // if marks is between or Equal to 90 and 80 then Execute This.
    else if (m >= 80 && m < 90)
    {
        printf("Good\nGrade B");
    }
    // if marks is between or Equal to 80 and 70 then Execute This.
    else if (m >= 70 && m < 80)
    {
        printf("Good\nGrade c");
    }
    // if marks is between or Equal to 70 and 60 then Execute This.
    else if (m >= 60 && m < 70)
    {
        printf("Grade D");
    }
    // if marks is LessThan 60 then Execute This.
    else if (m < 60)
    {
        printf("Grade F\nBetter Luck Next Time...");
    }
    // If User Enter Anyone Value Out Of Range then Execute This.
    else
    {
        printf("INVALID MARKS !!\nPlease Enter Your Marks Range of 0 to 100");
    }
    printf("\n________________________________________________________________");
    printf("\n\n24CE070_ARYAN");
}

