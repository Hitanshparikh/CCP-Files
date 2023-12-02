#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("Provide Decimal Number: ");
    scanf("%d", &number);

    printf("\nDecimal: %d", number);
    printf("\nOctaDecimal: %o", number);
    printf("\nHexaDecimal: %x\n", number);
}
