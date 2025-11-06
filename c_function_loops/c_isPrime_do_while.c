#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    int i = 2; // prime starts at 2

    if (num < 2)
    {
        return 0;
    }

    do
    {
        if (num != 2 && num % 1 == 0)
        {
            return 0;
        }
        i++;

    } while (i <= sqrt(num));

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}