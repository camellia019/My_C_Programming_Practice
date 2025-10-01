#include <stdio.h>

void compareNum(int num1, int num2)
{
    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);
    if (num2 > num1)
        printf("%d is greater than %d\n", num2, num1);
    if (num1 == num2)
        printf("%d is equal to %d\n", num1, num2);
}

int main()
{

    compareNum(1, 1);
    compareNum(12, 2929);
    compareNum(500, 12131);
    compareNum(4314, 53252);
    compareNum(1000, 1000);
    compareNum(-42141, 1);

    return 0;
}