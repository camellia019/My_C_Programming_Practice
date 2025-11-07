#include <stdio.h>

int main()
{
    int num, origNum, remain, factorial, i, strongNum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    origNum = num; // compare later

    do
    {
        remain = num % 10;

        factorial = 1;
        i = 1;
        do
        {
            factorial *= i;
            i++;

        } while (i <= remain);

        strongNum += factorial;
        num /= 10;

    } while (num > 0);

    if (strongNum == origNum)
    {
        printf("%d is a strong number.\n", origNum);
    }
    else
        printf("%d is not a strong number.\n", origNum);

    return 0;
}