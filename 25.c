/*
Create a Union called library to hold accession number, title of the book, author name,
price of the book and flag indicating whether the book is issued or not. (flag = 1 if the
book is issued, flag = 0 otherwise). Write a program to enter data of one book and
display the data.
*/
#include <stdio.h>

// Define the union for Library
union Library {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int isIssued; // 1 if issued, 0 otherwise
};

int main() {
    union Library book;

    // Input book details
    printf("Enter the accession number: ");
    scanf("%d", &book.accessionNumber);

    // Display accession number
    printf("\nAccession Number: %d\n", book.accessionNumber);

    printf("Enter the title of the book (no spaces): ");
    scanf("%s", book.title);

    // Display title
    printf("Title: %s\n", book.title);

    printf("Enter the author's name (no spaces): ");
    scanf("%s", book.author);

    // Display author
    printf("Author: %s\n", book.author);

    printf("Enter the price of the book: ");
    scanf("%f", &book.price);

    // Display price
    printf("Price: %.2f Rupees\n", book.price);

    printf("Is the book issued? Enter 1 for Yes, 0 for No: ");
    scanf("%d", &book.isIssued);

    // Display issued status
    printf("Book Issued Status: %s\n", (book.isIssued == 1) ? "Yes" : "No");

    printf("\n___________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t  24CE070");

    return 0;
}
