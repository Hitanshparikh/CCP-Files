#include <stdio.h>
#include <math.h>
double calculateTriangleArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
int isTriangle(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a)
        return 1;
    else
        return 0;
}
int main() {
    double a, b, c;
    printf("Enter the lengths of three sides of the triangle (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (isTriangle(a, b, c)) {
        double area = calculateTriangleArea(a, b, c);                                     
        printf("The triangle with sides %.2lf, %.2lf, and %.2lf is valid.\n", a, b, c);
        printf("Area of the triangle is: %.2lf\n", area);
    } else {
        printf("The given sides %.2lf, %.2lf, and %.2lf do not form a valid triangle.\n", a, b, c);
    }

    return 0;
}

