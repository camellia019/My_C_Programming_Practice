#include <stdio.h>

int main()
{

    int num, factorial = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        factorial *= i;
        i++;
    } while (i <= num);

    printf("The factorial of %d is %d.", num, factorial);
    return 0;
}