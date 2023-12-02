#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num)
        return 1;
    else
        return 0;
}
int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
int main() {
    int choice, num;
    do {
        printf("Menu:\n");
        printf("1. Check if a number is prime\n");
        printf("2. Check if a number is Armstrong\n");
        printf("3. Check if a number is Perfect\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isArmstrong(num))
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is not an Armstrong number.\n", num);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPerfect(num))
                    printf("%d is a perfect number.\n", num);
                else
                    printf("%d is not a perfect number.\n", num);
                break;
            case 4:
                printf("Exit\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);
    return 0;
}
