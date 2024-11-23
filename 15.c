/*Consider a situation where a user needs to analyze a set of numbers they input into a system. Imagine a data entry operator who inputs 25 different numbers via the keyboard. The goal is to develop a C program that processes these numbers to determine specific characteristics: how many of the numbers are positive, how many are negative, how many are even, and how many are odd.
 */
#include <stdio.h>
void main()
{
    // initialization of Array and four condition helping variables.
    int arr[25], a = 0, b = 0, c = 0, d = 0;

    // Loop for Distributes All numbers.
    for (int i = 0; i < 25; i++)
    {
        printf("Enter A Number %d: ",i+1);
        scanf("%d", &arr[i]);

        if (arr[i] >= 0)
        {
            a++; // a is count Positive Numbers.
        }
        else
        {
            b++; // b is count Negative Numbers.
        }
        if (arr[i] % 2 == 0)
        {
            c++; // c is count Even Numbers.
        }
        else
        {
            d++; // d is count Odd Numbers.
        }
    }

    // print all things which is given in question.
    printf("\n%d Numbers Are Positive.", a);
    printf("\n%d Numbers Are Negative.", b);
    printf("\n%d Number Are Even", c);
    printf("\n%d Number Are Odd", d);

    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");
}
