#include <stdio.h>
#include <math.h>

float min(float a, float b, float c)
{
    return fmin(fmin(a, b), c);
}

int main()
{
    float a, b, c;

    printf("Enter first value: ");
    scanf("%f", &a);

    printf("Enter second value: ");
    scanf("%f", &b);

    printf("Enter third value: ");
    scanf("%f", &c);

    printf("Minimum Value: %.3f", min(a, b, c));

    return 0;
}