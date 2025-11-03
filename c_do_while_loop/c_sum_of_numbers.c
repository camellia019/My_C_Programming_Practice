#include <stdio.h>

int main()
{
    int num, sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num != 0)
        {
            sum += num;
        }

    } while (num);

    printf("Total Sum: %d", sum);

    return 0;
}