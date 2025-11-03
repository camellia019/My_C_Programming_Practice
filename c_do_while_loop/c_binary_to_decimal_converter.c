#include <stdio.h>
#include <math.h>

int main()
{
    int num, remain, decimal = 0, exponent = 0;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    do
    {

        remain = num % 10;
        decimal = decimal + remain * pow(2, exponent);
        num /= 10;
        exponent++;

    } while (num > 0);

    printf("Decimal equivalent: %d", decimal);

    return 0;
}