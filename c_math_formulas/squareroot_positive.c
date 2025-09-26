#include <stdio.h>
#include <math.h>

int main()
{
    int positiveInt;

    printf("Enter a positive integer: ");
    scanf("%d", &positiveInt);

    if (positiveInt >= 0)
    {
        double squareRoot = sqrt(positiveInt);
        printf("Square root of %d is %.2f", positiveInt, squareRoot);
    }

    else
        printf("Error: Input must be a positive integer.");

    return 0;
}