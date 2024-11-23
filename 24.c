/* Write a C program to create a structure of Book Detail and display the details of the book in appropriate format 
by passing structure as a function argument. Book Detail must contain following information:
Book Title, Author name and Amount of book in float.*/
#include <stdio.h>
#include <string.h>

// Structure for Book Detail
struct BookDetail {
    char title[100];
    char author[100];
    float amount;
};

// Function to display book details
void displayBookDetails(struct BookDetail book) {
    printf("\nBook Details:\n");
    printf("Title  : %s\n", book.title);
    printf("Author : %s\n", book.author);
    printf("Amount : %.2f Rupees\n", book.amount);
}

int main() {
    struct BookDetail book;

    // Input book details
    printf("Enter the book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0'; // Remove newline character

    printf("Enter the author's name: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0'; // Remove newline character

    printf("Enter the price of the book: ");
    scanf("%f", &book.amount);

    // Call the function to display book details
    displayBookDetails(book);
    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");

    return 0;
}
