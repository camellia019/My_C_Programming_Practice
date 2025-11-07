#include <stdio.h>

int main()
{
    int num, origNum, remain, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    origNum = num;

    do
    {
        remain = num % 10;
        sum = sum + remain;
        num /= 10;

    } while (num > 0);

    printf("The sum of %d is %d.", origNum, sum);

    return 0;
}