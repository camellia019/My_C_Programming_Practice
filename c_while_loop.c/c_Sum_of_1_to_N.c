#include <stdio.h>

int main()
{
    int num, sum = 0, counter = 0;

    printf("Input = ");
    scanf("%d", &num);

    while (num >= counter)
    {
        sum += counter;
        counter++;
    }

    printf("Output= %d", sum);

    return 0;
}