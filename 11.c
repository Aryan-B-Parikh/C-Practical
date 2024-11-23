/*Develop a C program that simulates a matchstick game between the user and the
computer. The objective of the game is to avoid picking the last matchstick. The
program should ensure that the computer always wins by strategically picking
matchsticks. The game starts with 21 matchsticks. The user and the computer take
turns to pick 1, 2, 3, or 4 matchsticks. The player forced to pick the last matchstick
loses the game.
*/
// Header File.
#include <stdio.h>
void main()
{

    int Up, m = 21, Cp; // Here Up is User Pick , m is matchsticks , Cp is Computer Pick.
                        // Rules of Game.
    printf("Rules Of Game :\n1. The game starts with 21 matchsticks.");
    printf("\n2. The user is asked to pick 1, 2, 3, or 4 matchsticks.");
    printf("\n3. After the user picks, the computer makes its pick.");
    printf("\n4. The player who is forced to pick the last matchstick loses the game");
    printf("\n\n\nTotal match sticks is 21.");

    // Using Loop and Show The Output.

    while (1)
    {
        printf("\n_________________________________________________");
        printf("\nPick Your Matchsticks (Range 1-4) :");
        scanf("%d", &Up);
        if (Up > 5 || Up < 1)
        {
            printf("\n_________________________________________________");
            printf("\nPlease Enter A valid Input!!! \nRange of 1 to 4.");
        }
        if (Up <= 4 || Up >= 1)
        { // When User Enter Range of 1 To 4 This condition is True And Run.

            m = m - Up;
            printf("\n_________________________________________________");
            printf("\nTotal matchstics is :%d", m);
            Cp = 5 - Up;
            printf("\n_________________________________________________");
            printf("\nComputer Pick is : %d", Cp);
            m = m - Cp;
            printf("\n_________________________________________________");
            printf("\nTotal Matchsticks is : %d", m);

        } // when Last one matchstick is now this condition is true And Run..
        if (m == 1)
        {
            printf("\n_________________________________________________");
            printf("\nTotal matchsticks is : %d", m);
            printf("\n_________________________________________________");

            printf("\nYou Are Looser!!!");
            break;
        }
    }

    printf("\n24CE070_ARYAN");
}
