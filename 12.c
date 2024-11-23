/* A company organizes events on even days of the month, from day 1 to day 100. The management wants to calculate the total budget allocated for these events. Each even day costs 200 Rs. Write a C program to compute the total budget allocated for all even-day events.
 */
#include <stdio.h>
void main()
{
    // initialization of Budget.
    int Budget = 200, a = 0;

    // process of Count Even Days.
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            a++; // a is one of the processing Unit Which Is Count A Even Days.
        }
    }
    a = a * 200;

    // print Total Budget.
    printf("Your Total Budget is : Rs %d", a);
    printf("\n\n24CE070_ARYAN");
}
