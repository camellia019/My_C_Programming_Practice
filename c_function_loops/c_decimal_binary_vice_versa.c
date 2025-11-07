#include <stdio.h>
#include <math.h>

int deciNumToBinary(int deciNum)
{
    int remain, binary = 0, exponent = 0; // 50

    while (deciNum > 0)
    {
        remain = deciNum % 2;
        binary = binary + remain * pow(10, exponent);
        deciNum /= 2;
        exponent++;
    }
    return binary;
}

int binaryNumToDecimal(int binaryNum)
{
    int remain, decimal = 0, exponent = 0; // 10/1/0

    while (binaryNum > 0)
    {
        remain = binaryNum % 10;
        decimal = decimal + remain * pow(2, exponent);
        binaryNum /= 10;
        exponent++;
    }

    return decimal;
}

int main()
{
    int menu, deciNum, binaryNum;

    printf("=========================\n");

    printf("\n Number System Converter\n");

    printf("\n=========================\n");

    printf("         Menu\n\n1. Decimal -> Binary\n2. Binary -> Decimal\n3. Exit\n\n");

    printf("=========================\n");

    do
    {
        printf("\n\nChoose a Number System Conversion: ");
        scanf("%d", &menu);

        if (menu == 1)
        {
            printf("Enter a decimal number: ");
            scanf("%d", &deciNum);

            printf("%d = %d", deciNum, deciNumToBinary(deciNum));
        }

        else if (menu == 2)
        {
            printf("Enter a binary number: ");
            scanf("%d", &binaryNum);

            printf("%d = %d", binaryNum, binaryNumToDecimal(binaryNum));
        }

        else if (menu == 3)
        {
            printf("**Exits**\n");
            break;
        }

        else
        {
            printf("Invalid Number! Please choose from the Number System Converter Menu.\n");
        }
    } while (menu > 0);

    return 0;
}