#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value a: ");
    scanf("%d", &a);

    printf("Enter value b: ");
    scanf("%d", &b);

    if (a > b)
        printf("%d is greater than %d.", a, b);
    else if (b > a)
        printf("%d is greater than %d.", b, a);
    else if (a == b)
        printf("%d is equal to %d.", a, b);

    return 0;
}