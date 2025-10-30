#include <stdio.h>

int main()
{
    int number, remain, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        remain = number % 10;

        if (remain % 2 == 0)
        {
            sum += remain;
        }

        number /= 10;
    }

    printf("Sum of even numbers: %d", sum);

    return 0;
}