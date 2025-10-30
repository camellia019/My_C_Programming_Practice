#include <stdio.h>

int main()
{
    int num, remain, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        // 1/2/3/4
        remain = num % 10;

        if (remain / 1 == remain)
        {
            digit++;
        }
        num /= 10;
    }

    printf("There are %d digits", digit);

    return 0;
}