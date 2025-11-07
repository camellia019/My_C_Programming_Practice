#include <stdio.h>

int main()
{
    int num, countEven = 0, countOdd = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 == 0 && num >= 0)
        {
            countEven++;
        }
        else if (num % 2 != 0 && num >= 0)
        {
            countOdd++;
        }

    } while (num >= 0);

    printf("Total Even Numbers: %d\n", countEven);
    printf("Total Odd Numbers: %d\n", countOdd);

    return 0;
}