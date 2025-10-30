#include <stdio.h>

int main()
{
    int num, counter = 10, product;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (counter >= 1)
    {
        product = num * counter;
        printf("%d x %d = %d\n", num, counter, product);
        counter--;
    }

    return 0;
}