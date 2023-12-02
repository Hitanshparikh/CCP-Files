#include <stdio.h>
int main()
{
    char c[300] ="";
    printf("Enter Characteristics about You in Not more than 50 words: \n");
    gets(c);

    printf("\nYour Characteristics are: \n");
    puts(c);
    return 0;
}
 