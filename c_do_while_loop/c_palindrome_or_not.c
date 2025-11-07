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

    if (reverse == origNum)
    {
        printf("%d is a Palindrome\n", origNum);
    }
    else
    {
        printf("%d is not a Palindrome\n", origNum);
    }

    return 0;
}