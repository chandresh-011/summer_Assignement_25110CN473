#include <stdio.h>

struct Library
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Library book;

    printf("Enter Book ID: ");
    scanf("%d", &book.bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", book.title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book.author);

    printf("\n--- Book Details ---\n");
    printf("Book ID : %d\n", book.bookId);
    printf("Title   : %s\n", book.title);
    printf("Author  : %s\n", book.author);

    return 0;
}