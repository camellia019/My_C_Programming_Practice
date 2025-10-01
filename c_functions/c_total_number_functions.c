#include <stdio.h>

int totalSum(int num)
{
    int hundreds = num / 100;
    int tens = num % 100 / 10;
    int ones = num % 100 % 10;
    return hundreds + tens + ones;
}

int main()
{
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999)
    {
        printf("Please enter a valid three-digit number!");
    }

    else
    {
        printf("The total number is %d.", totalSum(num));
    }

    return 0;
}