#include <stdio.h>
struct BookDetail {
    char title[100];
    char author[100];
    float price;
};
void displayBookDetails(struct BookDetail book) {
    printf("Book Title: %s\n", book.title);
    printf("Author Name: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
}
int main() {
    struct BookDetail book;
    printf("Enter Book Title: ");
    scanf("%s", book.title);
    printf("Enter Author Name: ");
    scanf("%s", book.author);
    printf("Enter Price of the Book: ");
    scanf("%f", &book.price);
    printf("Book Details:\n");
    displayBookDetails(book);
    return 0;
}