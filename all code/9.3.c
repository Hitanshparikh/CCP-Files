#include <stdio.h>
void DtoB(int n) {
    if (n > 1) {
        DtoB(n / 2);
    }
    printf("%d", n % 2);
}
int main() {
    int decimalNumber;
    printf("Enter a number: ");
    
    scanf("%d", &decimalNumber);
    if (decimalNumber < 0) {
        printf("Enter a positive integer.\n");
    } else {
        printf("Binary equivalent: ");
        DtoB(decimalNumber);
        printf("\n");
    }
    return 0;
}
