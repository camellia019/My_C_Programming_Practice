#include <stdio.h>
#include <math.h>

int main()
{
    int num, origNum, compareOrigNum, remain, digit = 0, armStrongSum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    origNum = num;
    compareOrigNum = origNum;

    while (num > 0)
    {
        digit++;
        num /= 10; // count how many digits in a number
    }

    while (origNum > 0)
    {
        remain = origNum % 10; // 1/5/3
        armStrongSum = armStrongSum + pow(remain, digit);
        origNum /= 10;
    }

    if (armStrongSum == compareOrigNum)
        printf("%d is an Armstrong Number.\n", compareOrigNum);

    else
        printf("%d is Not an Armstrong Number.\n", compareOrigNum);

    printf("%d^ %d = %d", remain, digit, armStrongSum);

    return 0;
}