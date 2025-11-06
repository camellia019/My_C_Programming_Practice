#include <stdio.h>
int getLCM(int num1, int num2)
{ // num1 = 10, num2 = 20
    int maximum, lcm;

    if (num1 > num2)
    {
        maximum = num1;

        for (int i = maximum;; i++)
        {

            if (i % num1 == 0 && i % num2 == 0)
            {
                return lcm = i;
            }
        }
    }

    else
    {
        maximum = num2; // num2 = 20

        for (int i = maximum;; i++)
        { // i = 20

            if (i % num1 == 0 && i % num2 == 0)
            { // 20/10 = 2r 0 & 20/20 = 1r 0
                return lcm = i;
            }
        }
    }
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("The LCM of %d and %d is %d.\n", num1, num2, getLCM(num1, num2));

    return 0;
}