// Develop A countdown timer which is take a input as second(number) and show output as decreasing a number.
// Header File.
#include <stdio.h>
void main()
{

    // take a input as second.

    int s; // s is a second

    // Take a Input By User.
    printf("Enter A Time (in second) :");
    scanf("%d", &s);

    // using the loop show output countdown timer.
    for (int i = s; i >= 0; i--)
    {
        sleep(printf("\n%d", i)); // i is a Intialization.
    }
    printf("\nCountDown Over!...");

    printf("\n\n\n24CE070_ARYAN");

    printf("\n________________________________________________");
}
