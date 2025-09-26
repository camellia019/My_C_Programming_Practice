#include <stdio.h>

int mult(int num1, int num2)
{
    int result = num1 * num2;

    return result;
}

int main()
{

    int result = mult(3, 4);
    printf("The product is %d\n", result);

    result = mult(5, 6);
    printf("The product is %d\n", result);

    result = mult(10, 10);
    printf("The product is %d\n", result);

    result = mult(2000, 3231);
    printf("The product is %d\n", result);

    return 0;
}