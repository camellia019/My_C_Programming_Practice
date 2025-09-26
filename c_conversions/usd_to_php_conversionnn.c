#include <stdio.h>

int main()
{
    double usd, exchangeRate;

    printf("United State Dollar to Philippine Peso\n");
    printf("Enter value in United State Dollar: $ ");
    scanf("%lf", &usd);

    exchangeRate = usd * 57.05;

    printf("Philippine Peso: P%.2lf", exchangeRate);
    return 0;
}