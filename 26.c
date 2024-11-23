/*
You are tasked with creating a system for managing sports teams in
CHARUSAT. Each team consists of a team name, sport type (e.g., basketball,
football), and a coach. Each coach has details such as name, age, and experience.
Your program should:
 Store information about multiple sports teams and their coaches.
 Allow the user to add, search, and display team and coach information.
Hint: Use a nested structure where the team structure contains another structure
for coach details.*/

#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100

// Define the structure for Coach
struct Coach {
    char name[100];
    int age;
    int experience; // in years
};

// Define the structure for Team
struct Team {
    char teamName[100];
    char sportType[50];
    struct Coach coach;
};

// Function prototypes
void addTeam(struct Team teams[], int *count);
void searchTeam(struct Team teams[], int count);
void displayTeams(struct Team teams[], int count);

int main() {
    struct Team teams[MAX_TEAMS];
    int teamCount = 0;
    int choice;

    do {
        printf("\n--- Sports Team Management System ---\n");
        printf("1. Add Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTeam(teams, &teamCount);
                break;
            case 2:
                searchTeam(teams, teamCount);
                break;
            case 3:
                displayTeams(teams, teamCount);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");

    return 0;
}

// Function to add a team
void addTeam(struct Team teams[], int *count) {
    if (*count >= MAX_TEAMS) {
        printf("Maximum team limit reached.\n");
        return;
    }

    printf("\nEnter team name: ");
    scanf(" %[^\n]s", teams[*count].teamName);
    printf("Enter sport type: ");
    scanf(" %[^\n]s", teams[*count].sportType);

    printf("\n--- Enter Coach Details ---\n");
    printf("Enter coach name: ");
    scanf(" %[^\n]s", teams[*count].coach.name);
    printf("Enter coach age: ");
    scanf("%d", &teams[*count].coach.age);
    printf("Enter coach experience (in years): ");
    scanf("%d", &teams[*count].coach.experience);

    (*count)++;
    printf("Team added successfully.\n");
}

// Function to search for a team by name
void searchTeam(struct Team teams[], int count) {
    char searchName[100];
    printf("\nEnter team name to search: ");
    scanf(" %[^\n]s", searchName);

    for (int i = 0; i < count; i++) {
        if (strcmp(teams[i].teamName, searchName) == 0) {
            printf("\n--- Team Details ---\n");
            printf("Team Name   : %s\n", teams[i].teamName);
            printf("Sport Type  : %s\n", teams[i].sportType);
            printf("\n--- Coach Details ---\n");
            printf("Name        : %s\n", teams[i].coach.name);
            printf("Age         : %d\n", teams[i].coach.age);
            printf("Experience  : %d years\n", teams[i].coach.experience);
            return;
        }
    }

    printf("Team not found.\n");
}

// Function to display all teams
void displayTeams(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams available to display.\n");
        return;
    }

    printf("\n--- All Teams ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name   : %s\n", teams[i].teamName);
        printf("Sport Type  : %s\n", teams[i].sportType);
        printf("\n--- Coach Details ---\n");
        printf("Name        : %s\n", teams[i].coach.name);
        printf("Age         : %d\n", teams[i].coach.age);
        printf("Experience  : %d years\n", teams[i].coach.experience);
    }
}
