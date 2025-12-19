#include <stdio.h>
#include <math.h>

int main()
{
    int binaryNum, originalBitNum, binaryBits, exponent = 0, decimalValue = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);

    originalBitNum = binaryNum;

    while (binaryNum > 0)
    {
        binaryBits = binaryNum % 10; // 1/0/1/0
        decimalValue = decimalValue + binaryBits * pow(2, exponent); // 0 + 0 x 2^0 = 0
        binaryNum /= 10;
        exponent++;
    }

    printf("Binary: %d\nDecimal: %d", originalBitNum, decimalValue);

    return 0;
}