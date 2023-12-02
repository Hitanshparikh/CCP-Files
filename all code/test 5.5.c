#include <stdio.h>
#include <ctype.h>
int main() {
  char c;
  printf("Enter a character: ");
  c = getchar();
  printf("You entered: ");
  putchar(c);
  if (isalnum(c)) 
  {
    printf(" is alphanumeric\n");
  }
  if (isalpha(c)) 
  {
    printf(" is an alphabet\n");
  }
  if (isdigit(c)) 
  {
    printf(" is a digit\n");
  }
  if (islower(c)) 
  {
    printf(" is a lowercase letter\n");
  }
  if (isprint(c)) 
  {
    printf(" is a printable char\n");
  }
  if (ispunct(c)) 
  {
    printf(" is a punctuation char\n");
  }
  if (isspace(c)) 
  {
    printf(" is a whitespace char\n");
  }
  if (isupper(c)) 
  {
    printf(" is an uppercase letter\n");
  }
  if (islower(c)) 
  {
    printf("Converted to uppercase: %c\n", toupper(c));
  } else if (isupper(c)) 
  {
    printf("Converted to lowercase: %c\n", tolower(c));
  }
  return 0;
}
