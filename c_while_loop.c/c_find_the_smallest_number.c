#include <stdio.h>

int main()
{
    int num, origNum, remain, smallestNum = 9;

    printf("Enter a number: ");
    scanf("%d", &num);

    origNum = num;

    while (num > 0)
    {
        remain = num % 10;

        if (remain < smallestNum)
        {
            smallestNum = remain;
        }
        num /= 10;
    }

    printf("The smallest number of %d is %d", origNum, smallestNum);

    return 0;
}