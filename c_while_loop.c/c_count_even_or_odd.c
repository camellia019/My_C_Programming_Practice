#include <stdio.h>

int main()
{
    int num, remain, even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        remain = num % 10;

        if (remain % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        num /= 10;
    }

    printf("Even = %d, Odd = %d", even, odd);

    return 0;
}