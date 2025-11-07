#include <stdio.h>
#include <math.h>

void isArmStrongNum(int num)
{
    int digits = 0, remain, armStrong = 0;

    int origNum = num;

    do
    { // count how many digits
        digits++;
        num /= 10;

    } while (num > 0);

    do
    {
        remain = num % 10;
        armStrong = armStrong + pow(remain, digits);
        num /= 10;

    } while (num > 0);

    if (armStrong == origNum)
        printf("%d is an Armstrong number.\n", origNum);

    else
        printf("%d is not an Armstrong number.\n", origNum);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    isArmStrongNum(num);

    return 0;
}