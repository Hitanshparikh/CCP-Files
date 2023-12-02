#include <stdio.h>

int main()
{
    int yellow = 10, rajiv,preet,raj,ritul;
    rajiv = ++yellow;
    preet = --yellow;
    printf("Preincrement: \nRajiv = %d \nPreet = %d",rajiv,preet);

    raj = yellow++;
    ritul = yellow--;

    printf("\nPostincrement: \nRaj = %d \nRitul = %d",raj,ritul);

    return 0;
}