#include <stdio.h>

int factorial(int num)
{
    if (num > 0)                         // base case
        return num * factorial(num - 1); // function calls itself
    return 1;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}