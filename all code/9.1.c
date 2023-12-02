#include <stdio.h>
void checkFactorialNoArgsNoReturn();
int checkFactorialNoArgsWithReturn();
void checkFactorialWithArgNoReturn(int n);
int checkFactorialWithArgAndReturn(int n);
int main() {
    int n;
    printf("Enter a number to check if it's a factorial: ");
    scanf("%d", &n);
    checkFactorialNoArgsNoReturn();
    int result = checkFactorialNoArgsWithReturn();
    if (result)
        printf("%d is a factorial.\n", n);
    else
        printf("%d is not a factorial.\n", n);
    checkFactorialWithArgNoReturn(n);
    int isFactorial = checkFactorialWithArgAndReturn(n);
    if (isFactorial)
        printf("%d is a factorial.\n", n);
    else
        printf("%d is not a factorial.\n", n);
    return 0;
}
void checkFactorialNoArgsNoReturn() {
    int n, i, fact = 1;
    printf("Enter a number to check if it's a factorial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
        if (fact == n) {
            printf("%d is a factorial.\n", n);
            return;
        }
    }

    printf("%d is not a factorial.\n", n);
}
int checkFactorialNoArgsWithReturn() {
    int n, i, fact = 1;
    printf("Enter a number to check if it's a factorial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
        if (fact == n) {
            return 1;
        }
    }
    return 0;
}
void checkFactorialWithArgNoReturn(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
        if (fact == n) {
            printf("%d is a factorial.\n", n);
            return;
        }
    }
    printf("%d is not a factorial.\n", n);
}
int checkFactorialWithArgAndReturn(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
        if (fact == n) {
            return 1;
        }
    }
    return 0;
}