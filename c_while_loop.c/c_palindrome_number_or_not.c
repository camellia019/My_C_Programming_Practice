#include <stdio.h>

int main()
{
    int num, remain, originalNum, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // we do this to store the value & compare it later

    while (num > 0)
    {
        remain = num % 10; /*same concept with reversed numbers*/
        reverse = (reverse * 10) + remain;
        num /= 10;
    }

    if (reverse == originalNum)
    {
        printf("%d is a Palindrome.", originalNum);
    }
    else
    {
        printf("%d is not a Palindrome.", originalNum);
    }

    return 0;
}