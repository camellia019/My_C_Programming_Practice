#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Perfect numbers up to %d:\n", n);

    for (int i = 1; i <= n; i++)
    {

        sum = 0;

        for (int j = 1; j <= i / 2; j++)
        {

            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}