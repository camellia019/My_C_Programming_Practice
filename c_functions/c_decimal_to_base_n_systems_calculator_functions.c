#include <stdio.h>

void convertBase(int num, int base)
{
    char hexDigits[] = "0123456789ABCDEF";

    if (num == 0)
        return;

    convertBase(num / base, base);
    printf("%c", hexDigits[num % base]);
}

int main()
{
    int decimal, base;

    printf("\t\t---Decimal to Base-N System Conversion Calculator---\n\n");

    printf("Enter any decimal number: ");
    scanf("%d", &decimal);

    printf("Enter base number system (2-16): Base ");
    scanf("%d", &base);

    char *baseNumber[] = {
        " ", " ", "Binary", "Base-3", "Base-4", "Base-5",
        "Base-6", "Base-7", "Octal", "Base-9", "Decimal",
        "Base-11", "Base-12", "Base-13", "Base-14", "Base-15",
        "Hexadecimal"};

    if (base < 2 || base > 16)
    {
        printf("Enter a valid base number system between 2 - 16! ");
        return 0;
    }

    printf("From Decimal: %d(10)\n", decimal);

    printf("To %s: ", baseNumber[base]);

    if (decimal == 0)
    {
        printf("0");
    }
    else
    {
        convertBase(decimal, base);
    }

    printf("(%d)", base);

    return 0;
}