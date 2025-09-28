#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    double floats = (double)num1 * (double)num2;
    double result = floats - 3.22;

    printf("%.2f", result);

    return 0;
}