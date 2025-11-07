#include <stdio.h>

int main()
{
    int num, remain, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0;)
    {

        remain = num % 10;

        if (remain % 2 == 0)
        {
            sum += remain;
        }
        num /= 10;
    }
    printf("The sum of even digits is %d", sum);

    return 0;
}