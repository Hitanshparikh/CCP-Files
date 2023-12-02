#include <stdio.h>
union Library {
    int accession_number;
    char title[100];
    char author[50];
    float price;
    int issued_flag;
};
int main() {
    union Library a1;
    int a1;
    printf("Enter accession number: ");
    scanf("%d", &a1.accession_number);

    printf("Enter title of the book: ");
    scanf("%s", book.title);

    printf("Enter author's name: ");
    scanf("%s", book.author);

    printf("Enter price of the book: ");
    scanf("%f", &book.price);

    printf("Is the book issued? (1 for yes, 0 for no): ");
    scanf("%d", &book.issued_flag);
    printf("\nBook Information:\n");
    printf("Accession Number: %d\n", a1.accession_number);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Issued Flag: %d\n", book.issued_flag);
    return 0;
}
