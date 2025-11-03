#include <stdio.h>
int getLCM(int num1, int num2)
{ // num1 = 10, num2 = 20
    int maximum, lcm;

    if (num1 > num2)
    {
        maximum = num1;

        for (int i = maximum;; i++)
        { // i = 1; 1<= 20

            if (i % num1 == 0 && i % num2 == 0)
            {
                return lcm = i;
            }
        }
    }

    else
    {
        maximum = num2;

        for (int i = maximum;; i++)
        { // i = 1; 1<= 20

            if (i % num1 == 0 && i % num2 == 0)
            { // 10/2 = 5 (10 is not prime), 20/2 = 10 (20 is not prime)
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