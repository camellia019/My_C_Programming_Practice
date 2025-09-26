#include <stdio.h>

int main()
{
    int firstNum = 6, secondNum = 4, sum, difference, product, quotient, remainder;

    printf("Enter first value: ");
    scanf("%d", &firstNum);

    printf("Enter second value: ");
    scanf("%d", &secondNum);

    sum = firstNum + secondNum;
    difference = firstNum - secondNum;
    product = firstNum * secondNum;
    quotient = firstNum / secondNum;
    remainder = firstNum % secondNum;

    printf("The sum of %d and %d is %d\n", firstNum, secondNum, sum);

    printf("The difference of %d and %d is %d\n", firstNum, secondNum, difference);

    printf("The product of %d and %d is %d\n", firstNum, secondNum, product);

    printf("The quotient of %d and %d is %d with a remainder of %d", firstNum, secondNum, quotient, remainder);

    return 0;
}