#include <stdio.h>

int main()
{

    int lowerLimit, upperLimit;

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("\nAll Odd Numbers from %d to %d are:\n", lowerLimit, upperLimit);

    while (lowerLimit <= upperLimit)
    {

        if (lowerLimit % 2 == 0)
        {
            lowerLimit++;
        }
        else
        {
            printf("%d\n", lowerLimit);
            lowerLimit++;
        }
    }

    return 0;
}