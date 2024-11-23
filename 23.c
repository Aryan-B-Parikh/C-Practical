// Documentation : Print A Fibonacci Series.

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long first = 0, second = 1, next;

    // take a Input By user.
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    // process for print Fibonacci Series.
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%llu", first);
        }
        else if (i == 1)
        {
            printf(", %llu", second);
        }
        else
        {
            next = first + second;
            printf(", %llu", next);
            first = second;
            second = next;
        }
    }
    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");

    return 0;
}
