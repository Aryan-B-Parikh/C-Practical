/*
Write a C program to create a structure of Book Detail and display the details of the
book in appropriate format by passing structure as a function argument.
Book Detail must contain following information:
Book Title, Author name and Amount of book in float.
*/
#include <stdio.h>

struct book_details
{
    char title[30];
    char author[30];
    float num;
}b;
void display();
void display()
{
    printf("\nThe name of the book is:%s",b.title);
    printf("\nThe author of the book is:%s",b.author);
    printf("\nThe price of the book is:%f",b.num);
}
void main()
{
    printf("Enter the name of the book:");
    scanf("%s",b.title);
    printf("\nEnter the name of author:");
    scanf("%s",b.author);
    printf("\nEnter the price of the book:");
    scanf("%f",&b.num);
    printf("\n\n\t\t\t:The Book Details Are:");
    display();
    printf("\n_________________________________________");
    printf("\n This practical is created by Aryan Parikh\n\t\t24CE070");
}