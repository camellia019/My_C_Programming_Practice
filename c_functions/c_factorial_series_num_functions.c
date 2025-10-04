#include <stdio.h>

int factorial(int num)
{
    if (num > 0)
        return num * factorial(num - 1);
    return 1;
}

int seriesSum(int num)
{
    if (num == 1)
        return 1;
    else
        return (factorial(num) / num) + seriesSum(num - 1);
}

int main()
{

    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("The sum of the series is %d", seriesSum(num));

    return 0;
}