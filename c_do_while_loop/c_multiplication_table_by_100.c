#include <stdio.h>

int main()
{
    int num, counter = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        if (num > 0)
        {
            printf("%d x %d = %d\n", num, counter, num * counter);
            counter++;
        }

    } while (counter <= 100);

    return 0;
}