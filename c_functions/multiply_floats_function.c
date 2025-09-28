#include <stdio.h>

float multiply(float num1, float num2)
{

    float product = num1 * num2;
    printf("The product of %.2f and %.2f is %.2f.", num1, num2, product);
    return product;
}

int main()
{

    multiply(3.00, 4.00);

    return 0;
}