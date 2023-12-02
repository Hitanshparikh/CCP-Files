#include <stdio.h>

int main()
{
    int yellow = 10, pink = 20, total;

    total = ++yellow + (yellow++ + --yellow + ++pink) - --pink - --pink;
    
    printf("Total= %d",total);

    return 0;
}