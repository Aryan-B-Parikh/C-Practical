/*Verify whether three given lengths can form a triangle. If they do, the program should then calculate the area of the triangle using Heron's formula. The program should use nested functions to accomplish this. Specifically, the program should:
1. Collect the lengths of the three sides of the triangle from the user.
2. Verify whether the given lengths can form a triangle.
3. If the lengths form a valid triangle, calculate the area of the triangle using
Heron's formula.
4. Display the result to the user.
*/

#include <stdio.h>
#include <math.h>

// Function Declaration.
int ValidTriangle(float a, float b, float c);
float Area(float a, float b, float c);

void main()
{
    float a, b, c; // a b and c is a variables for Tringle's Sides.

    // Input A triangl's Sides for User.
    printf("\nEnter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &a);
    printf("Side 2: ");
    scanf("%f", &b);
    printf("Side 3: ");
    scanf("%f", &c);

    // Check The Inputed Sides Is Makes A triangle.
    if (ValidTriangle(a, b, c))
    {
        // Calculating the area
        float area = Area(a, b, c);
        printf("The area of the triangle is: %f\n", area);
    }
    else
    {
        printf("The given lengths cannot form a triangle.\n");
    }
    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");
}
int ValidTriangle(float a, float b, float c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

float Area(float a, float b, float c)
{
    float s = (a + b + c) / 2;                    // Semi perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
}

