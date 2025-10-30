#include <stdio.h>

int main()
{
    int num, remain, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10)
    {
        sum = 0;

        while (num > 0)
        {
            remain = num % 10; // 1/2/3/4
            sum += remain;     // 0+4 = 4; 4 + 3 = 7; 7 + 2 = 9; 9 + 1 = 10
            num /= 10;         // 1234 -> 123 -> 12 -> 1
        }
        num = sum;
    }

    printf("Sum: %d", num);

    return 0;
}