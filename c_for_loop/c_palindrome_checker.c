#include <stdio.h>

int main()
{
    int num, origNum, remain, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    origNum = num; // store it so imma compare it later

    for (; num > 0; num /= 10)
    {
        reverse = (reverse * 10) + num % 10; // (0 x 10 + 1 = 1);
    } // (1 x 10 + 2 = 12);
      // (12 x 10 + 1 = 121)

    if (reverse == origNum)
    {
        printf("%d is a palindrome number\n", origNum);
    }
    else
    {
        printf("%d is not a palindrome number\n", origNum);
    }

    return 0;
}