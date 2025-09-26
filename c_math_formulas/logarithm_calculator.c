#include <stdio.h>
#include <math.h>

int main()
{
    double positiveRealNum;

    printf("Enter a positive real number: ");
    scanf("%lf", &positiveRealNum);

    if (positiveRealNum > 0.00)
    {
        double result = log(positiveRealNum);
        printf("Natural logarithm of %.2f is %.2f", positiveRealNum, result);
    }

    else
        printf("Error: Entered number is not positive");

    return 0;
}
