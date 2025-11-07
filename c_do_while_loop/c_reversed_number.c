#include <stdio.h>

int main()
{
    int num, origNum, remain, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    origNum = num;

    do
    {
        remain = num % 10;
        reverse = (reverse * 10) + remain;
        num /= 10;

    } while (num > 0);

    printf("The reverse number of %d is %d.", origNum, reverse);

    return 0;
}