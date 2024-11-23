/* Store manager needs to sort the prices of items in inventory to prepare a report.
The prices are initially listed in an unordered manner, and sorting them in
ascending order will facilitate easier analysis and decision-making regarding
pricing strategies and stock management.
*/
#include <stdio.h>
void main()
{
    int no_of_items, i, j;

    printf("Enter a Number Of Items :");
    scanf("%d", &no_of_items);

    float prices[no_of_items];

    printf("\n");
    printf("\nEnter Only price Of Product :\n");
    // process of Take a Prices.
    for (i = 0; i < no_of_items; i++)
    {
        printf("Enter A %d item :", i + 1);
        scanf("%f", &prices[i]);
    }
    float temp = 0;
    // process of Sorting A Given Prices.
    for (i = 0; i < no_of_items - 1; i++)
    {
        for (j = 0; j < no_of_items - i - 1; j++)
        {
            if (prices[j] > prices[j + 1])
            {
                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }
    printf("\n_______________________________________________________\n");
    // Process Of Print The Sort Prices.
    printf("Shortlist Of Item's Prices :");
    printf("\n");
    for (i = 0; i < no_of_items; i++)
    {
        printf("%f\n", prices[i]);
    }
    printf("\n_______________________________________________________\n");
    printf("\n\n24CE070_ARYAN");
}

