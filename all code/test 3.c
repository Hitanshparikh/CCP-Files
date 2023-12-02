#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    float length, gravity, time_period;

    printf("Enter the length of the pendulum: ");
    scanf("%f", &length);

    printf("Enter the acceleration due to gravity: ");
    scanf("%f", &gravity);

    time_period = 2 * PI * sqrt(length / gravity);

    printf("The time period of the pendulum is: %.2f\n", time_period);

    return 0;
}