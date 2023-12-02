#include <stdio.h>

int main()
{
    int a,b, temp;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("The Value of A is: %d",a);
    printf("\nThe Value of B is: %d \n",b);
    return 0;
}
