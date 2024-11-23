#include <stdio.h>
#include <string.h>
int main()
{
    char names[5][50]; // 2d Array for store A Names Of 5 Students.
    char temp[50];
    int i, j;

    // Collect Five Students Names.
    for (i = 0; i < 5; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    // Sorting Process.
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                // Swap names[j] and names[j + 1]
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    // Sorted list Of Name.
    printf("\nSorted names:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }
    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");
    return 0;
}

