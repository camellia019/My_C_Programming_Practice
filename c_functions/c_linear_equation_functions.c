#include <stdio.h>

double calculateLinearEquation(double x, double slope, double y)
{
    return x * slope + y;
}

int main()
{
    double x, slope, y;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter slope: ");
    scanf("%lf", &slope);

    printf("Enter y intercept: ");
    scanf("%lf", &y);

    printf("Result: %.1f", calculateLinearEquation(x, slope, y));

    return 0;
}