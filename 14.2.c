/* write a program To print the given pattern.
              1
           1 2
        1 2 3
     1 2 3 4

*/
#include <stdio.h>
void main()
{
    // take an input As number of Rows.
    int n, a; // n is a number of Rows.
    printf("Enter A Number Of Rows :");
    scanf("%d", &n);

    // process of print Pattern.
    for (int R = 1; R <= n; R++)
    {
        for (int C = 1; C <= n - R; C++)
        { // print a space
            printf("  ");
        }
        a = 1; // a is a  proccesing number for print 1 , 2 ,3 , ...
        for (int C = 1; C <= R; C++)
        { // print a number 1,2,3,...
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }

    printf("\n\n24CE070_ARYAN");
}
