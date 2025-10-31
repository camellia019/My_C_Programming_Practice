#include <stdio.h>

int main()
{

    int sum = 0;

    for (int num = 1; num <= 99; num += 2)
    {
        sum += num;
        printf("+%d = %d\n\n", num, sum);
    }

    printf("Sum of odd numbers (from 1 to 99): %d\n", sum);

    return 0;
}
