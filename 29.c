/*Write a C program using a character string in a block of memory space created by
calloc () and then modify the same to store a larger string using realloc () function.
(Dynamic Array).
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int initialSize, newSize;

    // Step 1: Allocate memory using calloc
    printf("Enter the initial size of the string: ");
    scanf("%d", &initialSize);

    // Allocate memory for the string
    str = (char *)calloc(initialSize, sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the initial string
    printf("Enter a string (up to %d characters): ", initialSize - 1);
    scanf(" ");
    scanf("%[^\n]", str); // Read string with spaces

    printf("\nInitial string: %s\n", str);

    // Step 2: Reallocate memory using realloc
    printf("Enter the new size of the string: ");
    scanf("%d", &newSize);

    str = (char *)realloc(str, newSize * sizeof(char));
    if (str == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Input the new string
    printf("Enter a new string (up to %d characters): ", newSize - 1);
    scanf(" ");
    scanf("%[^\n]", str); // Read string with spaces

    printf("\nModified string: %s\n", str);

    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");

    // Free the allocated memory
    free(str);

    return 0;
}
