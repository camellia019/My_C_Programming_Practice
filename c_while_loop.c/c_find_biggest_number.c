#include <stdio.h>

int main()
{
    int num, origNum, remain, biggestNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    origNum = num;

    while (num > 0)
    {
        remain = num % 10;
        if (remain > biggestNum)
        {
            biggestNum = remain;
        }
        num /= 10; // 1/2/3/4
    }

    printf("The biggest number of %d is %d", origNum, biggestNum);

    return 0;
}