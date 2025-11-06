#include <stdio.h>

void allPrimeNumbers(int terms)
{
    int i = 0, prime = 2;

    while (i < terms)
    {
        int isPrime = 1; // prime (true)
        int j = 2;       // prime checker

        while (j <= prime / 2)
        {

            if (prime % j == 0)
            {
                isPrime = 0; // not prime (false)
                break;
            }
            j++;
        }

        if (isPrime)
        {
            printf("%d ", prime);
            i++;
        }

        prime++;
    }
}

int main()
{
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    allPrimeNumbers(terms);

    return 0;
}