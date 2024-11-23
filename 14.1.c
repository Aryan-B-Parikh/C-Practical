/* Write A Program for Print The Given Pattern :
     1
     1 0
     1 0 1
     1 0 1 0
*/
#include <stdio.h>
void main()
{
    // take input As number of Rows.
    int n; // n is a number of Rows.
    printf("Enter A Number Of Rows :");
    scanf("%d", &n);

    // process of print Given pattern.

    for (int R = 1; R <= n; R++)
    {
        for (int C = 1; C <= R; C++)
        {
            if (C % 2 == 0)
            { // when collum is even print 0.
                printf("0 ");
            }
            else
            { // when collum is odd print 1.
                printf("1 ");
            }
        }
        printf("\n");
    }
    printf("\n24CE070_ARYAN");
}

