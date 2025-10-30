#include <stdio.h>

int main()
{
    int num, counter = 1, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= counter)
    {
        factorial *= counter;
        counter++;
    }

    printf("The factorial of %d is %d", num, factorial);

    return 0;
}