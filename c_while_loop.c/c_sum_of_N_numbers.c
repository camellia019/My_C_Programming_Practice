#include <stdio.h>

int main()
{

    int n, remain, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        remain = n % 10; // get last number
        sum += remain;   // add all extracted numbers
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}