/*Display the seating arrangement in theatre using C program. The theater has a fixed
number of rows and seats per row. Create a seating chart where each seat is
identified by its row and seat number. Additionally, the program should allow the
user to mark certain seats as reserved. The seating chart should be displayed with
indicators showing which seats are reserved and which are available.
*/
#include <stdio.h>
int main()
{
    char seats[5][5];

    // Initialize the seating chart with '0' for All seats
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            seats[i][j] = '0';
        }
    }

    int choice, row, seat;

    do
    {
        // Display Seating Arrangement.
        printf("\n");
        printf("Choice :");
        printf("\n1. Seating Chart Of Theater\n");
        printf("2. Reserve a Seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Display the seating chart
            printf("Seating Chart:\n");
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("%c ", seats[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            // Reserve a seat (book a Seat)
            printf("Enter Row (1 to %d): ", 5);
            scanf("%d", &row);
            printf("Enter Seat (1 to %d): ", 5);
            scanf("%d", &seat);

            // Adjust Seating Arrangement.
            if (row > 0 && row <= 5 && seat > 0 && seat <= 5)
            {
                if (seats[row - 1][seat - 1] == 'X')
                {
                    printf("Seat at Row %d, Seat %d is already reserved!\n", row, seat);
                }
                else
                {
                    seats[row - 1][seat - 1] = 'X'; // Mark the seat as reserved
                    printf("Seat at Row %d, Seat %d has been reserved.\n", row, seat);
                }
            }
            else
            {
                printf("Invalid Row or Seat number!\n");
            }
            break;
        case 3:
            printf("Reservation Is Complete\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");
    return 0;
}

