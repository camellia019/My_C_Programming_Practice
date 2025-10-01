#include <stdio.h>

void isDivisible3_5(int num)
{

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5\n", num);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5\n", num);
    }
    return;
}

int main()
{

    isDivisible3_5(100);
    isDivisible3_5(150);
    isDivisible3_5(70);
    isDivisible3_5(750);
    isDivisible3_5(1450);

    return 0;
}