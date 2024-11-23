// Made a Financial calculator which is calculate Basic calculations Individual like Addition, Subtraction, Multiplication And Division.

// Header File.
#include <stdio.h>
void main()
{

    // Variable Declaration
    float fv, sv;
    int op; // here fv is first value , sv is second value , op is oprator.

    // Take a Input By User
    printf("Enter A first Value :");
    scanf("%f", &fv);
    printf("\nEnter A second Value :");
    scanf("%f", &sv);
    printf("\nFollow This :\n1 is Addition(+)\n2 is Subtraction(-)\n3 is Multiplication(*)\n4 is Division(/)\n");

    // Take a input As Oprator Number.
    printf("Enter Your Oprator Number :");
    scanf("%d", &op);

    // Using switch statement show output As calculate Number.
    switch (op)
    {
    case 1: // Addition of two Values.
        printf("\nYour Addition is : %f", fv + sv);
        break;

    case 2: // Subtraction of two Values.
        printf("\nYour Subtraction is : %f", fv - sv);
        break;

    case 3: // Munltiplication of two Values.
        printf("\nYour Multiplication is : %f", fv * sv);
        break;

    case 4: // division of two Values
        printf("\nYour Division is : %f", fv / sv);
        break;

    default: // when Enter a invalid input while this statement is Run.
        printf("\nINVALID INPUT !...\nPlease Enter A Valid Input.");
    }
    printf("\n\n24CE070_ARYAN");
}
