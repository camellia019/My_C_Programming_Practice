#include <stdio.h>

int main()
{
    int num, remain, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remain = num % 10;
        reverse = (reverse * 10) + remain;
        num /= 10;
    }

    printf("%d", reverse);

    return 0;
}